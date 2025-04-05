select  DepartmentID,
		TotalEmployees=count(MonthlySalary) ,
		SumOfSalaries=sum(MonthlySalary),
		AverageOfSalaries=avg(MonthlySalary),
		MinSalary=Min(MonthlySalary),
		MaxSalary=Max(MonthlySalary)

	from Employees
	group by DepartmentID
	order by SumOfSalaries desc;
