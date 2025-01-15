/*
7. Data Manipulation Language (DML)
Lab 1: Insert three records into the courses table using the INSERT command.
Lab 2: Update the course duration of a specific course using the UPDATE command.
Lab 3: Delete a course with a specific course_id from the courses table using the DELETE command.
*/

INSERT INTO
courses (course_id,course_name,course_duration)
VALUES (101, "Master of commerce", 2),
       (102, "Bachlor of commerce", 3),
	   (103, "Master of Arts", 2),
       (104, "Bachlor of commerce", 3),
       (105, "MBA", 3);

UPDATE courses SET course_duration = 2 WHERE course_id = 105;

UPDATE courses SET course_duration = 2 WHERE course_id = 105;

DELETE FROM courses WHERE course_id = 101;