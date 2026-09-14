create TABLE qualification(
    id int PRIMARY KEY AUTO_INCREMENT,
	name varchar(50),
    password varchar(10),
    email varchar(30),
    gender char(1),
    contact int(10),
    degree varchar(20),
    e_group char(1),
    hobbie varchar(100),
    address varchar(50),
    resume varchar(100)
);