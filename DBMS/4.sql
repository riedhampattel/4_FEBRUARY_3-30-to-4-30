create role student;

create user Tanmay identified by 'abc@123' default role student;

grant select on employees to Tanmay;

grant update,insert on employees to Tanmay;

revoke update on employees from Tanmay;  