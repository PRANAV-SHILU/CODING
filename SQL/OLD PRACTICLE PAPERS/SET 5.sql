-- Set 5: Perform the following tasks.

-- Question 1: Create ACCOUNT 
CREATE TABLE account (
    accid   NUMBER(3) PRIMARY KEY,
    name    CHAR(20) UNIQUE NOT NULL,
    op_date DATE,
    acctype CHAR(1) CHECK (acctype IN ('S', 'C'))
);

-- Question 2: Create TRANSACTION and connect ACCID to ACCOUNT(ACCID).
CREATE TABLE transaction (
    trid     NUMBER(4) PRIMARY KEY,
    trdate   DATE,
    tramount NUMBER(10, 2),
    accid    NUMBER(3) REFERENCES account(accid)
);



INSERT INTO account VALUES (101, 'rahul', '10-jan-2024', 'S');
INSERT INTO account VALUES (102, 'priya', '15-feb-2024', 'C');
INSERT INTO account VALUES (103, 'aman', '20-mar-2024', 'S');
INSERT INTO account VALUES (104, 'karan', '05-apr-2024', 'C');
INSERT INTO account VALUES (105, 'neha', '12-dec-2024', 'S');

-- Positive amount means deposit; negative amount means withdrawal.
INSERT INTO transaction VALUES (1, '12-jan-2024', 50000, 101);
INSERT INTO transaction VALUES (2, '20-jan-2024', -10000, 101);
INSERT INTO transaction VALUES (3, '18-feb-2024', 75000, 102);
INSERT INTO transaction VALUES (4, '25-feb-2024', -15000, 102);
INSERT INTO transaction VALUES (5, '22-mar-2024', 30000, 103);
INSERT INTO transaction VALUES (6, '28-mar-2024', -5000, 103);
INSERT INTO transaction VALUES (7, '10-apr-2024', 90000, 104);
INSERT INTO transaction VALUES (8, '18-apr-2024', -20000, 104);
INSERT INTO transaction VALUES (9, '20-dec-2024', 45000, 105);
INSERT INTO transaction VALUES (10, '27-dec-2024', -7000, 105);



-- Question 3: Display the total number of saving and current accounts.
SELECT acctype, COUNT(*) "total_accounts"
FROM account
GROUP BY acctype;


-- Question 4: Display the name of the account holder with the maximum deposit.
SELECT name
FROM account
WHERE accid = (
    SELECT accid
    FROM transaction
    WHERE tramount > 0
    GROUP BY accid
    HAVING SUM(tramount) = (
        SELECT MAX(SUM(tramount))
        FROM transaction
        WHERE tramount > 0
        GROUP BY accid
    )
);


-- Question 5: Display the name of account holder and total transaction performed by account holders.
SELECT name, SUM(ABS(tramount)) AS total_transaction
FROM account a, transaction b
WHERE a.accid = b.accid
GROUP BY a.name;


-- Question 6: Display account holders who opened their account in December.
SELECT name
FROM account
WHERE TO_CHAR(op_date, 'mon') = 'dec';


-- Question 7: Display account holders who have not performed a withdrawal.
SELECT name
FROM account
WHERE accid NOT IN (
    SELECT DISTINCT accid
    FROM transaction
    WHERE tramount < 0
);


-- Question 8: Create an index on ACCOUNT(NAME).
CREATE INDEX idx_account_name ON account(name);
-- NAME is already indexed automatically by the UNIQUE constraint in ACCOUNT.