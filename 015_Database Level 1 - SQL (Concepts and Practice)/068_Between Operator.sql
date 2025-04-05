-- use Between Operator

select * from Employees 
where
(MonthlySalary >= 300) and (MonthlySalary <= 400);

-- this is the good practic
select * from Employees 
where
MonthlySalary between 300 and 400;
