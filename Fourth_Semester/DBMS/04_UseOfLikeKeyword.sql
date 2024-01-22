/*Practical No: 4
•	Create table having more than 10 data and perform the following operation
i.	Student name start with ‘S’
ii.	Student address end with ‘r’
iii.	Student name containing substring ‘ita’
iv.	Student name end with ‘ta’ and address ‘kathmandu’
*/
USE dbmslab;
CREATE TABLE studentData(
rollno INT PRIMARY KEY,
sname VARCHAR(30),
address VARCHAR(50),
age INT
);

INSERT INTO studentData
(rollno,sname,address,age)
VALUES
(101,"Sabin","Lalitpur",20),
(102,"Sadika","Bhaktapur",22),
(103,"Bikas","Rampur",10),
(104,"Shreeson","Panchkhal",18),
(105,"Hari","Kathmandu",30),
(106,"Himani","Sundarijal",22),
(107,"Sujal","Pokhara",25),
(108,"Sabal","Biratnagar",80),
(109,"Nabin","Bhojpur",22),
(110,"Nikita","Kathmandu",28),
(111,"Anita","Kathmandu",27),
(112,"Simran","Bharatpur",24),
(113,"Rita","Kathmandu",20),
(114,"Apson","Banepa",21);

SELECT * FROM studentData;

/*Student name start with ‘S’*/
SELECT sname
FROM studentdata
WHERE sname LIKE 'S%';

/*Student address end with ‘r’*/
SELECT address
FROM studentdata
WHERE address LIKE '%r';

/*Student name containing substring ‘ita’*/
SELECT sname
FROM studentdata
WHERE sname LIKE '%ita%';

/*Student name end with ‘ta’ and address ‘kathmandu’*/
SELECT sname,address
FROM studentdata
WHERE sname LIKE '%ta' && address = "Kathmandu";