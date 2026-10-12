create table company(
    cid number(3) primary key,
    name char(30) unique not null,
    city char(15)
)

create table medicine (
    mid number(3) primary key,
    mname char(30) unique not null,
    mfg date,
    exp date,
    price number(8,2),
    cid number(3),
    check(exp > mfg)
)



insert into company values (1,'tata','bhavnagar');
insert into company values (2,'birla','rajkot');

insert into medicine values (1,'paracetamol','10-aug-65','24-jan-75',100,1);
insert into medicine values (2,'hydroxil','10-aug-65','24-jan-75',200,2);





select mname, name from company A, medicine B where A.cid=B.cid;

select mname, price from medicine order by price desc;

select mname from medicine where price = (select max(price) from medicine);

select mname from medicine where mname like '%a%a%' and mname not like '%a%a%a%';

create sequence set6 start with 10 increment by 2 maxvalue 50;

create view set6View as select name,mname,price from company A,medicine B where A.cid=B.cid with read only;