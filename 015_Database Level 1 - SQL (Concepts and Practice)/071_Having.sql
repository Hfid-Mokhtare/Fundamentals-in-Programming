-- Havin is used with group by 
-- it a where statement fro group by

-- this is how to use having 
select  DepartmentID,
		TotalEmployees=count(MonthlySalary) ,
		SumOfSalaries=sum(MonthlySalary),
		AverageOfSalaries=avg(MonthlySalary),
		MinSalary=Min(MonthlySalary),
		MaxSalary=Max(MonthlySalary)

	from Employees
	group by DepartmentID
	having count(MonthlySalary) > 100 -- here
	order by SumOfSalaries desc;

-- the other way if you dont want to use having (not recomended)
select * from 
(
	select  DepartmentID,
			TotalEmployees=count(MonthlySalary) ,
			SumOfSalaries=sum(MonthlySalary),
			AverageOfSalaries=avg(MonthlySalary),
			MinSalary=Min(MonthlySalary),
			MaxSalary=Max(MonthlySalary)

			from Employees
		group by DepartmentID
		
		order by SumOfSalaries desc
)R1

where R1.TotalEmployees > 100;
