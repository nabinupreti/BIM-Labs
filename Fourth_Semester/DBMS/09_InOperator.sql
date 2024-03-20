
-- Write a query to display the employee’s detail  from a table emp_detail with any employee 
-- who have designation clerk and dgm.

CREATE TABLE emp_detail (
  id INT PRIMARY KEY,
  name VARCHAR(255),
  designation VARCHAR(255),
  salary INT
);

INSERT INTO emp_detail (id, name, designation, salary) VALUES
(1, 'Suman Dangol', 'Manager', 80000),
(2, 'Bikas Bhatta', 'Clerk', 40000),
(3, 'Himani Khatri', 'DGM', 100000),
(4, 'Suraj Shakya', 'Sales Executive', 50000),
(5, 'Matina Maharjan', 'Clerk', 35000);

SELECT *
FROM emp_detail;



SELECT *
FROM emp_detail
WHERE designation IN ('clerk', 'dgm');
