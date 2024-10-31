//Me :
#include <iostream>
#include <string>

using namespace std;

enum enPerfectOrNot { Perfect = 1, NotPerfect = 2 };

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

int GetDivisionOfNumber(int Num,int &counter)
{
	int M = round(Num / 2);

	for ( counter ; counter <= M; counter++)
	{
		if (Num % counter == 0)
			return counter;
		else
			continue;
	}
}

int CalculeTheSumOfDivisionNumbers(int Num)
{
	int M = round(Num / 2);
	int Sum=0;
	for (int counter = 1; counter <= M; counter++)
	{
		Sum += GetDivisionOfNumber(Num, counter);
	}
	return Sum;

}

enPerfectOrNot If_Sum_Of_Divisions_Equal_The_Num(int Num)
{
	if (CalculeTheSumOfDivisionNumbers(Num) == Num)
	{
		return enPerfectOrNot::Perfect;

	}
	else
	{
		return enPerfectOrNot::NotPerfect;
	}
}

void IsPerfectNumber(int Num)
{
		switch (If_Sum_Of_Divisions_Equal_The_Num(Num))
		{

		case enPerfectOrNot::Perfect:
			cout << Num << " is Perfect Number" << endl;
			break;
		case enPerfectOrNot::NotPerfect:
			cout << Num << " is Not Perfect Number" << endl;
			break;
		}
}

int main()
{
	int Num = ReadPositiveNumber("Please enter a Positive Number");

	IsPerfectNumber(Num);

	return 0;
}

=======================================================================

//Prof : 
#include <iostream>
#include <string>

using namespace std;

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

bool IsPerfectNumber(int Num)
{
	int Sum=0;
	for (int i = 1; i < Num; i++)
	{
		if (Num % i == 0)
			Sum += i;
	}
	return Num == Sum;
}

void PrintResults(int Num)
{
		if(IsPerfectNumber(Num))
			cout << Num << " is Perfect Number" << endl;
		else
			cout << Num << " is Not Perfect Number" << endl;
}

int main()
{

	PrintResults(ReadPositiveNumber("Please enter a Positive Number"));

	return 0;
}
