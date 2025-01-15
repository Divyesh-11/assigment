/*
1. Introduction to SQL
 Lab 1: Create a new database named school_db and a table called students with the following columns: student_id, student_name, age, class, and address. 
 Lab 2: Insert five records into the students table and retrieve all records using the SELECT statement.
*/

CREATE DATABASE school_db;

CREATE TABLE students(
    student_id INT PRIMARY KEY,
    student_name VARCHAR(25) NOT NULL,
    age INT NOT NULL,
    class VARCHAR(2) NOT NULL,
    address VARCHAR(25) NOT NULL
);

INSERT INTO students (student_id,student_name,age,class,address) VALUES
(101,'DIVYESH',21,'A','CG - ROAD, AHMEDABAD'),
(102,'ASHISH',19,'B','CG - ROAD, AHMEDABAD'),
(103,'BOBAY',23,'A','NEHRUNAGAR, AHMEDABAD'),
(104,'MALIK',24,'A','CHANDKHEDA, AHMEDABAD'),
(105,'ADITYA',26,'B','GOTA, AHMEDABAD');