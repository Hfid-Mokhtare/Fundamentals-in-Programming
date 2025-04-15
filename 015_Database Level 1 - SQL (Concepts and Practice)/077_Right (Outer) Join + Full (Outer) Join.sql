
-- right outer join = right join
select Customers.CustomerID,
		Customers.Name,orders.Amount
from customers
right join orders 
on Customers.CustomerID=orders.CustomerID;


-- full outer join = full join
select Customers.CustomerID,
		Customers.Name,orders.Amount
from customers
full join orders 
on Customers.CustomerID=orders.CustomerID;
