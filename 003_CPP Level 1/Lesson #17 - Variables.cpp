Data types divise to three categories : 

# FUNDAMENTALS : 
	-Integral Type : - int    : - whole number      : 712
			  - char   : - singel character  : 'A'
	-Floating Type : - float  : - flaoting point    : 14.5
			  - double : - floating point    : 14.5
	-Boolean Type   : - bool   : - true or false
	-string Type    : - string : - text              : "Mohammed"
	-Void Type      : - void   : - Empty
	-Wide charater  : - wchar_t: - Unicode
# DERIVES :
	-Function
	-Array
	-Pointer
	-Reference

#USER-DEFINED :
	-Class
	-Structure
	-Union
	-Enum
	-Type Def


//Q1 :

#include <iostream>
using namespace std;


int main()
{
	string FullName = "Mohammed Ali Zeggaf";
short Age = 18;
string City = "tangier";
string Country = "Morocco";
float MonthlySalary = 5000;
float YearlySalary = MonthlySalary * 12;
char Gender = 'M';
bool isMarried = false;

cout << "************************************\n";
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
	short Num1 = 20, Num2 = 30, Num3 = 10;
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
	
	short Age=25;
	short add_to_age = 5;
	
	cout << "after "<< add_to_age <<" years you will be "<< Age + add_to_age <<" years old"<<endl;
	
	
	return 0;
}

===========================================================================
