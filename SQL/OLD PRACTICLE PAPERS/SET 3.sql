-- Set 3: Perform the following tasks.

-- Question 1: Create TEAM and insert name of 3 cricket teams.
CREATE TABLE team (
    tid NUMBER(3) PRIMARY KEY,
    tname CHAR(20) NOT NULL
);

-- Question 2: Create PLAYER and insert information of 4 players for each team.
CREATE TABLE player (
    pid NUMBER(3) PRIMARY KEY,
    pname CHAR(20) NOT NULL,
    pdob DATE,
    wicket_taken NUMBER(2) CHECK (wicket_taken < 11),
    run NUMBER(3),
    tid NUMBER(3) REFERENCES team(tid)
);


INSERT INTO team (tid, tname) VALUES (1, 'India');
INSERT INTO team (tid, tname) VALUES (2, 'Australia');
INSERT INTO team (tid, tname) VALUES (3, 'England');

INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (101, 'Virat', DATE '1990-11-05', 5, 240, 1);
INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (102, 'Rohit', DATE '1989-04-30', 2, 310, 1);
INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (103, 'Bumrah', DATE '1993-12-06', 7, 15, 1);
INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (104, 'Hardik', DATE '1993-10-11', 3, 180, 1);

INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (201, 'Smith', DATE '1989-06-02', 1, 252, 2);
INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (202, 'Warner', DATE '1987-01-27', 0, 298, 2);
INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (203, 'Starc', DATE '1990-01-30', 8, 42, 2);
INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (204, 'Maxwell', DATE '1988-10-14', 4, 205, 2);

INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (301, 'Root', DATE '1990-12-30', 2, 266, 3);
INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (302, 'Buttler', DATE '1990-08-08', 1, 224, 3);
INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (303, 'Anderson', DATE '1982-07-30', 9, 10, 3);
INSERT INTO player (pid, pname, pdob, wicket_taken, run, tid) VALUES (304, 'Brook', DATE '1999-02-22', 0, 198, 3);


-- Question 3: Write select query to display PNAME and TNAME who has taken maximum wicket.
SELECT pname, tname
FROM team A, player B
WHERE A.tid = B.tid
  AND wicket_taken = (
      SELECT MAX(wicket_taken)
      FROM player
  );


-- Question 4: Write select query to display PNAME of oldest player (Maximum in age).
SELECT pname
FROM player
WHERE pdob = (
    SELECT MIN(pdob)
    FROM player
);


-- Question 5: Write select query to display TNAME and Total run of team.
SELECT tname, SUM(run)
FROM team A, player B
WHERE A.tid = B.tid
GROUP BY B.tid, tname;


-- Question 6: Write select query to display name of player who has taken more than 2 wickets of Indian team.
SELECT pname
FROM player
WHERE wicket_taken > 2
  AND tid = (
      SELECT tid
      FROM team
      WHERE tname = 'India'
  );


-- Question 7: Write select query to display PNAME, WICKET_TAKEN and RUN of all player in descending order of RUN.
SELECT pname, wicket_taken, run
FROM player
ORDER BY run DESC;


-- Question 8: Write select query to display PNAME and age of player as on today in descending order of age.
SELECT pname,
       TRUNC(MONTHS_BETWEEN(SYSDATE, pdob) / 12) "age"
FROM player
ORDER BY MONTHS_BETWEEN(SYSDATE, pdob) / 12 DESC;
