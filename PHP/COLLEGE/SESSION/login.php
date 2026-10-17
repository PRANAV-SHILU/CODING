<?php
session_start();
$message = '';
extract($_GET);

if (isset($_GET['login'])) {
    if ($username === '' || $password === '')
        $message = 'Enter username and password';
    elseif ($username === 'pranav' && $password === '18112006') {
        $_SESSION['username'] = $username;
        $_SESSION['password'] = $password;
        header('Location: home.php');
        exit();
    } else
        $message = 'invalid username or password';
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
</head>

<body>
    <br><br><br><br><br>
    <center>
        <form method="GET">
            Enter username:
            <input type="text" name="username" value="" /><br><br>

            Enter password:
            <input type="password" name="password" value="" /><br><br>

            <input type="submit" name="login" value="Login" />
        </form>

        <?php if ($message !== ''): ?>
            <p><?php echo $message; ?></p>
        <?php endif; ?>
    </center>
</body>

</html>