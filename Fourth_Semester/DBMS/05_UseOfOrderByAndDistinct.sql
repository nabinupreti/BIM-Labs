
/*Practical No: - 5
-create table student with appropriate attributes 
-Order student data in ascending and descending order and eliminate the duplicate value in marks column by using DISTINCT keyword 
*/
USE dbmslab;
CREATE TABLE student(
	roll INT PRIMARY KEY,
	NAME VARCHAR(20),
	age INT,
	gender VARCHAR(6),
	marks INT
);

INSERT INTO student (roll, NAME, age, gender, marks) VALUES
(1, 'Ankit', 20, 'Male', 80),
(2, 'Ankita', 19, 'Female', 85),
(3, 'Hari', 21, 'Male', 85),
(4, 'Himani', 20, 'Female', 90),
(5, 'Nabin', 22, 'Male', 70);

SELECT * FROM student;
DROP TABLE student;

/*order data in ascending order*/
SELECT * FROM student 
ORDER BY marks ASC;
/*order data in descending order*/
SELECT * FROM student 
ORDER BY marks DESC;
/*eliminate duplicate value in mark column*/
SELECT DISTINCT marks FROM student;