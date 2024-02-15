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

$sql = "UPDATE register SET lastname = 'Upreti' WHERE firstname = 'Bikas' ";
if (mysqli_query($conn, $sql)) {
    echo "Last names updated";
} else {
    echo "Error Updating: " . mysqli_error($conn);
}

mysqli_close($conn);
?>
