// Problem #46 : Print Letters from A to Z
#include <iostream>
#include <string>

using namespace std;

void PrintLettersAtoZ()
{

	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;

	}

}
int main()
{

	PrintLettersAtoZ();

	return 0;
}

=====================================================

// Problem #47 : Loan Instalment Months
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

float TotalManths(int LoanAmount ,int MonthlyPayment)
{
	return (float)LoanAmount / MonthlyPayment;
}

int main()
{
	int LoanAmount = ReadPositiveNumber("please enter the Loan Amount : ");
	int MonthlyInstallment = ReadPositiveNumber("please enter the Monthly Installment : ");

	cout << "\nTotal Months to pay = " << TotalManths(LoanAmount, MonthlyInstallment);
	cout << endl;


	return 0;
}

=====================================================

// Problem #48 : Monthly Loan Installment
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

float MonthlyInstallment(int LoanAmount, int MonthlyPayment)
{
	return (float)LoanAmount / MonthlyPayment;
}

int main()
{

	int LoanAmount = ReadPositiveNumber("please enter the Loan Amount : ");
	int HowManyMonths = ReadPositiveNumber("How Many Monthly  : ");

	cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths);
	cout << endl;

	return 0;
}

=====================================================

// Problem #49 : ATM PIN
#include <iostream> 
#include <string>

using namespace std;

string ReadPinCode()
{
	string PinCode ;
	cout << "Please enter PIN code " << endl;
	cin >> PinCode;

    return PinCode;
}


bool Login()
{
	
	string PinCode;
	do
	{
		PinCode = ReadPinCode();

	    if ( PinCode == "1234")
	    {
			return 1;
	    }
	    else
	    {
	    	cout << "\nWrong PIN\n";
			system("color 4F"); //turnscreen to Red
	    }

	} while (PinCode != "1234");

	return 0;
}

int main()
{

	if (Login())
	{
		system("color 2F"); //turnscreen to Green
		cout << "\n Your account balance is " << 7500 << endl;
	};

	return 0;
}

=====================================================

// Problem #50 : ATM PIN 3 Times
#include <iostream>
#include <string>

using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << "Please enter PIN Code " << endl;
	cin >> PinCode;

	return PinCode;
}


bool Login()
{

	string PinCode;
	short counter = 3;
	do
	{
		counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1;
		}
		else
		{
			system("color 4F"); //turnscreen to Red
			cout << "\nWrong PIN,you have "<< counter<<" more try \n";
		}

	} while (PinCode != "1234" && counter>=1);

	return 0;
}

int main()
{

	if (Login())
	{
		system("color 2F"); //turn screen to Green
		cout << "\n Your account balance is " << 7500 << endl;
	}
	else
	{
		cout << "\nYour card blocked call the bank for help. \n";
	}

	return 0;
}
