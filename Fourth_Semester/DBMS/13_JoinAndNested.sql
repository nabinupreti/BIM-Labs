-- display employee name and salary from employee_detail  table whose salary is greater than
--  that of the employee  in department2 table whose name is john

-- create employee_detail table
CREATE TABLE employee_detail (
  id INT PRIMARY KEY,
  name VARCHAR(50),
  salary INT
);


-- insert values into employee_detail table
INSERT INTO employee_detail (id, name, salary) VALUES
  (1, 'Ram', 50000),
  (2, 'Shyam', 60000),
  (3, 'Bikas', 55000),
  (4, 'Hari', 45000);

SELECT * FROM employee_detail;

CREATE TABLE department2 (
  id INT PRIMARY KEY,
  name VARCHAR(50),
  salary INT
);

--  insert values into department2 table
INSERT INTO department2 (id, name, salary) VALUES
  (1, 'Sadika', 58000),
  (2, 'Himani', 52000),
  (3, 'John', 46000),
  (4, 'Jane', 54000);

SELECT * FROM department2;

SELECT ed.name, ed.salary
FROM employee_detail ed
JOIN department2 d2
ON ed.salary > d2.salary
WHERE d2.name = 'John';


-- display employee name and salary from employee_detail  table whose salary is not greater 
-- than that of the employee  in department2 table whose name is john.

SELECT ed.name, ed.salary
FROM employee_detail AS ed
WHERE ed.salary <= (
	SELECT d2.salary 
    FROM department2 AS d2
    WHERE d2.name = 'john'
);








