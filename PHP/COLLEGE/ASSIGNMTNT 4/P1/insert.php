<?php
    require("connection.php");
    
    extract($_POST);

    // move file
    $temp_loc=$_FILES['resume']['tmp_name'];
    $resume=$_FILES['resume']['name'];
    $dest_loc='img/'.rand(0,99).rand(0,99).rand(0,99).'_'.$resume;
    move_uploaded_file($temp_loc,$dest_loc);

    // arr to str
    $hobbie_str=implode(',',$hobbie);

    // database
    $query = "insert into qualification (name, password, email, gender, contact, degree, e_group, hobbie, address, resume) values ('$name','$password','$email','$gender',$contact,'$degree','$e_group','$hobbie_str','$address','$dest_loc');";

    mysqli_query($link,$query) or die(mysqli_error($link));

    echo "Data Entered Successfully";
?>