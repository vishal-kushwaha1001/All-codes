drop database IF EXISTS employees ;
create database employees;

use employees;

CREATE TABLE employee (
    emp_id INT auto_increment,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    department VARCHAR(50),
    position VARCHAR(50),
    salary DECIMAL(10,5) default 25000,
    date_of_joining DATE,
    email VARCHAR(100) UNIQUE,
    primary key(emp_id) , check (salary < 100000)
);  

-- Insert sample data

INSERT INTO employee (first_name, last_name, department, position, salary, date_of_joining, email) VALUES
('John', 'Doe', 'HR', 'Manager', 60000.00, '2020-03-15', 'john.doe@company.com'),
('Jane', 'Smith', 'Finance', 'Accountant', 50000.00, '2018-06-22', 'jane.smith@company.com'),
('Mike', 'Johnson', 'IT', 'Software Engineer', 75000.00, '2019-09-10', 'mike.johnson@company.com'),
('Emily', 'Davis', 'Marketing', 'SEO Specialist', 45000.00, '2021-01-05', 'emily.davis@company.com'),
('Robert', 'Wilson', 'HR', 'Recruiter', 22000.00, '2020-11-11', 'robert.wilson@company.com'),
('Sarah', 'Brown', 'Finance', 'Financial Analyst', 55000.00, '2017-04-20', 'sarah.brown@company.com'),
('David', 'Miller', 'IT', 'System Administrator', 80000.00, '2020-07-30', 'david.miller@company.com'),
('Laura', 'Martinez', 'Marketing', 'Content Writer', 40000.00, '2021-05-15', 'laura.martinez@company.com'),
('James', 'Garcia', 'HR', 'HR Assistant', 38000.00, '2019-12-01', 'james.garcia@company.com'),
('Sophia', 'Anderson', 'Finance', 'Budget Analyst', 48000.00, '2021-08-19', 'sophia.anderson@company.com'),
('Daniel', 'Taylor', 'IT', 'DevOps Engineer', 70000.00, '2020-10-25', 'daniel.taylor@company.com'),
('Isabella', 'Moore', 'Marketing', 'Social Media Manager', 47000.00, '2019-07-03', 'isabella.moore@company.com'),
('Matthew', 'White', 'Finance', 'Auditor', 53000.00, '2018-11-17', 'matthew.white@company.com'),
('Olivia', 'Harris', 'IT', 'Data Scientist', 80000.00, '2021-09-12', 'olivia.harris@company.com'),
('Christopher', 'Clark', 'Marketing', 'Market Research Analyst', 46000.00, '2020-02-10', 'christopher.clark@company.com'),
('Abigail', 'Lewis', 'HR', 'HR Manager', 65000.00, '2017-06-25', 'abigail.lewis@company.com'),
('Benjamin', 'Hall', 'Finance', 'Tax Specialist', 52000.00, '2019-01-15', 'benjamin.hall@company.com'),
('Charlotte', 'Young', 'IT', 'Frontend Developer', 72000.00, '2020-08-09', 'charlotte.young@company.com'),
('Ethan', 'King', 'Marketing', 'PR Specialist', 43000.00, '2021-03-22', 'ethan.king@company.com'),
('Ava', 'Scott', 'HR', 'Training Coordinator', 41000.00, '2020-12-13', 'ava.scott@company.com'),
('Ava', 'Parker', 'HR', 'Training Coordinator', 41000.00, '2020-12-13', 'ava.parker@company.com'),
('Ava', 'Arcane', 'HR', 'Training Coordinator', 41000.00, '2020-12-13', 'ava.arcane@company.com'),
("vikas","Maws","Marketing"," JrManager",50000,"2025-12-01","edemathews@gg.com"),
("vinod","Maths","Marketing","Trainee",10000,"2025-12-01","edenmthews@gg.com"),
("abhishek","Mthes","Marketing","Trainee",10000,"2025-12-01","eenmathews@gg.com"),
("riya","Mans","Marketing","Associate",42503,"2025-12-01","edenmathew@gg.com"),
("boyka","jilam","Marketing","Manager",70000,"2024-10-05","boykaboyka@hjk.com"),
("rahul","pandey","IT","Manager",40001,"2023-12-12","ggasihk@gmail.com"),
("rahal","pandey","IT","Associate",40053,"2023-12-12","ggasidfhk@gmail.com"),
("rahgl","pandey","IT","Trainee",40000,"2023-12-12","ggasiffffk@gmail.com"),
("akash","bisnoi","Finance","HR",45231.5679,"2013-12-12","ggasiffdgdgffk@gmail.com"),
("akash","pathak","Finance","HR",45231.5474,"2023-11-12","ggasiffhjtdgdgffk@gmail.com"),
("piyush","pay","IT","Associate",40053,"2023-12-12","ggasidfssahk@gmail.com"),
("piynsh","dey","HR","Trainee",40000,"2023-12-12","ggasiffffsdsdk@gmail.com");




drop database IF EXISTS sales ;
create database sales;
use sales;

CREATE TABLE Customers (
    CustomerID INT PRIMARY KEY,
    CustomerName VARCHAR(100) NOT NULL,
    Email VARCHAR(100) UNIQUE,
    City VARCHAR(50),
    Country VARCHAR(50)
);
CREATE TABLE Orders (
    OrderID INT PRIMARY KEY,
    CustomerID INT,
    OrderDate DATE,
    Amount DECIMAL(10,2),
    Product VARCHAR(100),
    FOREIGN KEY (CustomerID) REFERENCES Customers(CustomerID)
);
INSERT INTO Customers (CustomerID, CustomerName, Email, City, Country) VALUES
(1, 'John Doe', 'john@example.com', 'New York', 'USA'),
(2, 'Jane Smith', 'jane@example.com', 'Los Angeles', 'USA'),
(3, 'David Brown', 'david@example.com', 'Chicago', 'USA'),
(4, 'Maria Garcia', 'maria@example.com', 'Toronto', 'Canada'),
(5, 'Ali Khan', 'ali@example.com', 'Mumbai', 'India'),
(6, 'Ashok' , 'ashok@gg.com','Mumbai',"India" );


INSERT INTO Orders (OrderID, CustomerID, OrderDate, Amount, Product) VALUES
(101, 1, '2024-01-10', 250.00, 'Laptop'),
(102, 2, '2024-02-15', 150.00, 'Tablet'),
(103, 1, '2024-02-20', 200.00, 'Smartphone'),
(104, 3, '2024-03-05', 300.00, 'Headphones'),
(105, 4, '2024-03-10', 350.00, 'Smartwatch'),
(106, 5, '2024-03-20', 400.00, 'Gaming Console'),
(107, 2, '2024-04-05', 180.00, 'Keyboard');


SET FOREIGN_KEY_CHECKS = 0;
INSERT INTO Orders (OrderID, CustomerID, OrderDate, Amount, Product) 
VALUES 
    (110, 7, '2024-05-06', 220.00, 'Keyboard');
SET FOREIGN_KEY_CHECKS = 1;



