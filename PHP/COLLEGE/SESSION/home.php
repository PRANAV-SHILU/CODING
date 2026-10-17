<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Home</title>
</head>

<body>
    <h1>Welcome to the HOME page</h1>

    <?php
    session_start();
    extract($_SESSION);

    if (!isset($username))
        header('Location: login.php');

    echo "username: " . $username;
    echo "<br>Password: " . $password;
    ?>
    <br><br>
    <a href="logout.php">LOGOUT</a>
</body>

</html>