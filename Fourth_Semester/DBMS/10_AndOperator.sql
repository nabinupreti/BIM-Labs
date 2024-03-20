-- Practical no 10
-- Write a query to display the employee’s name  from a table emp_detail 
-- with any employee who  have designation clerk and salary having greater then 5000.

insert into emp_detail
values
(6,'Hari parajuli', 'clerk', 4000);


select * from emp_detail;

select name, salary
from emp_detail
where designation = 'clerk' AND salary>5000;