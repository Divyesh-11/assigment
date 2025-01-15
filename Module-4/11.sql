/*
11. SQL Joins
Lab 1: Create two tables: departments and employees. Perform an INNER JOIN to display employees along with their respective departments.
Lab 2: Use a LEFT JOIN to show all departments, even those without employees.
*/

CREATE TABLE employee(
emp_id INT PRIMARY KEY,
emp_name VARCHAR(25) NOT NULL,
emp_salary INT
);

CREATE TABLE departments(
emp_id INT,
department_id INT NOT NULL,
manager_id INT NOT NULL,
FOREIGN KEY (emp_id) REFERENCES employee(emp_id)
);

INSERT INTO employee VALUES (101,'DIVYESH',25000),(102,'RAM',20000),(103,'BOB',29000);

INSERT INTO departments VALUES (101,11,106),(102,12,105),(103,15,105);

SELECT employee.emp_id,employee.emp_name,employee.emp_salary,departments.department_id FROM employee LEFT JOIN departments ON employee.emp_id = departments.emp_id;