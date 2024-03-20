/*Practical No: 14
Create table emp_master and br_master with suitable attributes.
Write join (inner join relation) SQL code to display records.
Write left outer join to display records from table.
Write right outer join to display records from table.
*/
-- Create emp_master table
CREATE TABLE emp_master (
  emp_id INT PRIMARY KEY,
  emp_name VARCHAR(50),
  emp_salary FLOAT,
  br_id INT
);

-- Inserting data into emp_master table
INSERT INTO emp_master (emp_id, emp_name, emp_salary, br_id)
VALUES (1, 'Asmita Upreti', 50000.0, 1),
       (2, 'Nabina Upreti', 60000.0, 2),
       (3, 'Nabin Upreti', 55000.0, 1),
       (4, 'Bikas Bhatta', 65000.5, 0);
       
       
SELECT * FROM emp_master;

-- Create br_master table
CREATE TABLE br_master (
  br_id INT PRIMARY KEY,
  br_name VARCHAR(50),
  br_location VARCHAR(50)
);

-- Inserting data into br_master table
INSERT INTO br_master (br_id, br_name, br_location)
VALUES (1, 'Branch A', 'Kathmandu'),
       (2, 'Branch B', 'Biratnagar'),
       (3, 'Branch C', 'Birgunj');

SELECT * FROM br_master ;

-- INNER JOIN
SELECT emp.emp_id, emp.emp_name, emp.emp_salary, br.br_name
FROM emp_master as emp
INNER JOIN br_master as br
ON emp.br_id = br.br_id;


-- LEFT OUTER JOIN 
SELECT emp.emp_id, emp.emp_name, emp.emp_salary, br.br_name
FROM emp_master emp
LEFT OUTER JOIN br_master br
ON emp. br_id = br.br_id;

-- RIGHT OUTER JOIN
SELECT emp_master.emp_id, emp_master.emp_name, emp_master.emp_salary, br_master.br_name
FROM emp_master
RIGHT OUTER JOIN br_master
ON emp_master.br_id = br_master.br_id;



