<?php

$conn = new mysqli("localhost", "root", "", "login_system");

if ($conn->connect_error) {
    die("Connection Failed");
}

$username = $_POST['username'];
$password = $_POST['password'];

$sql = "SELECT * FROM users WHERE username='$username' AND password='$password'";

$result = $conn->query($sql);

if ($result->num_rows > 0) {

    echo "<h1>Login Successful ✅</h1>";

} else {

    echo "<h1>Invalid Username or Password ❌</h1>";
}

?>