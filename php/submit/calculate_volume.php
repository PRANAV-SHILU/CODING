<?php
if(isset($_GET['length'],$_GET['width'],$_GET['depth'])==FALSE){
    header('location:../3_input_volume_calculator.php');
}
else{
    $length= $_GET['length'];
    $width = $_GET['width'];
    $depth = $_GET['depth'];
    // this is for if value is come or not
    // echo $length;
    $volume = $length * $width * $depth;
    echo "<h3>volume is = $volume</h3>";
}
    
?>