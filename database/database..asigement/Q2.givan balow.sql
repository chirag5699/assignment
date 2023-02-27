drop database loction;
create database loction;
use loction;

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
