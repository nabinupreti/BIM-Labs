/*
Practical No: - 2
1) Create database bank
2) Create table transactions having attributes  txnid, acno,type,
date-txn ,amount and perform All the  DML operation given above.
*/

CREATE DATABASE bank;

CREATE TABLE transactions(
	txnid INT PRIMARY KEY,
	acno BIGINT,
	actype VARCHAR(10),
	txn_date DATE,
	txn_amt FLOAT
);

/*DML operations*/
/*INSERT operation*/
INSERT INTO transactions
VALUES
(101,11253621,"Current","2024-01-20",5005.5),
(102,11253622,"Saving","2024-01-20",25000);

/*SELECT operation*/
SELECT * FROM transactions;

/*UPDATE operation*/
UPDATE transactions
SET txn_amt = 10005.5 WHERE txnid = 101;

/*DELETE operation*/
DELETE FROM transactions
WHERE txnid = 102;