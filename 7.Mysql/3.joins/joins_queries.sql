show databases;


use sales;
describe orders;
describe customers;

select * from  customers as c join orders o on c.customerid = o.customerid;

select customername ,product from  customers c join orders o on c.customerID = o.customerid;

select customername , sum(amount) from  customers c join orders o on c.customerID = o.customerid group by c.customerid;

select * from  customers c left join orders o on c.customerID = o.customerid where orderid is null;

select * from  customers c  join orders o on c.customerID = o.customerid where amount > 200;

select   customername , max( orderdate) from  customers c  join orders o on c.customerID = o.customerid group by customername; 

select   customername , count(orderid) from  customers c  join orders o on c.customerID = o.customerid group by customername; 

select  customername , max(amount) from  customers c  join orders o on c.customerID = o.customerid group by customername;


select customername , orderid from customers c
 join orders o on c.customerid = o.customerid where orderdate between "2024-03-01" and "2024-03-31";


-- self join 
select * from customers c  join customers cc on c.city = cc.city;
select * from customers c  join customers cc on c.city = cc.city where c.customerid > cc.customerid;



--  quetion form employees databases
SELECT * FROM employees.employee;
use employees;

select e.first_name,e.last_name,
 e.position ,ee.first_name,ee.last_name,ee.position
 from employee e join employee ee on e.department = ee.department
 where  ee.position like  "%manager" and ee.emp_id != e.emp_id;
