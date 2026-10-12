CREATE TABLE item (
    itemno NUMBER(3) PRIMARY KEY,
    name   VARCHAR2(20) UNIQUE NOT NULL,
    price  NUMBER(6, 2)
);

CREATE TABLE order2 (
    oid     NUMBER(3),
    odate   DATE,
    itemno  NUMBER(3),
    qtysold NUMBER(3) CHECK (qtysold >= 0),
    PRIMARY KEY (oid, itemno)
);


INSERT INTO item VALUES (1, 'chair', 100);
INSERT INTO item VALUES (2, 'bed', 200);
INSERT INTO item VALUES (3, 'table', 300);

INSERT INTO order2 VALUES (1, '12-aug-2024', 1, 10);
INSERT INTO order2 VALUES (2, '12-march-2024', 1, 10);
INSERT INTO order2 VALUES (3, '12-aug-2024', 1, 10);
INSERT INTO order2 VALUES (1, '12-aug-2024', 2, 10);
INSERT INTO order2 VALUES (1, '12-aug-2024', 3, 10);



-- Question 3: Write SQL query to display ordered information placed in month MARCH.
SELECT *
FROM order2
WHERE TO_CHAR(odate, 'mon') = 'mar';


-- Question 4: Write SQL query to display item name and total quantity sold and total amount collected.
SELECT name,
       SUM(qtysold) AS total_qty,
       SUM(qtysold * price) AS total_sales
FROM item A, order2 B
WHERE A.itemno = B.itemno
GROUP BY name;


-- Question 5: Write SQL query to display name of item through which maximum amount earns.
SELECT name
FROM item A, order2 B
WHERE A.itemno = B.itemno
GROUP BY name
HAVING SUM(qtysold * price) = (
    SELECT MAX(SUM(qtysold * price))
    FROM item A, order2 B
    WHERE A.itemno = B.itemno
    GROUP BY name
);


-- Question 6: Write SQL query to display order number and total amount of ordered for all orders.
SELECT oid, SUM(qtysold)
FROM order2
GROUP BY oid;


-- Question 7: Write name of costliest item.
SELECT name
FROM item
WHERE price = (SELECT MAX(price) FROM item);


-- Question 8: Write SQL query to display last three character of item.
SELECT SUBSTR(name, -3)
FROM item;