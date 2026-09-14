<?php
    require("connection.php");

    extract($_GET);

    $query="delete from qualification where id=$id";

    mysqli_query($link,$query) or die(mysqli_error($link));

    unlink($resume);

    echo "Record deleted successfully";
?>