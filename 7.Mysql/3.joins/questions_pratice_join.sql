-- Q1.Retrieve  books with their authors information-- 
select * from authors;
select * from books;
select a.first_name ,a.last_name , b.title from authors as a join books as b on 
 a.author_id = b.author_id ;
 
 
 
-- --Q2. how many books each author has written --  
select a.first_name, a.last_name ,count(a.author_id) from authors as a  join books as b on a.author_id = b.author_id  group by a.author_id;
