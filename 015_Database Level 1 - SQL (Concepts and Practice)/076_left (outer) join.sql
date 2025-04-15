--left outer join  and   left join are the same

select Customers.CustomerID,Customers.Name,
orders.Amount 
from customers
left join orders 
on Customers.CustomerID=orders.CustomerID;


select Customers.CustomerID,Customers.Name,
orders.Amount 
from customers
left outer join orders 
on Customers.CustomerID=orders.CustomerID;
