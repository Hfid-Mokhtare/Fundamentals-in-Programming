select * from Employees;

select FirstName from Employees; -- FirstName can be repeated

select distinct FirstName from Employees; -- no FirstName is repeated

select ID, FirstName from Employees; -- the row can be repeated

select distinct ID, FirstName from Employees; -- no row of ID and FirstName is repeated
