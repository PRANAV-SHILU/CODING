<?php
    require("connection.php");
    extract($_POST);
    $hobbie_str = implode(',', $hobbie);
    
    $dest_loc = $old_resume;
    if ($_FILES['resume']['name'] != '') {
        $resume = $_FILES['resume']['name'];
        $dest_loc = 'img/' . rand(0, 9) . rand(0, 9) . rand(0, 9) . '_' . $resume;

        move_uploaded_file($_FILES['resume']['tmp_name'], $dest_loc);
        if (file_exists($old_resume))
            unlink($old_resume);
    }

    $query = "update qualification set name='$name', password='$password', email='$email', gender='$gender', contact=$contact, degree='$degree', e_group='$e_group', hobbie='$hobbie_str', address='$address', resume='$dest_loc' where id=$id";

    mysqli_query($link, $query) or die(mysqli_error($link));

    echo "Record updated successfully";

?>