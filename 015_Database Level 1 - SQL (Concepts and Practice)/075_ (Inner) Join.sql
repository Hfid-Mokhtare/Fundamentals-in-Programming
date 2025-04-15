-- inner join and join are the same 

select 
  Customers.CustomerID,Customers.Name,
  orders.Amount 
from customers
inner join orders 
on Customers.CustomerID = orders.CustomerID;

-- 3	David	500
-- 5	Betty	800


select Employees.ID, Employees.FirstName,Employees.LastName,Departments.Name as DepName,Countries.Name as CountryName
from   Employees inner join
		Departments on Employees.DepartmentID=Departments.ID inner join
		Countries on Employees.CountryID= Countries.ID;
