//Me and Prof : 
#include <iostream>
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
		Arr[i] = GetRandomNumber(-100, 100);

}

void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}

int NegativeCount(int ArrSource[100], int arrLength)
{
	int Counter = 0;

	for (int i = 0; i < arrLength; i++)
	{

		if (ArrSource[i] < 0)
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
	
	cout << "\Negative Number Count : ";
	cout << NegativeCount(ArrSource, ArrSourceLength);

	return 0;
}
