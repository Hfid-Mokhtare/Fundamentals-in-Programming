//Me : i can't soleve the Problem by the best way that is all that i can.

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

int ReadArrayElement(int NumberOfElement)
{
	
	int Arr[100];
	int Number = 0;

	for (int i = 1; i <= NumberOfElement; i++)
	{
		cout << "Element[" << i << "] : ";
		cin >> Arr[i];
		Number = Number * 10 + Arr[i];
	}

	return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
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

void PrintResult(short DigitToCheck, int NumberOfElement)
{
	int Number= ReadArrayElement(NumberOfElement);
	
	cout << "\nOriginal Array : " << Number << endl;


	cout << "\nDigit " << DigitToCheck << " Frequency is "
		<< CountDigitFrequency(DigitToCheck, Number) << " Time(s)\n";
}

int main()
{

	int NumberOfElement = ReadPositiveNumber("Please Enter the Number Of Element : ");
	short DigitToCheck = ReadPositiveNumber("Please Enter the Number you Want to check : ");

	PrintResult(DigitToCheck, NumberOfElement);

	return 0;
}

======================================================================================================

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

void ReadArray(int Arr[100],int & arrLength)
{
	cout << "\nPlease Enter the Number Of Element : \n";
	cin >> arrLength;
	
	cout << "\nEnter array elements : \n";

	for (int i = 0; i <= arrLength-1; i++)
	{
		cout << "Element[" << i+1 << "] : ";
		cin >> Arr[i];
	}
	cout << endl;
}

void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}

int TimesRepeated(int Arr[100],short NumberToCheck, int arrLength)
{
	int Counter = 0;

	for (int i = 0; i <= arrLength-1; i++)
	{
		
		if (NumberToCheck == Arr[i])
		{
			Counter++;
		}
	}
	return Counter;
}



int main()
{

	int Arr[100], arrLength, NumberToCheck;

	ReadArray(Arr, arrLength);

	NumberToCheck = ReadPositiveNumber("Please Enter the Number you want to check : ");

	cout << "\nOriginal Array : ";
	PrintArray(Arr, arrLength);

	cout << "\nNumber " << NumberToCheck;
	cout << " Is Repeated : ";
	cout <<	TimesRepeated(Arr, NumberToCheck, arrLength) << " Time(s)\n";

	
	return 0;
}
