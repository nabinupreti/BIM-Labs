/*Create table teacher and student with appropriate attributes and perform the set operation 
like union, union all, intersect and except.*/

-- The "teacher" table has attributes teacher_id, teacher_name, and subject_taught.
-- The "student" table has attributes student_id, student_name, and grade.
-- The UNION operation combines the results of the queries and removes duplicates.
-- The UNION ALL operation combines the results of the queries without removing duplicates.
-- The INTERSECT operation returns common rows between the two queries.
-- The EXCEPT operation returns rows that exist in the first query but not in the second query. 

use DBMS_LAB;
-- Create table for teacher
CREATE TABLE teacher (
    teacher_id INT PRIMARY KEY,
    teacher_name VARCHAR(255),
    subject_taught VARCHAR(100)
);

-- Insert some sample data into the teacher table
INSERT INTO teacher VALUES
(1, 'Jay Jha', 'Math'),
(2, 'Prameshowr Ghimire', 'English'),
(3, 'Sudip Adhikari', 'Science'),
(104, 'RK Sharma' , 'web');

SELECT * FROM teacher;


-- Create table for student
CREATE TABLE student (
    student_id INT PRIMARY KEY,
    student_name VARCHAR(255),
    grade VARCHAR(5)
);

-- Insert some sample data into the student table
INSERT INTO student VALUES
(101, 'Rohan Shrestha', 'A'),
(102, 'Bikas Bhatta', 'B'),
(103, 'Nabin Upreti', 'A'),
(104, 'RK Sharma' , 'B');

SELECT * FROM student;

-- Perform set operations

-- Union
SELECT * FROM teacher
UNION
SELECT * FROM student;

-- Union All
SELECT * FROM teacher
UNION ALL
SELECT * FROM student;

-- Intersect
SELECT teacher_id, teacher_name FROM teacher
INTERSECT
SELECT student_id, student_name FROM student;

-- Except (difference)
SELECT teacher_id, teacher_name FROM teacher
EXCEPT
SELECT student_id, student_name FROM student;
