/*Create table student, insert records then find student who lives in “Dharan”.
Write a query to display records from employee table
First name start with ‘S’.
Last name ending by ‘a’
Names who have salary more than 40,000.*/

CREATE TABLE student (
first_name VARCHAR(50),
last_name VARCHAR(50),
address VARCHAR(50),
salary INT
);

-- insert records into student table
INSERT INTO student VALUES
('Ankit', 'Poudel', 'Kathmandu', 55000),
('Simran', 'Bhatta', 'Dharan', 35000),
('David', 'Johnson', 'Biratnagar', 45000),
('Sara', 'Leea', 'Dharan', 50000),
('Bob', 'Millera', 'Pokhara', 40000);

SELECT * FROM student;

SELECT first_name, last_name FROM student
WHERE address = 'Dharan';

SELECT * FROM student
WHERE first_name LIKE 'S%';

SELECT * FROM student
WHERE last_name LIKE '%a';

SELECT * FROM student
WHERE salary > 40000;
