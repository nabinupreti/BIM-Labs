<?php
$servername ="localhost";
$username = "root";
$password = "";
$dbname = "nabin_php";

$conn = new mysqli($servername,$username,$password, $dbname);

if($conn->connect_error){
    die("connection failed:" . $conn->connect_error);
}

$sql = "CREATE TABLE register(
    id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    firstname VARCHAR(30) NOT NULL,
    lastname VARCHAR(30) NOT NULL, 
    email VARCHAR(50)
    )";

if ($conn->query($sql)===TRUE){
    echo "Table register is created successfully";
} 
else{
    echo "Error creating TABLE" . $conn->error;
}
$con->close();
?>