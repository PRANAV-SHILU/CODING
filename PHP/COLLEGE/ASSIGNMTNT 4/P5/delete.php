<?php
    require('connection.php');
    $id = $_GET['id'];

    $query = "delete from vehicle where id=$id";
    mysqli_query($link, $query) or die(mysqli_error($link));

    header('Location: select.php');
    exit;
?>