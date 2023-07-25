//Problem #41 : Weeks and Days
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

float HoursToDays(float NumberOfHours)
{

	return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{

	return (float)NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{

	return (float)NumberOfDays / 7;
}

int main()
{
	float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours : ");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << endl;
	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << NumberOfWeeks << endl;

	return 0;
}

=========================================================================================

//Problem #42 : Task Duration In Seconds
#include <iostream>
#include <string>

using namespace std;

struct stTaskDurations
{
	float Days, Hours, Minutes, Seconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}


stTaskDurations ReadeTaskDurations()
{
	stTaskDurations TaskDurations;

	TaskDurations.Days = ReadPositiveNumber("Please Enter The Number Of Days : ");
	TaskDurations.Hours = ReadPositiveNumber("Please Enter The Number Of Hours : ");
	TaskDurations.Minutes = ReadPositiveNumber("Please Enter The Number Of Minutes : ");
	TaskDurations.Seconds = ReadPositiveNumber("Please Enter The Number Of Seconds : ");

	return TaskDurations;
}

int Task_duration_in_seconds(stTaskDurations TaskDurations)
{
	int DurarionInSeconds = 0;

	DurarionInSeconds = TaskDurations.Days * 24 * 60 * 60;
	DurarionInSeconds += TaskDurations.Hours * 60 * 60;
	DurarionInSeconds += TaskDurations.Minutes * 60;
	DurarionInSeconds += TaskDurations.Seconds;


	return DurarionInSeconds;
}


void PrintTask_duration(float DurarionInSeconds)
{
	cout << endl;
	cout <<"Task Duration In Seconds : "<< DurarionInSeconds;
	cout << endl;
}

int main()
{
	
	
	PrintTask_duration(Task_duration_in_seconds(ReadeTaskDurations()));

	return 0;
}

=========================================================================================

//Problem #43 : Seconds to Days,Hours,Minutes,Seconds
#include <iostream> 
#include <string>

using namespace std;

struct stTaskDuration
{
	float Days, Hours, Minutes, Seconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}


stTaskDuration Seconds_To_Task_duration(int TotalSeconds)
{

	stTaskDuration TaskDurations;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;
	
	int Remainder = 0;

	TaskDurations.Days = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;

	TaskDurations.Hours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;

	TaskDurations.Minutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;

	TaskDurations.Seconds = Remainder;


	return TaskDurations;

}


void Print_Task_Duration_Details(stTaskDuration TaskDurations)
{
	cout << endl;
	cout << TaskDurations.Days << ":"
		 << TaskDurations.Hours << ":"
		 << TaskDurations.Minutes << ":"
		 << TaskDurations.Seconds << endl;
}

int main()
{

	int TotalSeconds = ReadPositiveNumber("please enter the Task duration in seconds : ");

	Print_Task_Duration_Details(Seconds_To_Task_duration(TotalSeconds));

	return 0;
}

=========================================================================================

//Problem #44 : Day of Week
#include <iostream>
#include <string>


using namespace std;

enum enDayOfWeek { sunday = 1, monday = 2, tusday = 3, wedensday = 4, thursday = 5, friday = 6, saturday = 7 };

int ReadNumberInRange(string Message,int From,int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;
}

enDayOfWeek ReadDaysOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please Enter Day Number (Sun=1,Mon=2,Tue=3,Wed=4,The=5,Fri=6,Sat=7) : ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Days)
{
	switch (Days)
	{
	case enDayOfWeek::monday:
		return "Monday";
	case enDayOfWeek::tusday:
		return "Tuesday";
	case enDayOfWeek::wedensday:
		return "Wednesday";
	case enDayOfWeek::thursday:
		return "Thursday";
	case enDayOfWeek::friday:
		return "Friday";
	case enDayOfWeek::saturday:
		return "Saturday";
	case enDayOfWeek::sunday:
		return"Sunday";
	default:
		cout << " Wrongue Input !\n";
	}
}

int main()
{
	
	cout << GetDayOfWeek(ReadDaysOfWeek());

	return 0;
}

=========================================================================================

//Problem #45 : Month of Year
#include <iostream>
#include <string>

using namespace std;

enum enMonth {
	janury = 1, fibrery = 2, march = 3,
	aprile = 4, may = 5, june = 6, july = 7,
	august = 8, septenber = 9, october = 10,
	november = 11, december = 12
};

int ReadNumberInRange(string Message,int From,int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;
}

enMonth ReadMonth()
{
	return (enMonth)ReadNumberInRange("Please Enter Month Number [1 to 12]: ", 1, 12);
}

string GetMonth(enMonth Days)
{
	switch (Days)
	{
	case enMonth::janury:
		return "Janury";
	case enMonth::fibrery:
		return "Fibrery";
	case enMonth::march:
		return "March";
	case enMonth::aprile:
		return "Aprile";
	case enMonth::may:
		return "May";
	case enMonth::june:
		return "June";
	case enMonth::july:
		return "July";
	case enMonth::august:
		return "August";
	case enMonth::septenber:
		return "Septenber";
	case enMonth::october:
		return "O11ctober";
	case enMonth::november:
		return "November";
	case enMonth::december:
		return "December";
	default:
		return " Wrongue Input !\n";
	}
}

int main()
{
	
	cout << GetMonth(ReadMonth());

	return 0;
}
