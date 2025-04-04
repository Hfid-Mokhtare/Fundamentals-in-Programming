Select * from Employees
where Gendor='F';

Select * from Employees
where  MonthlySalary<=500;


Select * from Employees
where  MonthlySalary>500;

Select * from Employees
where Not MonthlySalary<=500;


Select * from Employees
where MonthlySalary<500 and Gendor='F';

select * from Employees
where CountryID=1;


select * from Employees
where Not CountryID=1;


select * from Employees
where  CountryID <> 1;


select * from Employees
where DepartmentID=1;

select * from Employees
where DepartmentID=1 and Gendor='M';


select * from Employees
where DepartmentID=1 Or DepartmentID=2;

select * from Employees
where DepartmentID=1 AND DepartmentID=2;


Select * from Employees
where ExitDate is Null;


Select * from Employees
where ExitDate  is Not Null;
