/*
19. Rollback and Commit Savepoint
Lab 1: Perform a transaction where you create a savepoint, insert records, then rollback to the savepoint.
Lab 2: Commit part of a transaction after using a savepoint and then rollback the remaining changes.
*/
BEGIN

    INSERT INTO employees (employees_id, first_name, last_name, hire_date, salary, department_id)
    VALUES (300, 'John', 'Doe', '2023-01-15', 6000, 50);

    SAVEPOINT savepoint_insert;

    INSERT INTO employees (employees_id, first_name, last_name, hire_date, salary, department_id)
    VALUES (301, 'Jane', 'Smith','2024-02-20', 7000, 60);

    ROLLBACK TO savepoint_insert;
    DBMS_OUTPUT.PUT_LINE('Rolled back to savepoint. Only the first record remains.');
    
    SELECT COUNT(*) INTO NULL FROM employees WHERE employees_id IN (300, 301);
END;

BEGIN

    INSERT INTO employees (employees_id, first_name, last_name, hire_date, salary, department_id)
    VALUES (400, 'Alice', 'Brown','2025-03-10', 8000, 70);
    
    SAVEPOINT savepoint_partial_commit;

    INSERT INTO employees (employees_id, first_name, last_name, hire_date, salary, department_id)
    VALUES (401, 'Bob', 'Williams','2025-04-15', 9000, 80);

    COMMIT;
    DBMS_OUTPUT.PUT_LINE('Committed changes before the savepoint.');
    
    ROLLBACK TO savepoint_partial_commit;
    DBMS_OUTPUT.PUT_LINE('Rolled back changes after the savepoint.');
END;