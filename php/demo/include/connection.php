<?php

define("SERVER", "localhost:3308");
define("USERNAME", "root");
define("PASSWORD", "");
define("DATABASE", "shop_db");

try {
    $db = new PDO("mysql:host=" . SERVER . ";dbname=" . DATABASE, USERNAME, PASSWORD);
    $db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $error) {
    LogError($error); //calling user defined functions
}
