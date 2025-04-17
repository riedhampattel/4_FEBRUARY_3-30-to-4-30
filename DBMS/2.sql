insert into student values(101,'Rohan',6,45.67);

insert into student values(102,'Rahul',12,55.67);

insert into student(name,percentage,id,std) values('Svayam',98.56,104,8);

insert into student values(105,'Rakesh',12,65.45),
(106,'Suresh',11,45.56),(107,'Mahesh',10,85.65);

select id,name,std,percentage from student;

update student set name = 'Manas' where id = 103;

select id,name,std,percentage from student;

delete from student where id = 102;

update student set std = 6 where id = 103;

select id,name,std,percentage from student;

select id,percentage from student;

select * from student;