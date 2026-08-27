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
	//use of size() Function 
	int size = vEmployees.size();
	

	for (int i = 0; i < size; i++)
	{
		stEmployee Employees = vEmployees[i];
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

	//use of size() Function tha mean the last Employee enter to the vector shoud not printed on the screen
	if (vEmployees.size() > 0)
	{
		vEmployees.pop_back();
	}
	cout << "Employees : \n";
	PrintVector(vEmployees);


	//i use cleat() Function to delet all the stack in the function
	vEmployees.clear();
	PrintVector(vEmployees);


	//i use empty() Function to make sure that function clear() is working good, we will have an error on the screen
	if (vEmployees.empty())
	{
		vEmployees.pop_back();
	}
		

	return 0;
}


