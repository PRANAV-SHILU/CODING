<?php 
    //create variables and store user given input 
    $amount = $_POST['amount'];
    $rate = $_POST['rate'];
    $year = $_POST['year'];
    //Extract($_POST); // use to create all veriable auto
    // echo "amount is $amount ,rate is $rate ,year is $year";
    //calculation 
    $interest = $amount * $rate * $year / 100;
    echo "<br/> Simple interest is $interest";
?>