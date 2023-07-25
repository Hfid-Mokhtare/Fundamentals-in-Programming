//Me : 
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
	for (int i = 1; i <= Num; i++)
	{
		if (IsPerfectNumber(i))
			cout << i << endl;
	}
}

int main()
{

	PrintResults(ReadPositiveNumber("Please enter a Positive Number"));

	return 0;
}

=======================================================================================

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

void PrintPerfectNumberFrom1ToN(int Num)
{
	for (int i = 1; i <= Num; i++)
	{
		if (IsPerfectNumber(i))
			cout << i << endl;
	}
}

int main()
{

	PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please enter a Positive Number"));

	return 0;
}

