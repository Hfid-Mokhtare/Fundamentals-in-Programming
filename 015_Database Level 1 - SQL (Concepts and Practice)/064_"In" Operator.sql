-- Selecting all columns from the Employees table where the DepartmentID is either 1 or 2.
SELECT *
FROM Employees
WHERE DepartmentID = 1 OR DepartmentID = 2;

-- Selecting all columns from the Employees table where the DepartmentID is 1, 2, or 7.
SELECT *
FROM Employees
WHERE DepartmentID = 1 OR DepartmentID = 2 OR DepartmentID = 7;

-- Selecting all columns from the Employees table where the DepartmentID is 1, 2, 5, or 7.
SELECT *
FROM Employees
WHERE DepartmentID = 1 OR DepartmentID = 2 OR DepartmentID = 5 OR DepartmentID = 7;


-- "in" Operator is a shorte cut of or Operator
-- "in" Operator is compare a set of element withe the same type

-- Selecting all columns from the Employees table where the DepartmentID is in the set (1, 2, 5, 7).
SELECT *
FROM Employees
WHERE DepartmentID IN (1,2,5,7);


-- Selecting all columns from the Employees table where the FirstName is in the set ('Jacob', 'Brooks', 'Harper').
SELECT *
FROM Employees
WHERE FirstName IN ('Jacob','Brooks','Harper');



-- Selecting the DepartmentID from the Employees table where the MonthlySalary is less than or equal to 210.
SELECT DepartmentID
FROM Employees
WHERE MonthlySalary <= 210;

-- Selecting all columns from the Departments table.
SELECT*
FROM Departments;

-- Selecting the Name from the Departments table where the ID is present in the result of the subquery
-- (which returns DepartmentIDs of employees with MonthlySalary <= 210).
SELECT Departments.Name
FROM Departments
WHERE ID IN (SELECT DepartmentID FROM Employees WHERE MonthlySalary <= 210);


-- Selecting the Name from the Departments table where the ID is NOT present in the result of the subquery
-- (which returns DepartmentIDs of employees with MonthlySalary <= 210).
SELECT Departments.Name
FROM Departments
WHERE ID NOT IN (SELECT DepartmentID FROM Employees WHERE MonthlySalary <= 210);
