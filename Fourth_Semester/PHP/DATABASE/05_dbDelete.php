<?php
$servername = "localhost";
$username = "root";
$password = "";
$database = "nabin_php"; // Define the database name

// Create connection
$conn = mysqli_connect($servername, $username, $password, $database);

// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

$sql = "DELETE FROM register WHERE id = 1";
if (mysqli_query($conn, $sql)) {
    echo "Row deleted";
} else {
    echo "Error deleting: " . mysqli_error($conn);
}

mysqli_close($conn);
?>
