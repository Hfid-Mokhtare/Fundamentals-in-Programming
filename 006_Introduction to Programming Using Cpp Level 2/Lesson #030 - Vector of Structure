#include <iostream>Lesson # 30 - Vector of Structure
#include <vector>
#include <string>

using namespace std;

struct stEmployee
{
	string FirstName = " ";
	string LastName = " ";
	float Salary = 0;
};

int main()
{


	vector <stEmployee> vEmployees;
	stEmployee TempEmployee;

	TempEmployee.FirstName = "Mohamed Ali";
	TempEmployee.LastName = "Zeggaf";
	TempEmployee.Salary = 500000;
	vEmployees.push_back(TempEmployee);

	TempEmployee.FirstName = "Yahya";
	TempEmployee.LastName = "Zeggaf";
	TempEmployee.Salary = 400000;
	vEmployees.push_back(TempEmployee);

	TempEmployee.FirstName = "Firdous";
	TempEmployee.LastName = "Zeggaf";
	TempEmployee.Salary = 300000;
	vEmployees.push_back(TempEmployee);

	cout << "Empluyees : \n";

	for (stEmployee& Employee : vEmployees)
	{
		cout << "enter FirstName : " << Employee.FirstName << endl;
		cout << "enter LastName  : " << Employee.LastName << endl;
		cout << "enter Salary    : " << Employee.Salary << endl;
		cout << endl;
	}

	return 0;
}

======================================================================

//Home Work : 
#include <iostream>
#include <vector>

using namespace std;

struct stEmployee
{
	string FirstName = " ";
	string LastName = " ";
	float Salary = 0;
};

void ReadEmployees(vector <stEmployee>& vEmployees)
{
	stEmployee tempEmployee;
	char ReadMore = 'Y';

	while (ReadMore == 'Y' || ReadMore == 'y')
	{

		cout << "Enter First Name : "; cin >> tempEmployee.FirstName;
		cout << "Enter Last Name  : "; cin >> tempEmployee.LastName;
		cout << "Enter Salary    : "; cin >> tempEmployee.Salary;

		vEmployees.push_back(tempEmployee);

		cout << "do you want to enter more Employees (Y/N) ?";
		cin >> ReadMore;

		cout << endl;

	}

}

void PrintVector(vector <stEmployee>& vEmployees)
{



	cout << "Employees : \n";

	for (stEmployee Employees : vEmployees)
	{
		cout << "\n\n";
		cout << "enter FirstName : " << Employees.FirstName << endl;
		cout << "enter LastName  : " << Employees.LastName << endl;
		cout << "enter Salary    : " << Employees.Salary << endl;
		cout << endl;
	}
}

int main()
{

	vector <stEmployee> vEmployees;
	stEmployee TempEmployee;

	ReadEmployees(vEmployees);

	PrintVector(vEmployees);


	return 0;
}


