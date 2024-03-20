/*
Practical No: 16
Create table employee with integrity constraints.
Write code on SQL using referential integrity (employee and sales).
*/

-- create employee table with primary key, NOT NULL, CHECK, UNIQUE Constraints
CREATE TABLE employee (
  emp_id INT PRIMARY KEY,
  emp_name VARCHAR(50) NOT NULL,
  emp_email VARCHAR(50) UNIQUE NOT NULL,
  emp_salary INT NOT NULL CHECK(emp_salary > 10000)
);

-- insert values into employee table
INSERT INTO employee 
VALUES
  (1, 'Bikas', 'bikas@example.com', 50000),
  (2, 'Hari', 'harry@example.com', 60000),
  (3, 'Himani', 'hims@example.com', 55000);

SELECT * FROM employee;

CREATE TABLE sales(
	sale_id INT PRIMARY KEY,
    sale_amt DOUBLE,
    emp_id int,
    FOREIGN KEY (emp_id) REFERENCES employee(emp_id)
);

INSERT INTO sales
VALUES
(101,2500,1),
(102,35000.45,2),
(103,8500.00,3);

SELECT * FROM
employee 
CROSS JOIN sales;


