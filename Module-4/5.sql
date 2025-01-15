/*
5. ALTER Command
Lab 1: Modify the courses table by adding a column course_duration using the ALTER command.
 Lab 2: Drop the course_credits column from the courses table.
*/

ALTER TABLE courses ADD COLUMN course_duration INT NOT NULL;

DESCRIBE courses;

ALTER TABLE courses DROP COLUMN course_credits;

DESCRIBE courses;