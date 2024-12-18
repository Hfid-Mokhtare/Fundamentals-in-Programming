// after one year i came backe to solve this problem and i do it butter than my teacher
// the speed of my programme is : 3515881  microseconds
// the speed of my teacher programme is : 4745802 microseconds

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

int GitDigit(int Number)
{
	return Number % 10;
}

int Counte_Digit(int Num, short Digit)
{
	int counter = 0;
	while (Num> 0)
	{
		
		if (Digit == GitDigit(Num))
		{
			counter++;
		}
		
		Num = Num /= 10;
		
	}
	return counter;
}

int Delet_Digits(int Num, short Digit)
{
	int Num2 = 0;
	short Remainder = 0;
	while (Num > 0)
	{
		Remainder = Num % 10;
		if (Remainder != Digit)
		{
			Num2 = Num2 * 10 + Remainder;
		}
		Num = Num / 10;
	}
	return Num2;
}

void Counte_Digits_Frecuancy(int Num)
{
	short Digit_To_cownte = 0;

	while(Num>0)
	{
		Digit_To_cownte = Num % 10;
		
		cout << "Digit " << Digit_To_cownte << " Frequency is " 
			<< Counte_Digit(Num, Digit_To_cownte) << " Time(s)" << endl;

		Num = Delet_Digits(Num, Digit_To_cownte);

	}
}

int main()
{
	int Num = ReadPositiveNumber("Please Enter a Positive Number : ");
	Counte_Digits_Frecuancy(Num);
	
	return 0;
}
 
===============================================================================
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
