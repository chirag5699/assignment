
create database  Employee_Incentive;
use Employee_Incentive;
create table Employee(
Employee_ID int,
First_name varchar(100),
Last_name varchar(100),
salary int,
Joining_date datetime,
Department varchar (25)
);

insert into Employee(Employee_ID,First_name,Last_name,salary,joining_date,Department)
values(25,"chirag","jasani",60000,"2023-01-02 12:00:00","atm");
(1,"John","Abraham",1000000,"2013-01-01 12:00:00","Banking"),
(2,"Michael","Clarke",800000,"2013-01-01 12:00:00","Insurance"),
(3,"Roy","Thomas",700000,"2013-02-01 12:00:00","Banking"),
(4,"tom","Jose",600000,"2013-02-01 12:00:00","Insurance"),
(5,"Jerry","Pinto",650000,"2013-02-01 12:00:00","Insurance"),
(6,"Philip","Mathew",750000,"2013-01-01 12:00:00","Services"),
(7,"TestName1","123",650000,"2013-01-01 12:00:00","Services"),
(8,"TestNmae2","Lname%",600000,"2013-02-01 12:00:00","Insurance"),
(9,"chirag","patel",10000,"2023-12-15 12:00:00","bank");



create table Incentive(
Employee_ref_id int,
Incentive_date date,
Incentive_amount int
);

insert into incentive(Employee_ref_id,Incentive_date,Incentive_amount)
values
(1,"2013-02-01",5000),
(2,"2013-02-01",3000),
(3,"2013-02-01",4000),
(1,"2013-01-01",4500),
(2,"2013-01-01",3500);


          SELECT * FROM employee_incentive.employee;    
----- a) Get First_Name from employee table using Tom name “Employee Name”. 
          select first_name from employee where first_name = "tom";
          
          
           SELECT * FROM employee_incentive.employee;
----- b) Get FIRST_NAME, Joining Date, and Salary from employee table.
		   select First_name,joining_date,salary from employee ;
		   select First_name,date_format(Joining_date, "[%d / %m /%y %H:%m:%S]" ) as jdate,salary from employee;
		   select date_format(Joining_date, "[%h::%m::%s]") as jtime from employee;
		   select date_format(Incentive_date,"%y-%M-%d")from incentive;

        

					SELECT * FROM employee_incentive.employee;
----- c) Get all employee details from the employee table order by First_Name Ascending and Salary descending?
                 select *from employee order by First_name and salary desc;
            
					SELECT * FROM employee_incentive.employee;
----- d) Get employee details from employee table whose first name contains ‘J
             select * from employee  where  First_name like "j%";
         
               SELECT * FROM employee_incentive.employee;
----- e) Get department wise maximum salary from employee table order by salary ascending?
			select max(salary) from employee;
            select department,max(salary) from employee group by department order by salary;
			select department,min(salary) from employee group by department order by salary;

            
              SELECT * FROM employee_incentive.incentive; 
              SELECT * FROM employee_incentive.employee;
----- f) Select first_name, incentive amount from employee and incentives table for those employees
----- who have incentives and incentive amount greater than 3000
   
   
    select employee.first_name,sum(incentive.Incentive_amount) as Incentive
         from employee
         inner join incentive
         on employee.Employee_id = incentive.Employee_ref_id
		 where incentive.incentive_amount or incentive.Incentive_amount > 3000 
         group by employee.first_name;
         
         SELECT * FROM employee_incentive.employee;  
----- g) Create After Insert trigger on Employee table which insert records in view table  

          create table employee_backup(
          employee_id  int,
          first_name  varchar(20),
          last_name   varchar(20),
          salary   int,
		  joining_date   datetime,
		  depaetment   varchar(10)
		  );
          insert into Employee(Employee_ID,First_name,Last_name,salary,joining_date,Department)
          values(12,"sanju","sharma",125415,"5050/10/15","lon");
          
          ----- VIEW 
    SELECT 
        `employee_incentive`.`employee`.`Employee_ID` AS `Employee_ID`,
        `employee_incentive`.`employee`.`First_name` AS `First_name`,
        `employee_incentive`.`employee`.`Last_name` AS `Last_name`,
        `employee_incentive`.`employee`.`salary` AS `salary`,
        `employee_incentive`.`employee`.`Joining_date` AS `Joining_date`,
        `employee_incentive`.`employee`.`Department` AS `Department`
    FROM
        `employee_incentive`.`employee`
    WHERE
        `employee_incentive`.`employee`.`salary` > 50000          
		
            
		
          
          
  

 