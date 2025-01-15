/*
4. Main SQL Commands and Sub-commands (DDL)
 Lab 1: Create a table courses with columns: course_id, course_name, and course_credits. Set the course_id as the primary key.
 Lab 2: Use the CREATE command to create a database university_db
*/

CREATE TABLE COURSES(
    course_id INT PRIMARY KEY,
    course_name VARCHAR(20) NOT NULL,
    course_credits INT NOT NULL
);

CREATE DATABASE university_db;