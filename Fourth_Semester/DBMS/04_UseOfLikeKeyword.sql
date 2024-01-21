/*Practical No: 4
•	Create table having more than 10 data and perform the following operation
i.	Student name start with ‘S’
ii.	Student address end with ‘r’
iii.	Student name containing substring ‘ita’
iv.	Student name end with ‘ta’ and address ‘kathmandu’
*/
CREATE TABLE studentData(
rollno INT PRIMARY KEY,
sname VARCHAR(30),
address VARCHAR(50),
age INT
);

INSERT INTO studentData
(rollno,sname,address,age)
VALUES
(101,"Apson","Lalitpur",20),
(102,"Sadika","Bhaktapur",22),
(103,"Bikas","Rampur",10),
(104,"Shreeson","Panchkhal",18),
(105,"Hari","Kathmandu",30),
(106,"Himani","Sundarijal",22),
(107,"Sujal","Pokhara",25),
(108,"Sabal","Biratnagar",80),
(109,"Nabin","Bhojpur",22),
(110,"Nirjal","Baglung",28),
(111,"Ashika","Birgunj",27),
(112,"Simran","Bharatpur",24),
(113,"Roshan","Kavre",20),
(114,"Apson","Banepa",21);

SELECT * FROM studentData;

SELECT sname
FROM studentdata
WHERE sname LIKE 'S%';


SELECT address
FROM studentdata
WHERE address LIKE '%r';


SELECT sname
FROM studentdata
WHERE sname LIKE '%an';


SELECT sname,address
FROM studentdata
WHERE sname LIKE '%n' && address = "lalitpur";