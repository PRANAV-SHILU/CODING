<?php
include('connection.php');
extract($_POST);
$hobby_str = implode(',', $hobby);


$fname = $_FILES['myfile']['name'];
$tname = $_FILES['myfile']['tmp_name'];
$uploaded_file_url = rand(0, 99) . rand(0, 99) . '_' . $fname;
move_uploaded_file($tname, "img/$uploaded_file_url");


$query = "insert into profile (name,dob,gen,hobby,city,image) values ('$name','$dob', '$gen', '$hobby_str','$city','$uploaded_file_url')";

mysqli_query($link, $query) or die(mysqli_error($link));

echo "done";


?>