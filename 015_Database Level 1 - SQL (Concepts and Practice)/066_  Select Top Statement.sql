
-- in Sql 
-- how to get only three FirstName
select top 3 FirstName from Employees;

-- in MySql 
SELECT FirstName FROM Employees LIMIT 3;


-- in sql 
-- this query is solving this problem : 
-- give me all Employees Name that they have top three MonthSalary

select FirstName, MonthlySalary from Employees
where MonthlySalary
in 
(
	select distinct top 3 MonthlySalary from Employees
	order by MonthlySalary desc
)
order by MonthlySalary desc;

-- in MYSql 
select FirstName, MonthlySalary from Employees
where MonthlySalary
in 
(
	select distinct MonthlySalary from Employees
	order by MonthlySalary desc limit 3
)
order by MonthlySalary desc;


-- in sql 
select FirstName, MonthlySalary from Employees
where MonthlySalary
in 
(
	select distinct top 3 MonthlySalary from Employees
	order by MonthlySalary asc
)
order by MonthlySalary asc;

-- in MySql 
select FirstName, MonthlySalary from Employees
where MonthlySalary
in 
(
	select distinct MonthlySalary from Employees
	order by MonthlySalary asc limit 3
)
order by MonthlySalary asc;




