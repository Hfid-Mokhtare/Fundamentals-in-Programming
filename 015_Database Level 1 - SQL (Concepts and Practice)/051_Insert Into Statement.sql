-- to insert values in table columns : 
insert into employes
values
(1,'Mohamed Ali','0611273281',1000),
(2,'Ali','2345678',2000);

-- to insert only some columns :
-- only the columns that not acception null .
insert into employes (ID,name) 
values
(5,'Yassir'),
(6,'Reda');

-- to delete the table : 
drop table employes;
