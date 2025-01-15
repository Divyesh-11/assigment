/*
18. SQL Cursors
Lab 1: Write a PL/SQL block using an explicit cursor to retrieve and display employee details.
Lab 2: Create a cursor to retrieve all courses and display them one by one.
*/
DECLARE

    CURSOR emp_cursor IS
        SELECT employees_id, first_name, last_name, department_id, salary FROM employees;
        
    v_employee_id   NUMBER;
    v_first_name    VARCHAR2(50);
    v_last_name     VARCHAR2(50);
    v_department_id NUMBER;
    v_salary        NUMBER;
BEGIN

    OPEN emp_cursor;
    LOOP
        FETCH emp_cursor INTO v_employee_id, v_first_name, v_last_name, v_department_id, v_salary;
        EXIT WHEN emp_cursor%NOTFOUND; 

        DBMS_OUTPUT.PUT_LINE('Employee ID: ' || v_employee_id || 
                             ', Name: ' || v_first_name || ' ' || v_last_name || 
                             ', Department: ' || v_department_id || 
                             ', Salary: ' || v_salary);
    END LOOP;
    CLOSE emp_cursor;
END;


DECLARE

    CURSOR course_cursor IS
        SELECT course_id, course_name FROM courses;
        
    v_course_id   NUMBER;
    v_course_name VARCHAR2(100);
BEGIN
    OPEN course_cursor;
    LOOP
        FETCH course_cursor INTO v_course_id, v_course_name;
        EXIT WHEN course_cursor%NOTFOUND;

        DBMS_OUTPUT.PUT_LINE('Course ID: ' || v_course_id || ', Course Name: ' || v_course_name);
    END LOOP;
    CLOSE course_cursor;
END;