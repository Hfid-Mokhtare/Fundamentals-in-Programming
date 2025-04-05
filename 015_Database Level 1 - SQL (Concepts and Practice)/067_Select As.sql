-- you can do an exprition in the select 

select ID , FirstName , A=MonthlySalary /2 
from Employees;


-- you can creat a new feild using "as"
select ID, FirstName+' '+LastName as FullName from Employees;

select ID, FirstName, MonthlySalary, MonthlySalary*12 as YearlySalary from Employees;

-- in sql server
select ID, FirstName,DATEDIFF(year, DateOfBirth,GETDATE()) as age from Employees;

-- in MySql
SELECt ID,FirstName,TIMESTAMPDIFF(YEAR, DateOfBirth, CURDATE()) AS age
FROM Employees;
