-- to create a table you can use the mouse 
-- or you can use the comands : 
create table employes(
	ID int not null,
	name nvarchar(50) not null,
	phone nvarchar(10) null,
	salery smallmoney null,
	primary key(ID)
);

-- to check if not exists befor creating : 
if not exists(select * from sys.tables where name='EM')
begin
	create table EM(
		ID int primary key not null,
		name varchar(50) not null,
		age int null
	);
end;


-- in MySql : 
CREATE TABLE users (
    user_id INT PRIMARY KEY,
    username VARCHAR(50),
    email VARCHAR(100)
);

-- to check if not exists befor creating : 
CREATE TABLE IF NOT EXISTS EM (
    ID INT PRIMARY KEY NOT NULL,
    name VARCHAR(50) NOT NULL,
    age INT NULL
);
