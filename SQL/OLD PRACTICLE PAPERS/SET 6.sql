CREATE TABLE company (
    cid  NUMBER(3) PRIMARY KEY,
    name CHAR(30) UNIQUE NOT NULL,
    city CHAR(15)
);

CREATE TABLE medicine (
    mid   NUMBER(3) PRIMARY KEY,
    mname CHAR(30) UNIQUE NOT NULL,
    mfg   DATE,
    exp   DATE,
    price NUMBER(8, 2),
    cid   NUMBER(3),
    CHECK (exp > mfg)
);


INSERT INTO company VALUES (1, 'tata', 'bhavnagar');
INSERT INTO company VALUES (2, 'birla', 'rajkot');

INSERT INTO medicine VALUES (1, 'paracetamol', '10-aug-65', '24-jan-75', 100, 1);
INSERT INTO medicine VALUES (2, 'hydroxil', '10-aug-65', '24-jan-75', 200, 2);



-- Question 3: Write SQL query to display name of medicine and its company name.
SELECT mname, name
FROM company A, medicine B
WHERE A.cid = B.cid;


-- Question 4: Write SQL query to display name of medicine and price of medicine in descending order of price.
SELECT mname, price
FROM medicine
ORDER BY price DESC;


-- Question 5: Write query to display name of costliest medicine.
SELECT mname
FROM medicine
WHERE price = (SELECT MAX(price) FROM medicine);


-- Question 6: Write query to display name of medicine which contain exactly two 'a'.
SELECT mname
FROM medicine
WHERE mname LIKE '%a%a%'
    AND mname NOT LIKE '%a%a%a%';


-- Question 7: Create sequence starting value 10, increment value 2, maximum value 50.
CREATE SEQUENCE set6
    START WITH 10
    INCREMENT BY 2
    MAXVALUE 50;


-- Question 8: Create read only view which contain company name, medicine name and price.
CREATE VIEW set6View AS
SELECT name, mname, price
FROM company A, medicine B
WHERE A.cid = B.cid
WITH READ ONLY;