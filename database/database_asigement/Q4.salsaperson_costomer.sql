create database  Salesperson_Customer;
use Salesperson_Customer; 
create table salseperson(
SNo int,
SNAME varchar(100),
CITY varchar(50),
COMM float(10,2),
primary key(SNo)
);

insert into salseperson(SNo,SNAME,CITY,COMM)
values
(1001,"Peel","London",0.12),
(1002,"Serres","San Jose",0.13),
(1004,"Motika","London",0.11),
(1007,"Rafkin","Barcelona",0.15),
(1003,"Axelrod","New York",0.1);

create table customer(
CNM int ,
CNAME varchar(100),
CITY varchar(100),
RATING int,
SNo int,
primary key(CNM),
foreign key(SNo) references salseperson(SNo)
);
insert into customer(CNM,CNAME,CITY,RATING,SNo)
values (201,"Hoffman","London",100,1001),
	   (202,"Giovanne","Roe",200,1003),
       (203,"Liu","San Jose",300,1002),
	   (204,"Grass","Barcelona",100,1002),
       (206,"Clemens","London",300,1007),
       (207,"Pereira","Roe",100,1004);

----- a) All orders for more than $1000. 
       SELECT * FROM salesperson_customer.customer,salseperson;
      	   select SNo<1000 as more from customer;
           select SNo<3000 as more from customer;


----- b) Names and cities of all salespeople in London with commission above 0.12  
		     SELECT * FROM salesperson_customer.salseperson;
             select * from salseperson where city = "london" and  comm > 0.12;
            
			SELECT * FROM salesperson_customer.customer;  
            select * from customer where CNAME = "liu" and RATING = 300; 

----- c) All salespeople either in Barcelona or in London 
        
          select * from salseperson where city = "london" or city = "barcelona";
          select * from salseperson where city = "london" and city = "barcelona" ;


----- d) All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded).
      
          select * from salseperson where comm > 0.10 and comm < 0.12; 
           


----- e) All customers excluding those with rating <= 100 unless they are located in Rome 

        select CNAME as "customar name" , CITY,rating from customer  where (rating > 100) or (rating <=100 and CITY = "Rome"); 
        select CNAME as "customar name" , CITY,rating from customer  where rating > 100 or CITY = "Rone";
        