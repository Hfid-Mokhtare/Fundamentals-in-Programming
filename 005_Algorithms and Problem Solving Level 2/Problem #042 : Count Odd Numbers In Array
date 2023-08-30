//Me and Prof : 
#include <iostream>
#include <string>
#include <cstdlib>

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

int GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& arrLength)
{
	cout << "\nPlease Enter the Number of Element : \n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		Arr[i] = GetRandomNumber(1, 100);

}

void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}

int OddCount(int ArrSource[100], int arrLength)
{
	int Counter = 0;

	for (int i = 0; i < arrLength; i++)
	{

		if (ArrSource[i] % 2 != 0)
		{
			Counter++;
		}
	}
	return Counter;
	
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int ArrSource[100], ArrSourceLength = 0;

	FillArrayWithRandomNumbers(ArrSource, ArrSourceLength);

	cout << "\nArray Elements : ";
	PrintArray(ArrSource, ArrSourceLength);
	
	cout << "\nOdd Number Count : ";
	cout <<OddCount(ArrSource, ArrSourceLength);

	return 0;
}
