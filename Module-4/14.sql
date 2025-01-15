/*
14. SQL View
Lab 1: Create a view to show all employees along with their department names.
Lab 2: Modify the view to exclude employees whose salaries are below $50,000.
*/

create view emp_info as select employee.emp_id,employee.emp_name from employee;

select * from emp_info;

create view emp_sal as select employee.emp_id,employee.emp_salary from employee where emp_salary < 50000; 

select * from emp_sal;