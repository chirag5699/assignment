create database costomer_salesman;
use costomer_salesman;
create table costomer(
C_id       int ,
cust_name  varchar(20),
city       varchar(20),
grade      int,
S_id       int,
primary key(C_id),
foreign key(S_id) references salesman(S_id));

insert into costomer (C_id, cust_name,  city,  grade, S_id)
values (3002 , "nick rimando", "new york", 100, 5001),
       (3007 , "brad davis", "new york", 200, 5001),
       (3005 , "graham zusi", "california", 200, 5002),
       (3008 , "juliam green", "london", 300, 5002),
       (3004 , "fabian johnson", "paris", 300, 5006),
       (3009 , "geoff cameron ", "berlin", 100, 5003),
       (3003 , "jozy altidor", "moscow", 200, 5007),
       (3001 , "brad guzan", "london", null, 5005);


create table salesman(
S_id    int,
name    varchar(20),
city    varchar(20),
comm    float,
primary key(S_id));

insert into salesman(S_id, name, city, comm)
 values (5001, "james hoog", "new york", 0.15),
        (5002, "nail knite", "paris", 0.13),
		(5005, "pit alex", "london", 0.11),
		(5006, "mc lyon", "paris", 0.14),
		(5007, "paul adam", "rome", 0.13),
		(5003, "lauson hen", "san jose", 0.12);
        
        
     /*   From the above given tables write a SQL query to find the salesperson(s) and the
customer(s) represented here. Return the Customer Name, City, Salesman,
commission.*/



       select salesman.name,costomer.cust_name as "costomar_name",
       costomer.city,comm from costomer inner join 
       salesman on costomer.S_id=salesman.S_id;
       
       select C_id,salesman.name,costomer.cust_name,
       costomer.city,comm from costomer cross join 
       salesman on costomer.S_id=salesman.S_id ;
       



