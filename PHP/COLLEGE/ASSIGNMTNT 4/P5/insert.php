<?php
    require('connection.php');    
    extract($_POST);

    $query="insert into vehicle (category,v_name,m_no,color,p_year) values ('$category','$v_name',$m_no,'$color','$p_year');";

    mysqli_query($link,$query) or die(mysqli_error($link));

    echo "Record inserted successfuly";

?>