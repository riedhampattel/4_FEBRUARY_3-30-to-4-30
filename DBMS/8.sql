delimiter &&
create procedure display()
select * from employees;
end &&

call display();

drop procedure display;

delimiter &&
create procedure deleted(in id int)
begin
delete from employees where employee_id = id;
end &&

select * from employees;

call deleted(102);

select * from employees;

call deleted(103);

delimiter &&
create procedure sal(in id int,amount int)
begin
update employees set salary = salary + amount where employee_id = id;
end &&

call sal(104,4000);

select * from employees;

create view person as select first_name,last_name from employees;

select * from person;