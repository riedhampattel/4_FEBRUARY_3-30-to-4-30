select * from employees;

select * from employees where department_id = 90;

select * from employees where salary>10000;

select * from employees where salary>10000 and salary<15000;

select * from employees where department_id = 90 or department_id = 60;

select distinct department_id from employees;

select * from employees where comission_pct is null;

select * from employees where comission_pct is not null;

select * from employees;

select employee_id,first_name,last_name,salary*12 as annual_salary from employees;

select employee_id,concat(first_name,' ',last_name) as full_name from employees;

select * from employees where salary between 10000 and 15000;

select * from employees where department_id = 90 or department_id = 60 or department_id = 50;

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);