-- to create a table you can use the mouse 
-- or you can use the comands : 

create table employes(
	ID int not null,
	name nvarchar(50) not null,
	phone nvarchar(10) null,
	salery smallmoney null,
	primary key(ID)
);

-- in MySql : 
CREATE TABLE users (
    user_id INT PRIMARY KEY,
    username VARCHAR(50),
    email VARCHAR(100)
);
