show databases;
use employees;
select * from employee;


-- Aggregate FUnction
-- Sum() max() min() count() Avg()
select sum(salary) from employee;

select count(emp_id) from employee where department = "it";

select count(emp_id) from employee where department = "it"AND position  like "%manager%";

select max(salary) from employee where  department = "marketing";

select sum(salary) from employee where  department ="hr" AND position = "trainee";

select max(salary) - min(salary) from employee where position like "%manager";


-- mathmatical functions
-- MOD(remainder) or %
-- round(Actual_number, decimal_num)
-- concat(),lower(),upper()
-- locate(), left(),right(),mid() 
-- locate(char,data,instance)
select first_name ,last_name, salary ,position  from employee where mod(salary,2) = 1;

select upper(concat(first_name," ", last_name)) from employee;

select max(length(email)) as longest_email from employee where department= "hr";

select left(email,locate('@',email)-1)AS before_email from employee;

select right(email,length(email)-locate('@',email)) AS after_email from employee;

select mid(email,locate('@',email)+1,
locate('.',email,locate('@',email))-locate('@',email)-1
) AS mid_name
from employee;


-- DATE function-- 
-- CURDATE CURTIME
-- DATEDIFF(date1, date2)
-- DAYOFWEEK(sunday =1,sat = 7)
-- DAYOFWEEK(DATE) 
-- WEEKDAY(SUN=6 ,SAT= 5 )
-- DAY/MONTH/YEAR
-- DAYNAME/MONTHNAME

SELECT * from employee where date_of_joining 
between "2024-01-01" and "2026-12-31";

SELECT * from employee where year(date_of_joining) between 2024 and 2026;

SELECT concat(first_name ," ",last_name)AS emp_name ,
 round(datediff(CURDATE(),date_of_joining)/365) AS exp from employee;
 
--  SELECT concat(first_name ," ",last_name)AS emp_name ,
--  year(curdate())-year(date_of_joining)) AS exp from employee;
 
 
 select * from employee where month(date_of_joining) = 1;
 
 -- find count of employees joined on weekdays?
 select count(emp_id)from employee where DAYOFWEEK(date_of_joining)
 between 2 and 6;
  select count(emp_id)from employee where DAYOFWEEK(date_of_joining)
 not in (1,7);
 
 
 
  -- find count of employees joined on weekends?
 select count(emp_id)from employee where DAYOFWEEK(date_of_joining) in (1,7);


-- Find employees who  joind between 25 and 30 in every month?
 select count(emp_id)from employee where day(date_of_joining) between 25 and 30;
 
 