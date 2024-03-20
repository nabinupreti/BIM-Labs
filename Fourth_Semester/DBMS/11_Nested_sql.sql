 -- display empname,salary, deptno from employee whose 
 -- salary is equal to salary in department2 table whose deptid is d105.

CREATE TABLE employee (
  id INT PRIMARY KEY,
  empname VARCHAR(255),
  designation VARCHAR(255),
  salary INT,
  deptno VARCHAR(255)
);

INSERT INTO employee (id, empname, designation, salary, deptno) VALUES
(1, 'Shreeson shakya', 'Manager', 8-0000, 'd101'),
(2, 'Azu Manandhahr', 'Clerk', 40000, 'd102'),
(3, 'shreya Shakya', 'DGM', 100000, 'd105'),
(4, 'Apson Kunwar', 'Sales Executive', 50000, 'd103'),
(5, 'Nabin Upreti', 'Clerk', 100000, 'd105');

SELECT * FROM employee;


CREATE TABLE department2 (
  deptid VARCHAR(255) PRIMARY KEY,
  deptname VARCHAR(255),
  salary INT
);

INSERT INTO department2 (deptid, deptname, salary) VALUES
('d101', 'IT', 80000),
('d102', 'HR', 40000),
('d103', 'Marketing', 50000),
('d104', 'Sales', 45000),
('d105', 'Finance', 100000);

SELECT * FROM department2;

SELECT empname, salary, deptno
FROM employee
WHERE salary = (
	SELECT salary 
    FROM department2
    where deptid = 'd105'
);
