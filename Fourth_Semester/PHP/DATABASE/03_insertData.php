<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "nabin_php";

$con = new mysqli($servername, $username, $password, $dbname);

if($con->connect_error){
    die("Connection Failed: ".$con->connect_error);
}

$sql = "INSERT INTO register (firstname, lastname, email)
VALUES ('Nabin', 'Upreti', 'nupreti00@gmail.com'),
('Bikas', 'Bhatta', 'bhattabikas9@gmail.com'),
('Hari', 'Parajuli', 'hariparajuli@gmail.com'),
('Rohan', 'Shrestha', 'rohan@gmail.com'),
('Pratistha', 'GM', 'gmpratistha@gmail.com')
";

if($con->query($sql) == TRUE){
    echo "Records Inserted Successfully.";
}else{
    echo "Error: ".$con->error;
}

$con->close();

?>
