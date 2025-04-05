-- how to use fonction : count , sum , avg , min , max 
-- Note : the function count , it count only not null field

select  TotalEmployees=count(MonthlySalary) ,
		SumOfSalaries=sum(MonthlySalary),
		AverageOfSalaries=avg(MonthlySalary),
		MinSalary=Min(MonthlySalary),
		MaxSalary=Max(MonthlySalary)

	from Employees ;

select	
		count(MonthlySalary) as TotalEmployees ,
		sum(MonthlySalary) as SumOfSalaries,
		avg(MonthlySalary) as AverageOfSalaries,
		Min(MonthlySalary) as MinSalary,
		Max(MonthlySalary) as MaxSalary

	from Employees;
