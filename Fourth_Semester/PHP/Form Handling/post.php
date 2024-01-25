/*create a simple HTML form with two input fields and a submit button When the user fills out the form 
 and clicks the submit button, the form data is sent for processing to a PHP file named "welcome.php".
 The form data is sent with the HTTP POST method.*/
<!DOCTYPE HTML>
<html>  
<body>

<form action="welcome.php" method="post">
Name: <input type="text" name="name"><br>
E-mail: <input type="text" name="email"><br>
<input type="submit">
</form>

</body>
</html>