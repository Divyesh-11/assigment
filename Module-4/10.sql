-- Active: 1735632462246@@127.0.0.1@3306@15_octomber
/*
10. Transaction Control Language (TCL)
Lab 1: Insert a few rows into the courses table and use COMMIT to save the changes.
Lab 2: Insert additional rows, then use ROLLBACK to undo the last insert operation.
Lab 3: Create a SAVEPOINT before updating the courses table, and use it to roll back specific changes.
*/

INSERT INTO courses (course_id,course_name,course_duration) VALUES
(106,"MCA",2),
(107,"B.TACH",4),
(108,"M.COM",2);

COMMIT;

INSERT INTO courses (course_id,course_name,course_duration) VALUES
(109,"BCA",3),
(110,"M.TECH",2),
(111,"M.COM",2);

DELETE FROM courses WHERE course_id = 109;

DELETE FROM courses WHERE course_id = 110;

DELETE FROM courses WHERE course_id = 111;

ROLLBACK;

SELECT * FROM courses;

SAVEPOINT s1;
INSERT INTO courses VALUES (112,'Cyber SEcurity','9');

SAVEPOINT s2;
INSERT INTO courses VALUES (113,'Designing','6');

SAVEPOINT s3;
INSERT INTO courses VALUES(114,'Hardware & Cloud','5');

rollback to s1;

SAVEPOINT  s4;

UPDATE courses SET course_name = 'MCA' WHERE course_id = 108;

ROLLBACK;