<?php
$servername = "localhost";
$username = "root";
$password = "";
$database = "nabin_php"; // Define the database name

// Create connection
$conn = new mysqli($servername, $username, $password, $database);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "UPDATE register SET lastname = 'Upreti' WHERE firstname = 'Bikas' ";
if ($conn->query($sql) === TRUE) {
    echo "Last names updated";
} else {
    echo "Error Updating: " . $conn->error;
}

$conn->close();
?>
