<?php
    require('connection.php');

    $query = "select * from vehicle";
    $data = mysqli_query($link, $query) or die(mysqli_error($link));
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Vehicle Records</title>
</head>
<body>
    <h1>Vehicle Records</h1>

    <table border="1" cellpadding="8">
        <tr>
            <th>ID</th>
            <th>Category</th>
            <th>Vehicle Number</th>
            <th>Model Number</th>
            <th>Color</th>
            <th>Purchase Date</th>
            <th>Action</th>
        </tr>

        <?php while ($row = mysqli_fetch_assoc($data)) {

            extract($row);
            
            echo "<tr>";
            echo "<td>$id</td>";
            echo "<td>$category</td>";
            echo "<td>$v_no</td>";
            echo "<td>$m_no</td>";
            echo "<td>$color</td>";
            echo "<td>$p_year</td>";
            echo "<td><a href='delete.php?id=$id' type='submit'>Delete</a></td>";
            echo "</tr>";
        } ?>
    </table>
</body>
</html>