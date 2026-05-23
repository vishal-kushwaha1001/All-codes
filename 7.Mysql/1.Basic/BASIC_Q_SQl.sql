use employees;
show tables ;
select * from employee;
select first_name , salary from employee where round(salary,0) % 2 != 0 ;

select * from employee where (department != "it" AND department != "hr") AND (position = "manager");

select * from employee where  (position = "manager") AND department in ("IT", "hr" );

select * from employee where  (position = "manager") AND department NOT in ("IT", "hr" );

select * from employee where first_name like "rah_l";

select * from employee where salary > 40000 ANd salary < 60000;

select * from employee where salary between 40000 and 60000;
  
select first_name ,last_name, salary from employee where date_of_joining between '2020-01-01' and '2022-12-31';

select * from employee where  department = "hr" or (salary between 30000 and 60000);

select first_name ,last_name, salary ,position  from employee where position like "%manager%";

select first_name ,last_name, salary ,position  from employee where first_name like "A%" and salary >50000;



