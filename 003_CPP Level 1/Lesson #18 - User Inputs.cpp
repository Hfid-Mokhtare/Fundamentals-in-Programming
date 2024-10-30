//Q1 :

#include <iostream>
using namespace std;


int main()
{
	//those are my variables for the user
	string FullName ;
	short Age =0;
	string City ;
	string Country ;
	float MonthlySalary = 0;
	char Gender ;
	bool isMarried;

	//asking the user to enter his informations
	cout << "Please enter your Full Name : ";
	cin >> FullName;
	cout << "Please enter your Age : ";
	cin >> Age;
	cout << "Please enter your City : ";
	cin >> City;
	cout << "Please enter your Country : ";
	cin >> Country;
	cout << "Please enter your Monthly Salary : ";
	cin >> MonthlySalary;
	cout << "Please enter your Gender : ";
	cin >> Gender;
	cout << "Are you married (1/0) : ";
	cin >> isMarried;

	float YearlySalary = MonthlySalary * 12;


	//Print the user information
	cout << "\n************************************\n";
	cout << "Name : " << FullName << endl;
	cout << "Age : " << Age << " Years." << endl;
	cout << "City : " << City << endl;
	cout << "Monthly Salary : " << MonthlySalary << endl;
	cout << "Yearly Salary : " << YearlySalary << endl;
	cout << "Gender : " << Gender << endl;
	cout << "Married : " << isMarried << endl;
	cout << "************************************\n";



	return 0;
}

===========================================================================

//Q2 :

#include <iostream>

using namespace std;

int main()
{
	short Num1 = 0, Num2 = 0, Num3 = 0;

	cout << "Please enter Number1 : ";
	cin >> Num1;
	cout << "Please enter Number2 : ";
	cin >> Num2;
	cout << "Please enter Number3 : ";
	cin >> Num3;

	short total = Num1 + Num2 + Num3;


	cout << Num1 << "+" << endl;
	cout << Num2 << "+" << endl;
	cout << Num3 << endl;
	cout << "----------------------" << endl;
	cout << "total = " << total << endl;


	return 0;
}


===========================================================================

//Q3 :

#include <iostream>
using namespace std;


int main()
{

	short Age ;
	int add_to_age = 5;

	cout << "please enter your age : "; cin >> Age;

	cout << "after " << add_to_age << " years you will be " << Age + add_to_age << " years old" << endl;


	return 0;
}

