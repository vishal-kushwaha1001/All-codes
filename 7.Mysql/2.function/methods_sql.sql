-- DISTINCT : used to get all unique /different categories
-- limit : used to restrict the number of rows returned by a query,
--  which is especially useful for performance optimization,
--  data sampling, and pagination in large databases.
-- offset : how many rows to skip and the give rows
-- order by : arrange in rows  -- sorting


select * from employee;

select * from employee order by salary asc limit 5;

select * from employee order by salary desc  limit 5;

select * from employee order by salary desc limit 1 offset 2 ;

select distinct(concat(first_name ," ",last_name)) from employee;

-- ------------------Group BY-------------------------------
 

use employees;
select * from employee;

select department,sum(salary),count(emp_id)   from employee group by department;

-- retrive total no of employee in each department?
-- when we use group by the we use only aggegate function
select department , count(emp_id)   from employee group by department;

select department ,round(avg(salary),2) from employee group by department;

select position, round(max(salary),1)    from employee group by position;

select  department ,sum(salary) from employee  group by  department;

-- ---------count  the no -of employees joined in each year ?
select year(date_of_joining), count(emp_id) from employee group by
 year(date_of_joining) order by year(date_of_joining);
 
 --  having ----------------
 -- NOTES :- aggegrate function can be used after having
select department ,count(emp_id) from employee group by department having count(emp_id) >= 8 ;

select position ,round(avg(salary),2) from employee group by position having round(avg(salary),2) > 50000;



--  group by -> having -> order by -> limit -> offset 
select department ,round(sum(salary),2) from employee
 group by department having round(sum(salary),2) order by round(sum(salary),2) desc  limit 1 offset 1;
 
 
 -- find duplicate name ? 
select first_name,count(*) from employee group by first_name having count(first_name)>1 ;


-- how many employees are there in each department for each group?  --
-- NOTE :- multiple group by we can use 
select department,position , count(emp_id) from employee
 group by department , position ;
 

select department,position ,round(sum(salary),2)  from employee
 group by department , position ;

