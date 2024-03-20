-- Create a table employee_agg having  attributes empid, custfname, custlname ,email, and salary 
-- And perform  the operation of aggregate function like  SUM(), AVG(), MIN(), MAX() and  COUNT()  on salary attributes.

-- The SUM() function calculates the total sum of salaries.
-- The AVG() function calculates the average salary.
-- The MIN() function retrieves the minimum salary.
-- The MAX() function retrieves the maximum salary.
-- The COUNT() function counts the number of records in the "employee_agg" table.

-- Create table for employee_agg
CREATE TABLE employee_agg (
    empid INT PRIMARY KEY,
    custfname VARCHAR(255),
    custlname VARCHAR(255),
    email VARCHAR(255),
    salary DECIMAL(10, 2)  -- Assuming salary is stored as a decimal for better precision
);

-- Insert some sample data into the employee_agg table
INSERT INTO employee_agg VALUES
(1, 'Sadika', 'Mahat', 'sadika@example.com', 50000.00),
(2, 'Pratistha', 'GM', 'gmpratistha@gmail.com', 60000.00),
(3, 'Manjesh', 'Yadav', 'mannu@gmail.com', 75000.00);

-- Aggregate functions on the salary attribute

-- SUM of salaries
SELECT SUM(salary) AS total_salary FROM employee_agg;

-- AVG of salaries
SELECT AVG(salary) AS average_salary FROM employee_agg;

-- MIN salary
SELECT MIN(salary) AS min_salary FROM employee_agg;

-- MAX salary
SELECT MAX(salary) AS max_salary FROM employee_agg;

-- COUNT of employees
SELECT COUNT(empid) AS total_employees FROM employee_agg;
