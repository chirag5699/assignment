create database Student_Exam;

use Student_Exam;
create table student(
rollno int auto_increment,
Student_Name varchar(10),
Branch varchar(10),
primary key (rollno)
);
insert into student(RollNo, student_Name , Branch) values(1, "Jay", "BCA");
insert into student(RollNo, student_Name , Branch) values(2,"shuhani", "MBA");
insert into student(RollNo, student_Name , Branch) values(3,"kirti", "B.Com");

create table exam ( 
rollno int  , 
S_Code varchar(10),
Marks int,
P_Code varchar(10),
foreign key (rollno) references student(rollno)
);
drop table exam;
drop table student;
insert into exam(rollno, S_Code , Marks , P_Code) values(1, "CS11",50,"CS");
insert into exam(rollno, S_Code , Marks , P_Code) values(1, "CS12",60,"CS");
insert into exam(rollno, S_Code , Marks , P_Code) values(2, "EC101",66,"EC");
insert into exam(rollno, S_Code , Marks , P_Code) values(2, "EC102",70,"EC");
insert into exam(rollno, S_Code , Marks , P_Code) values(3, "EC103",45,"EC");
insert into exam(rollno, S_Code , Marks , P_Code) values(3, "EC104",50,"EC");



create table Information(
FirstName varchar(100),
LastName varchar(100),
Address varchar(500),
city varchar(50),
age int
);
insert into Information(FirstName,LastName,Address,City,age)
values
("Meckey","Mouse","123 Fantasy Way","Anaheim",73),
("Bat","Man","321 Cavern Ave","Gotham",54),
("Wonder","Women","987 Truth Way","Paradies",39),
("Donald","Duck","555 Quack Street","Mallard",65),
("Bugs","Bunny","567 Carrot Street","Rasxal",58),
("Wiley","Coyote","999 Acme Way","Canyon",61),
("Cat","Woman","234 Purrfect Street","Hairball",32),
("Tweety","Bird","543","Itotltaw",28);
