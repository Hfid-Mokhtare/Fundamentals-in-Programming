//exemple :
#include <iostream>
#include <string>


using namespace std;

enum enDays { monday = 1, tusday = 2, wedensday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7 };

short ReadNumOFDays()
{
	short NumOFDays;

	cout << "Enter Number Of Day : "; cin >> NumOFDays;

	return NumOFDays;

}

void CheckNumOFDays(short NumOFDays)
{

	enDays Days;
	Days = (enDays) NumOFDays;

	if (Days == enDays::monday)
	{
		system("color 1F");
		cout << "Monday";

	}
	else if (Days == enDays::tusday)
	{
		system("color 2F");
		cout << "Tuesday";
	}
	else if (Days == enDays::wedensday)
	{
		system("color 3F");
		cout << "Wednesday";
	}
	else if (Days == enDays::thursday)
	{
		system("color 4F");
		cout << "Thursday";
	}
	else if (Days == enDays::friday)
	{
		system("color 5F");
		cout << "Friday";
	}
	else if (Days == enDays::saturday)
	{
		system("color 6F");
		cout << "Saturday";
	}
	else if (Days == enDays::sunday)
	{
		system("color 7F");
		cout << "Sunday";
	}
	else
	{
		system("color 4F");
		cout << " Wrongue Input !\n";
	}
}

int main()
{

	CheckNumOFDays(ReadNumOFDays());

	return 0;
}
