//Exemple : 
#include <iostream>
#include <string>


using namespace std;

enum enDays { monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7 };

void PrintWeekDaysMenue()
{
	cout << "***********************************\n";
	cout << "            Week Days              \n";
	cout << "***********************************\n";
	cout << "1 : Monday\n";
	cout << "2 : Tuesday\n";
	cout << "3 : Wednesday\n";
	cout << "4 : Thursday\n";
	cout << "5 : Friday\n";
	cout << "6 : Saturday\n";
	cout << "7 : Sunday\n";
	cout << "***********************************\n";
	cout << "Please enter the number of day ?" << endl;
}

enDays ReadNumOFDays()
{
	short Num;
	cout << "What is today ? "; cin >> Num;

	return (enDays)Num;

}

void CheckNumOFDays(enDays NumOFDays)
{
	switch (NumOFDays)
	{
	case enDays::monday:
		system("color 3F");
		cout << "Monday";
		break;

	case enDays::tuesday:
		system("color 3F");
		cout << "Tuesday";
		break;

	case enDays::wednesday:
		system("color 3F");
		cout << "Wednesday";
		break;

	case enDays::thursday:
		system("color 3F");
		cout << "Thursday";
		break;

	case enDays::friday:
		system("color 3F");
		cout << "Friday";
		break;

	case enDays::saturday:
		system("color 3F");
		cout << "Saturday";
		break;

	case enDays::sunday:
		system("color 3F");
		cout << "Sunday";
		break;

	default:
		system("color 4F");
		cout << "Wrongue Input !\n";
	}
}

int main()
{
	PrintWeekDaysMenue();
	cout << "to day is : ";
	CheckNumOFDays(ReadNumOFDays());

	return 0;
}
