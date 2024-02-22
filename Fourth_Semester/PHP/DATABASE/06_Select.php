<?php 

include "connect.php";

$sql = "SELECT * FROM register";

$result = $conn->query($sql);

?>

<!DOCTYPE html>

<html>

<head>

    <title>View Page</title>

<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/css/bootstrap.min.css">

</head>

<body>

<div class="container">

    <h2>Registration</h2>

    <table class="table">

        <thead>

            <tr>

            <th>ID</th>

            <th>First Name</th>

            <th>Last Name</th>

            <th>Email</th>
            <!-- 
            <th>Gender</th>

            <th>Action</th> -->

            </tr>

        </thead>

        <tbody> 

            <?php

                if ($result->num_rows > 0) {

                    while ($row = $result->fetch_assoc()) {

            ?>

                        <tr>

                        <td><?php echo $row['id']; ?></td>

                        <td><?php echo $row['firstname']; ?></td>

                        <td><?php echo $row['lastname']; ?></td>

                        <td><?php echo $row['email']; ?></td>

                        </tr>                       

            <?php       }

                }

            ?>                

        </tbody>

    </table>

</div> 

</body>

</html>
