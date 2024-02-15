<!-- WAP to create and connect to mysql database  -->
<?php
$servername = "localhost";
$username = "root";
$password = "";

//create connection
$con = mysqli_connect($servername,$username,$password);

//check connection
if(!$con){
    die("Connection Failed: " . mysqli_connect_error());
}

//Create database
$sql = "CREATE DATABASE nabin_php";
if(mysqli_query($con, $sql)){
    echo "Database Created successfully";
}else{
    echo "Error creating database: " . mysqli_error($con);
}

mysqli_close($con);

?>