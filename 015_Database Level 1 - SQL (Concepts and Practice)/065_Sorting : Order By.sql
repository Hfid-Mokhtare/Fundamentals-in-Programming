
select ID, FirstName, MonthlySalary from Employees
where DepartmentID=1;

select ID, FirstName, MonthlySalary from Employees
where DepartmentID=1
order by FirstName ; -- by defaulte it Ascinding ASC

select ID, FirstName, MonthlySalary from Employees
where DepartmentID=1
order by MonthlySalary ;

select ID, FirstName, MonthlySalary from Employees
where DepartmentID=1
order by FirstName desc;

select ID, FirstName, MonthlySalary from Employees
where DepartmentID=1
order by FirstName , MonthlySalary;


