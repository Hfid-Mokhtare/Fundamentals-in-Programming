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



int GetFrequencyDigit(int Number,int Digit)
{
	int Remainder = 0,counter=0;
	
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		if (Remainder == Digit)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter a Positive Number : ");
	int Digit = ReadPositiveNumber("Please Enter a Digit : ");

	cout << "\nDigit "<< Digit<<" Frequency is "
		<< GetFrequencyDigit(Number, Digit)
		<< " Time\n";


	return 0;
}

================================================================================

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



int CountDigitFrequency(int Number,short DigitToCheck)
{
	int Remainder = 0,FreqCount=0;
	
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		if (Remainder == DigitToCheck)
		{
			FreqCount++;
		}
	}
	return FreqCount;
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter the main Number : ");
	short DigitToCheck = ReadPositiveNumber("Please Enter one Digit to check : ");

	cout << "\nDigit "<< DigitToCheck <<" Frequency is "
		<< CountDigitFrequency(Number, DigitToCheck)<< " Time(s)\n";


	return 0;
}
