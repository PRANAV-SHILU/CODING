<?php
    require("connection.php");
    extract($_GET);

    $query="select * from qualification where id=$id";
    $data= mysqli_query($link,$query) or die(mysqli_error($link));
    $row=mysqli_fetch_assoc($data);
    extract($row);
    $hobbies = explode(',', $hobbie);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Edit Form</title>
</head>
<body>
    <form action="update.php" method="post" enctype="multipart/form-data">
        <h1>Update data</h1>

    
        <input type="hidden" name="id" value="<?php echo $id; ?>">
        <input type="hidden" name="old_resume" value="<?php echo $resume; ?>" />
     

        <label>Name</label>
        <input type="text" name="name" value="<?php echo $name; ?>">
        <br>

        <label>Password</label>
        <input type="password" name="password" value="<?php echo $password; ?>">
        <br>

        <label>Email</label>
        <input type="email" name="email" value="<?php echo $email; ?>">
        <br>

        <label>Gender</label>
        <input type="radio" name="gender" value="m" <?php if ($gender == 'm') echo 'checked'; ?>> Male
        <input type="radio" name="gender" value="f" <?php if ($gender == 'f') echo 'checked'; ?>> Female
        <br>

        <label>Contact</label>
        <input type="number" name="contact" value="<?php echo $contact; ?>">
        <br>

        <label>Degree</label>
        <select name="degree">
            <option value="BCA" <?php if ($degree == 'BCA') echo 'selected'; ?>>BCA</option>
            <option value="BSCIT" <?php if ($degree == 'BSCIT') echo 'selected'; ?>>BSCIT</option>
            <option value="BHMS" <?php if ($degree == 'BHMS') echo 'selected'; ?>>BHMS</option>
            <option value="MBBS" <?php if ($degree == 'MBBS') echo 'selected'; ?>>MBBS</option>
        </select>
        <br>

        <label>Group</label>
        <select name="e_group">
            <option value="A" <?php if ($e_group == 'A') echo 'selected'; ?>>A</option>
            <option value="B" <?php if ($e_group == 'B') echo 'selected'; ?>>B</option>
        </select>
        <br>

        <label>Hobbie</label>
        <input type="checkbox" name="hobbie[]" value="playing_chess" <?php if (in_array('playing_chess', $hobbies)) echo 'checked'; ?>> Playing Chess
        <input type="checkbox" name="hobbie[]" value="reading_books" <?php if (in_array('reading_books', $hobbies)) echo 'checked'; ?>> Reading Books
        <br>

        <label>Address</label>
        <textarea name="address"><?php echo $address; ?></textarea>
        <br>

        <label>Resume</label>
        <img src="<?php echo $resume; ?>" height="100" width="100">
        <br>
        <input type="file" name="resume">
        <br>

        <input type="submit">
    </form>
</body>
</html>