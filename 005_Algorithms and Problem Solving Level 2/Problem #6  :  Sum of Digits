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

void SumOfDigits(int Number)
{
	int Remainder = 0;
	int Sum = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Sum += Remainder;
	}
	cout << Sum;
}



int main()
{
	SumOfDigits(ReadPositiveNumber("Please Enter a Positive Number : "));

	
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

int SumOfDigits(int Number)
{
	int Sum = 0, Remainder = 0;
	

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Sum += Remainder;
	}
	return Sum;
}



int main()
{
	cout << "\nSum of Digits = "
		<< SumOfDigits(ReadPositiveNumber("Please Enter a Positive Number : "))
		<< "\n";

	return 0;
}
