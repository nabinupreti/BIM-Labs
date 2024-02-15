<?php
$servername ="localhost";
$username = "root";
$password = "";
$dbname = "nabin_php";

$conn = mysqli_connect($servername,$username,$password, $dbname);

if(!$conn){
    die("connection failed:" .mysqli_connect_error());
}

$sql = "CREATE TABLE register(
    id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    firstname VARCHAR(30) NOT NULL,
    lastname VARCHAR(30) NOT NULL, 
    email VARCHAR(50)
    )";

if (mysqli_query($conn,$sql)){
    echo "Table register is created successfully";
} 
else{
    echo "Error creating TABLE" .mysqli_error($conn);
}
mysqli_close($conn);
?>