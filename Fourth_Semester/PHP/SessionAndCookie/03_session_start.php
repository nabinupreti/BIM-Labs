<?php
//WAP to Start the session and set session vsriables

session_start();
?>
<!DOCTYPE html>
<html>
<body>

<?php
// Set session variables
$_SESSION["user"] = "nabin";
$_SESSION["pwd"] = "admin";
echo "Session variables are set.";
?>

</body>
</html>