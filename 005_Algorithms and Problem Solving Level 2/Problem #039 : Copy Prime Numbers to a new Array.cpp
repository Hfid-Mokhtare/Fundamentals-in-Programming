//Me and Prof : 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

enPrimeOrNot CheckPrimeOrNot(int Num)
{
	int M = round(Num / 2);

	for (int counter = 2; counter <= M; counter++)
	{

		if (Num % counter == 0)
			return enPrimeOrNot::NotPrime;
	}

	return enPrimeOrNot::Prime;
}

void AddArryElement(int Number, int Arr2[100], int& arr2Length)
{
		arr2Length++;
		Arr2[arr2Length - 1] = Number;
}

void CopyPrimeNumbers(int ArrSource[100], int ArrDestination[100], int arrLength, int& ArrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrimeOrNot(ArrSource[i])== enPrimeOrNot::Prime)
		{
			AddArryElement(ArrSource[i], ArrDestination, ArrDestinationLength);
		}
	}
}

void FillArrayWithRandomNumbers(int Arr[100], int& arrLength)
{
	cout << "\nPlease Enter the Number of Element : \n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		Arr[i] = GetRandomNumber(1, 100);
	}
}

void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], arrLength, arr2Length = 0;

	FillArrayWithRandomNumbers(Arr, arrLength);

	int Arr2[100];
	CopyPrimeNumbers(Arr, Arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements : \n";
	PrintArray(Arr, arrLength);

	cout << "\nArray 2 Prime Numbers  : \n";
	PrintArray(Arr2, arr2Length);

	return 0;
}
