<!-- WAP to create and connect to mysql database  -->
<?php
$servername = "localhost";
$username = "root";
$password = "";

//create connection
$con = new mysqli($servername,$username,$password);

//check connection
if($con->connect_error){
    die("Connection Failed: " . $con->connect_error);
}

//Create database
$sql = "CREATE DATABASE nabin_php";
if($con->query($sql)===TRUE){
    echo "Database Created successfully";
}else{
    echo "Error creating database: " . $con->error;
}

$con->close();

?>
