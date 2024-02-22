<?php
//WAP to access the session variables set on previous page
session_start();
?>
<!DOCTYPE html>
<html>
<body>

<?php
// Echo session variables that were set on previous page
echo "Your username is " . $_SESSION["user"] . ".<br>";
echo "Your password is " . $_SESSION["pwd"] . ".";
?>

</body>
</html>