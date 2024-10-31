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

void CopyArrayInRverseOrder(int ArrSource[100], int ArrDestination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		ArrDestination[i] = ArrSource[(arrLength - 1) - i];

	}

}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], Arr2[100], arrLength;
	

	FillArrayWithRandomNumbers(Arr, arrLength);

	cout << "\nArray 1 Elements : \n";
	PrintArray(Arr, arrLength);

	CopyArrayInRverseOrder(Arr, Arr2, arrLength);

	cout << "\nArray 2 Elements After Copying Array 1 in Reversed Order : \n";
	PrintArray(Arr2, arrLength);


	return 0;
}


