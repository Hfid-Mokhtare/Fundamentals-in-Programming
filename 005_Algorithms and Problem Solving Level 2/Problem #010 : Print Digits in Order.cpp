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

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

void PrintDigits(int Number)
{
	int Num = ReverseNumber(Number);
	int Remainder = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Num /= 10;
		cout << Remainder << endl;
	}

}

int main()
{
	PrintDigits(ReadPositiveNumber("Please Enter a Positive Number : "));

	return 0;
}

===============================================================================

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

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

void PrintDigits(int Number)
{
	
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
	}

}

int main()
{
	PrintDigits(ReverseNumber(ReadPositiveNumber("Please Enter a Positive Number : ")));

	return 0;
}
