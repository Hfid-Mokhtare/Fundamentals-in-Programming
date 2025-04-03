-- to creat an column with auto increment
create table EM1(
	ID int identity(1,1) not null, -- ( increment , start from )
	name varchar(200)not null,
	primary key(ID)
);

insert into EM1
values('HR')


-- in MySql 
CREATE TABLE EM1 (
    ID INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(200) NOT NULL
);
