<?php 
    example of numeric array 
    $cars = array('Maruti','Audi','BMW','Ferrari','Toyota');
    $person[0] = "D Patel";
    
    $person[2] = TRUE;
    $person[1] = 27;
    $person[3] = 12.7;
    $person[] = 'dpatel@gmail.com'; 
    $person[] = 'Gujarat'; 
    $person[10] = 'India';
    //display array 
    print_r($cars); //it will display whole array 
    print_r ("<hr/>");
    print_r($person);

    // change value in array
    $cars[0] = 'Tata';
    
    unset($cars[4]); // delete array

    echo "<hr/>";
    print_r($cars); //it will display whole array 
    $person[6] = 'Bhavnagar'; 
    echo "<hr/>";
    print_r($person);
    $myarray=array(10,12,8=>80,4=>40,19,3=>30);
    print_r($myarray);
?>

