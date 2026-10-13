-- Set 4: Perform the following tasks.

-- Question 1: Create STUDENT and insert information for five students.
CREATE TABLE student (
    roll NUMBER(3) PRIMARY KEY,
    name CHAR(30) UNIQUE NOT NULL,
    dob  DATE,
    city CHAR(20)
);

-- Question 2: Create FEES and insert three fee records for each student.
CREATE TABLE fees (
    roll    NUMBER(3) REFERENCES student(roll),
    fdate   DATE NOT NULL,
    famount NUMBER(7, 2) CHECK (famount < 25000)
);


-- Question 3: Write SQL query to display NAME, FEES_DATE, FEES_AMOUNT for students living in 'Bhavnagar'.
SELECT name,  fdate,  famount
FROM student A, fees B
WHERE A.roll = B.roll
  AND city = 'Bhavnagar';

-- Question 4: Write SQL query to display name of student who paid minimum fees.
SELECT name
FROM student A, fees B
WHERE A.roll = B.roll
  AND famount = (
      SELECT MIN(famount)
      FROM fees
  );

-- Question 5: Write SQL query to display the name of city and total fees collected from students of city.
SELECT city, SUM(famount)
FROM student A, fees B
WHERE A.roll = B.roll
GROUP BY city;

-- Question 6: Write SQL query to display name of students who born in month NOVERMBER.
SELECT name
FROM student
WHERE TO_CHAR(dob, 'mon') = 'nov';

-- Question 7: Write query to display total fees collected in 'JANUARY' month.
SELECT TO_CHAR(fdate, 'mon') "month", SUM(famount)
FROM fees
WHERE TO_CHAR(fdate, 'mon') = 'jan'
GROUP BY TO_CHAR(fdate, 'mon');

-- Question 8: Write query to display name of oldest student (maximum in age).
SELECT name
FROM student
WHERE dob = (
    SELECT MIN(dob)
    FROM student
);




INSERT INTO student VALUES (1, 'Amit', '15-jan-2000', 'Bhavnagar');
INSERT INTO student VALUES (2, 'Bhavya', '25-mar-1999', 'Rajkot');
INSERT INTO student VALUES (3, 'Chetan', '10-nov-2001', 'Bhavnagar');
INSERT INTO student VALUES (4, 'Diya', '20-aug-1998', 'Ahmedabad');
INSERT INTO student VALUES (5, 'Esha', '05-dec-2002', 'Bhavnagar');


INSERT INTO fees VALUES (1, '05-jan-2024', 18000);
INSERT INTO fees VALUES (1, '12-feb-2024', 22000);
INSERT INTO fees VALUES (1, '18-mar-2024', 15000);

INSERT INTO fees VALUES (2, '06-jan-2024', 21000);
INSERT INTO fees VALUES (2, '14-feb-2024', 17000);
INSERT INTO fees VALUES (2, '22-mar-2024', 19500);

INSERT INTO fees VALUES (3, '08-jan-2024', 20000);
INSERT INTO fees VALUES (3, '15-feb-2024', 16000);
INSERT INTO fees VALUES (3, '25-mar-2024', 23000);

INSERT INTO fees VALUES (4, '09-jan-2024', 18500);
INSERT INTO fees VALUES (4, '16-feb-2024', 17500);
INSERT INTO fees VALUES (4, '27-mar-2024', 14500);

INSERT INTO fees VALUES (5, '11-jan-2024', 24000);
INSERT INTO fees VALUES (5, '18-feb-2024', 13000);
INSERT INTO fees VALUES (5, '28-mar-2024', 21000);






