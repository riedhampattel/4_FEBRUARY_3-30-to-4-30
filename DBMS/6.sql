create table users
(
user_id int primary key,
name varchar(25) not null,
age int not null
);

insert into users values(101,'Rohan',22);
insert into users values(102,'Rahul',25);
insert into users values(103,'Mahesh',35);
insert into users values(104,'Suresh',40);
insert into users values(105,'Dinesh',45);

create table orders
(
order_id int primary key,
order_name varchar(25) not null,
user_id int not null,
foreign key (user_id) references users(user_id)
);

insert into orders values(1,'Soap',101);
insert into orders values(2,'Shampoo',101);
insert into orders values(3,'Oil',103);
insert into orders values(4,'Comb',105);
insert into orders values(5,'Perfume',105);

select * from users;

select * from orders;

select * from users 
natural join orders;

select users.user_id,users.name,orders.order_name from
users inner join orders on users.user_id = orders.user_id;

select users.name,orders.order_name
from users left join orders on users.user_id = orders.user_id;

select users.name,orders.order_name
from users right join orders on users.user_id = orders.user_id;

create table temp1
(
id int not null,
name varchar(10),
age int
);
insert into temp1 values(101,'qwe',12);
insert into temp1 values(102,'abc',13);
insert into temp1 values(103,'asd',14);
insert into temp1 values(104,'ghj',15);
insert into temp1 values(105,'vbn',16);

create table temp2
(
id int not null,
name varchar(10),
age int
);

insert into temp2 values(106,'xcv',17);
insert into temp2 values(107,'jkl',18);
insert into temp2 values(101,'qwe',12);
insert into temp2 values(102,'abc',13);
insert into temp2 values(108,'tfv',19);

select * from temp1
union
select * from temp2;

select * from temp1
union all
select * from temp2;