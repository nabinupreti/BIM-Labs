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

$sql = "DELETE FROM register WHERE id = 1";
if ($conn->query($sql)===TRUE) {
    echo "Row deleted";
} else {
    echo "Error deleting: " . $conn->error;
}

$conn->close();
?>
