select * from employees;

update employees set salary = salary + 10000; 

rollback;

select * from employees;

update employees set salary = salary + 10000; 

commit;

rollback;

select * from employees;

delete from employees where employee_id = 100;
delete from employees where employee_id = 101;
delete from employees where employee_id = 102;

commit;

select * from employees;

rollback;

select * from employees;

savepoint s1;
delete from employees where employee_id = 102;
savepoint s2;
delete from employees where employee_id = 103;
savepoint s3;
delete from employees where employee_id = 104;

rollback to s2;

select * from employees;