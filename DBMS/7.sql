drop table student;

create table student
(
id int not null unique,
name varchar(25) not null,
maths int default 0,
science int default 0,
english int default 0,
total int
);

create trigger total
before insert on 4_february.student
for each row
set new.total = new.english + new.maths + new.science;

select * from student;

insert into student(id,name,maths,science,english) values(101,'qwe',25,28,22);
insert into student(id,name,science) values(102,'asd',25);
insert into student(english,maths,science,id,name) values(22,18,14,103,'ert');

insert into student values(104,'dfd',12,15,16,0);

select * from student;

create table original
(
id int,
name varchar(10),
age int
);

create table copied
(
name varchar(10),
copy_time time
);

create trigger copy_data
after insert on 4_february.original
for each row
insert into copied values(new.name,curtime());

select * from original;
select * from copied;

insert into original values(101,'qwe',12);

insert into original values(102,'wer',45);

create table temp
(
id int,
name varchar(10),
age int
);

insert into temp values(101,'qwe',12);
insert into temp values(102,'asd',22);
insert into temp values(103,'zxc',32);
insert into temp values(104,'qws',20);
insert into temp values(105,'fgh',41);

create table deleted
(
name varchar(10),
delete_time time
);

create trigger delete_data
before delete on 4_february.temp
for each row
insert into deleted values(old.name,curtime());

select * from temp;

select * from deleted;

delete from temp where id = 101;
delete from temp where id = 102;
delete from temp where id = 103;