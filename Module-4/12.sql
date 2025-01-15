/*
12. SQL Group By
Lab 1: Group employees by department and count the number of employees in each department using GROUP BY.
Lab 2: Use the AVG aggregate function to find the average salary of employees in each department.
*/
SELECT emp_id, count(emp_id) AS EMPLOYEE_COUNT FROM employee GROUP BY emp_id;

SELECT emp_id, avg(emp_salary) AS AVG_SALARY FROM employee GROUP BY emp_id;