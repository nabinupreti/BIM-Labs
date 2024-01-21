/*Practical No: - 3
 i.create database dbone
ii. create table branch_one, having column branched, location, branch_manager 
And perform the rename operation on it(table, column, datatype), add column, drop column and modify column
*/

CREATE DATABASE dbone;

CREATE TABLE branch_one(
	branched VARCHAR(30),
	location VARCHAR(20),
	branch_manager VARCHAR(30)
);

/*Rename the table to "branch_info"*/
RENAME TABLE branch_one TO branch_info;

/*Rename the column "branched" to "branch_id" and change its data type to INT*/
ALTER TABLE branch_info
CHANGE branched branch_id INT;

/*
Add column no_of_staff
*/
ALTER TABLE branch_info
ADD COLUMN no_of_staff INT NOT NULL;

/*Modify column no_of_staff, change datatype to varchar(3)*/
ALTER TABLE branch_info
MODIFY no_of_staff VARCHAR(3);

/*Drop column branch_manager*/
ALTER TABLE branch_info
DROP COLUMN branch_manager;
 
SELECT * FROM branch_info;