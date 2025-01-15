/*
17. PL/SQL Control Structures
Lab 1: Write a PL/SQL block using an IF-THEN condition to check the department of an employee.
Lab 2: Use a FOR LOOP to iterate through employee records and display their names.
*/

DECLARE
    v_employee_id   NUMBER := 101;
    v_department_id NUMBER;
BEGIN
    SELECT department_id INTO v_department_id
    FROM employees
    WHERE employees_id = v_employee_id;

    IF v_department_id = 90 THEN
        DBMS_OUTPUT.PUT_LINE('Employee belongs to department 90.');
    ELSIF v_department_id = 60 THEN
        DBMS_OUTPUT.PUT_LINE('Employee belongs to department 60.');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Employee belongs to another department: ' || v_department_id);
    END IF;
END;


BEGIN

    FOR ref IN (SELECT first_name, last_name FROM employees) LOOP
        DBMS_OUTPUT.PUT_LINE('Employee Name: ' || ref.first_name || ' ' || ref.last_name);
    END LOOP;
    
END;