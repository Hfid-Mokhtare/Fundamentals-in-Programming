//Me : 
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

enum enOddOrEven { Odd = 1, Even = 2 };

enOddOrEven CheckOddOrEven(int Num)
{
	if (Num % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

void AddArryElement(int Number, int Arr2[100], int& arr2Length)
{
	if (CheckOddOrEven(Number) == enOddOrEven::Odd)
	{
		arr2Length++;
		Arr2[arr2Length - 1] = Number;
	}
}

void CopyOddNumbers(int ArrSource[100], int ArrDestination[100], int arrLength, int ArrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		AddArryElement(ArrSource[i], ArrDestination, ArrDestinationLength);

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

	int Arr[100], arrLength, arr2Length=0;

	FillArrayWithRandomNumbers(Arr, arrLength);
	
	int Arr2[100];
	CopyOddNumbers(Arr, Arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements : \n";
	PrintArray(Arr, arrLength);

	cout << "\nArray 2 Elements After Copy  : \n";
	PrintArray(Arr2, arrLength);

	return 0;
}

=====================================================================

//Prof : 
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

void AddArryElement(int Number, int Arr2[100], int& arr2Length)
{
		arr2Length++;
		Arr2[arr2Length - 1] = Number;
}

void CopyOddNumbers(int ArrSource[100], int ArrDestination[100], int arrLength, int& ArrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (ArrSource[i] % 2 != 0)
		{
			AddArryElement(ArrSource[i], ArrDestination, ArrDestinationLength);
		}
	}

}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], arrLength=0, arr2Length=0;

	FillArrayWithRandomNumbers(Arr, arrLength);
	
	int Arr2[100];
	CopyOddNumbers(Arr, Arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements : \n";
	PrintArray(Arr, arrLength);

	cout << "\nArray 2 Odd numbers : \n";
	PrintArray(Arr2, arr2Length);

	return 0;
}
