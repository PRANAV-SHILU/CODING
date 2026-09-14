<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Select </title>
</head>

<body>
    <table border="2">
        <tr>
            <th>id</th>
            <th>name</th>
            <th>password</th>
            <th>email</th>
            <th>gender</th>
            <th>contact</th>
            <th>degree</th>
            <th>e_group</th>
            <th>hobbie</th>
            <th>address</th>
            <th>resume</th>
            <th colspan="2">Options<th>
        </tr>
    
        <?php
            include("connection.php");

            $query="select * from qualification";
            $data=mysqli_query($link,$query) or die(mysqli_error($link));

            while($row = mysqli_fetch_assoc($data))
            {
                extract($row);

                echo "<tr>";
                echo "<td>".$id."</td>";
                echo "<td>".$name."</td>";
                echo "<td>".$password."</td>";
                echo "<td>".$email."</td>";
                echo "<td>".$gender."</td>";
                echo "<td>".$contact."</td>";
                echo "<td>".$degree."</td>";
                echo "<td>".$e_group."</td>";
                echo "<td>".$hobbie."</td>";
                echo "<td>".$address."</td>";
                echo "<td><img src='$resume' height='20%' width='10%' /></td>";
                echo "<td><a href='edit.php?id=$id'>Edit</a></td>";
                echo "<td><a href='delete.php?id=$id&resume=$resume'>Delete</a></td>";
                echo "</tr>";
            }
        ?>
        
    </table>
</body>

</html>