/*Practical No: 15
Create table emp_details and create view from that table. Display records from table.
Update data in table through view SQL code.
*/

-- Create employee_details table
CREATE TABLE emp_details (
  emp_id INT PRIMARY KEY,
  emp_name VARCHAR(50),
  emp_address VARCHAR(100),
  emp_phone VARCHAR(20)
);

-- Inserting data into employee_details table
INSERT INTO emp_details (emp_id, emp_name, emp_address, emp_phone)
VALUES (1, 'Kumar Chimoria', 'panchkhal', '9810299383'),
       (2, 'Rasika Ghimire', 'Banepa', '98500232412'),
       (3, 'Apson Kunwar', 'Chandragiri', '98420989088');

SELECT * FROM emp_details;


-- Create view from employee_details table
CREATE VIEW emp_view AS
SELECT emp_id, emp_name, emp_address
FROM emp_details;

SELECT * FROM emp_view;


UPDATE emp_view
SET emp_address = 'Panchkhal'
WHERE emp_id = 1;








