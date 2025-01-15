/*
3. SQL Constraints
Lab 1: Create a table teachers with the following columns: teacher_id (Primary Key), teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE). 
 Lab 2: Implement a FOREIGN KEY constraint to relate the teacher_id from the teachers table with the students table.
*/

CREATE DATABASE school_db;

CREATE TABLE TEACHERS(
    teacher_id int PRIMARY KEY,
    teacher_name VARCHAR(25) NOT NULL,
    subject VARCHAR(15) NOT NULL,
    email VARCHAR(50) UNIQUE
);

ALTER TABLE students ADD teacher_id INT;

ALTER TABLE students add foreign key (teacher_id) references teachers(teacher_id);

SELECT * FROM students;