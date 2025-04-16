create schema 4_february;

create table student
(
id int unique not null,
name varchar(25) not null,
std int not null,
percentage float 
);

describe student;

-- change data type
alter table student modify percentage float not null;

-- to add/remove any constraints
alter table student modify std int;

-- to delete column
alter table student drop column std;

-- add column
alter table student add column grade char not null;

-- add column at specific position
alter table student add column DOB varchar(15) not null after name;

-- rename column
alter table student rename column percentage to marks;

-- rename
alter table student rename to students;

describe students;

drop schema 4_february;