/*Practical No: - 1
Create database bank
Create table customer with appropriate attributes custid, name, address, city, 
ph_number and email and perform All the DDL operation given above.
*/

CREATE DATABASE bank;

/*Performing all DDL operation*/

/*CREATE*/
CREATE TABLE customer(
	custid INT PRIMARY KEY,
	cname VARCHAR(30),
	address VARCHAR(50),
	city VARCHAR(20),
	ph_number BIGINT,
	email VARCHAR(30));
	
INSERT INTO customer
VALUES 
(1,'nabin','lalitpur','lagankhel',9842407242,'nupreti00@gmail.com');

/*ALTER TABLE*/
ALTER TABLE customer
ADD gender CHAR;

/*DROP column*/
ALTER TABLE customer
DROP email;

/*TRUNCATE operation*/
TRUNCATE TABLE customer;

SELECT * FROM customer;

