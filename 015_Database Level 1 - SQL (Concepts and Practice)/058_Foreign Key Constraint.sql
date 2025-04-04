-- in sql server you can create a foreign key by : 
create table client(
	ID int identity(1,1) not null,
	name varchar(200) not null,
	age int null,
	primary key(ID)
);

create table Order_C(
	order_id int identity(1,1) not null,
	costumer_id int references client(ID), --this line
	primary key(order_id)
);

-- in MySql : 
CREATE TABLE client (
    ID INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(200) NOT NULL,
    age INT NULL
);

CREATE TABLE Order_C (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    customer_id INT,
    FOREIGN KEY (customer_id) REFERENCES client(ID)
);


-- of you can use alter table : 
ALTER TABLE Order_C 
ADD FOREIGN KEY (customer_id) REFERENCES client(ID);
