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



int CountDigitFrequency(int Number, short DigitToCheck)
{
	int Remainder = 0, FreqCount = 0;

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

bool CheckFreqCount(int Number, short DigitToCheck)
{
	
		return CountDigitFrequency(Number, DigitToCheck) != 0;
	
}

void PrintResult(int Number)
{
	for (short DigitToCheck = 1; DigitToCheck <= 9; DigitToCheck++)
	{
		if (CheckFreqCount(Number, DigitToCheck))
		{
			cout << "\nDigit " << DigitToCheck << " Frequency is " <<
				CountDigitFrequency(Number, DigitToCheck) << " Time(s)\n";
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter the main Number : ");

	PrintResult(Number);
	

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

int CountDigitFrequency(int Number, short DigitToCheck)
{
	int Remainder = 0, FreqCount = 0;

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

void PrintAllDigitsFrequency(int Number)
{
	cout << endl;

	for (int i = 1; i <= 9; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(Number, i);

			if (DigitFrequency > 0)
			{

				cout << "Digit " << i << " Frequency is "
					<< DigitFrequency << " Time(s).\n";
			}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter the main Number : ");

	PrintAllDigitsFrequency(Number);
	

	return 0;
}
