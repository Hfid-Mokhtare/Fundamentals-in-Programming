//Problem #36 :
//Without using enums .
#include <iostream>
#include <string>


using namespace std;


void ReadNum(float& Num1, float& Num2, char& OperationType)
{

	cout << " Please enter Number1 : "; cin >> Num1;
	cout << " Please enter Number2 : "; cin >> Num2;
	cout << " Please enter the Operation Type : "; cin >> OperationType;


}


float CheckOperationType(float Num1, float Num2,char OperationType)
{
	switch (OperationType)
	{
		case '+':
			return Num1 + Num2;
			break;
		case '-':
			return Num1 - Num2;
			break;
		case '*':
			return Num1 * Num2;
			break;
		case '/':
			return Num1 / Num2;
			break;
	}	
}

void PrintResult(float Result)
{
	system("color 3F");
	cout << Result;
}


int main()
{
	float Num1, Num2;
	char OperationType;

	ReadNum(Num1, Num2, OperationType);
	;
	PrintResult(CheckOperationType(Num1, Num2, OperationType));

	return 0;
}

=====================================================================================

//Problem #36 :
//Withe using enums .
#include <iostream>
#include <string>


using namespace std;

enum enOperationType { sum = '+',minus = '-', multiplication = '*', division = '/'};

void ReadNum(float& Num1, float& Num2, char& OperationType)
{

	cout << " Please enter Number1 : "; cin >> Num1;
	cout << " Please enter Number2 : "; cin >> Num2;
	cout << " Please enter the Operation Type : "; cin >> OperationType;


}


float CheckOperationType(float Num1, float Num2, char OperationType)
{
	switch (OperationType)
	{
	case enOperationType::sum:
		return Num1 + Num2;
		break;
	case enOperationType::minus:
		return Num1 - Num2;
		break;
	case enOperationType::multiplication:
		return Num1 * Num2;
		break;
	case enOperationType::division:
		return Num1 / Num2;
		break;
default :
   cout << "wrongue Number \n";
	}
}

void PrintResult(float Result)
{
	system("color 3F");
	cout << Result;
}


int main()
{
	float Num1, Num2;
	char OperationType;

	ReadNum(Num1, Num2, OperationType);
	;
	PrintResult(CheckOperationType(Num1, Num2, OperationType));

	return 0;
}

=====================================================================================

//Problem #44 :
#include <iostream>
#include <string>


using namespace std;

enum Days { monday = 1, tusday = 2, wedensday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7 };

short ReadNumOFDays()
{
	short NumOFDays;

	cout << " enter Number OF Day : "; cin >> NumOFDays;

	return NumOFDays;

}

void CheckNumOFDays(short NumOFDays)
{
	switch (NumOFDays)
			{
	case Days::monday:
		system("color 1F");
		cout << "Monday";
		break;

	case Days::tusday:
		system("color 2F");
		cout << "Tuesday";
		break;

	case Days::wedensday:
		system("color 3F");
		cout << "Wednesday";
		break;

	case Days::thursday:
		system("color 4F");
		cout << "Thursday";	
		break;

	case Days::friday:
		system("color 5F");
		cout << "Friday";
		break;
	case Days::saturday:
		system("color 6F");
		cout << "Saturday";
		break;

	case Days::sunday:
		system("color 7F");
		cout << "Sunday";
		break;

	default :
		system("color 4F");
		cout << " Wrongue Input !\n";
	}
}

int main()
{

	CheckNumOFDays(ReadNumOFDays());

	return 0;
}

=====================================================================================

//Problem #45 :
#include <iostream>
#include <string>


using namespace std;

enum enMonth { janury = 1, fibrery = 2, march = 3, aprile = 4, may = 5, june = 6, july = 7, august = 8, septenber = 9, october = 10, november = 11, december = 12 };

short ReadNumOFMonth()
{
	short NumOFMonth;

	cout << " enter Number OF Month : "; cin >> NumOFMonth;

	return NumOFMonth;

}

void CheckNumOFMonth(short NumOFMonth)
{

	switch (NumOFMonth)
					{
			case enMonth::janury:
				system("color 3F");
				cout << "janury";
				break;
		
			case enMonth::fibrery:
				system("color 3F");
				cout << "fibrery";
				break;
		
			case enMonth::march:
				system("color 3F");
				cout << "March";
				break;
		
			case enMonth::aprile:
				system("color 3F");
				cout << "Aprile";	
				break;
		
			case enMonth::may:
				system("color 3F");
				cout << "may";
				break;
			case enMonth::june:
				system("color 3F");
				cout << "june";
				break;
		
			case enMonth::july:
				system("color 3F");
				cout << "july";
				break;

			case enMonth::august:
				system("color 3F");
				cout << "august";
				break;

			case enMonth::septenber:
				system("color 3F");
				cout << "septenber";
				break;

			case enMonth::october:
				system("color 3F");
				cout << "october";
				break;

			case enMonth::november:
				system("color 3F");
				cout << "november";
				break;

			case enMonth::december:
				system("color 3F");
				cout << "december";
				break;
		
			default :
				system("color 3F");
				cout << " Wrongue Input !\n";
			}
}

int main()
{

	CheckNumOFMonth(ReadNumOFMonth());

	return 0;
}

