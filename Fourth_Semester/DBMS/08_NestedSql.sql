
-- Practical No: 8
-- Write a query to display the employee’s name  from a table employee_detail with any employee 
-- who have minimum salary and should be grouped by department number.
CREATE TABLE employee_detail (
  id INT PRIMARY KEY,
  name VARCHAR(255),
  department_number INT,
  salary INT
);

INSERT INTO employee_detail (id, name, department_number, salary) VALUES
(1, 'Hari', 1, 50000),
(2, 'Himani', 2, 60000),
(3, 'Nabin', 1, 45000),
(4, 'katrina', 2, 55000),
(5, 'rasana', 3, 40000);
SELECT * FROM employee_detail;

SELECT department_number, name
FROM employee_detail
WHERE (department_number, salary) IN (
  SELECT department_number, MIN(salary)
  FROM employee_detail
  GROUP BY department_number
);



