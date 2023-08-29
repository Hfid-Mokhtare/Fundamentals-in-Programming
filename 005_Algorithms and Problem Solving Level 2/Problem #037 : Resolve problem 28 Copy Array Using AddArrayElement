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

void AddArryElement(int Number, int Arr2[100], int arrLength)
{
	Arr2[arrLength] = Number;
	//arrLength++;
}

void FillArrayWithRandomNumbers(int Arr[100], int Arr2[100],int& arrLength)
{
	cout << "\nPlease Enter the Number of Element : \n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		Arr[i] = GetRandomNumber(1, 100);
		AddArryElement(Arr[i], Arr2, i);
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

	int Arr[100], Arr2[100], arrLength;

	FillArrayWithRandomNumbers(Arr, Arr2, arrLength);

	cout << "\nArray 1 Elements : \n";
	PrintArray(Arr, arrLength);

	cout << "\nArray 2 Elements After Copy  : \n";
	PrintArray(Arr2, arrLength);

	return 0;
}

=============================================================================

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

void AddArryElement(int Number, int Arr2[100], int& arr2Length)
{
	arr2Length++;
	Arr2[arr2Length-1] = Number;
}

void CopyArrayUsingAddArryElement(int ArrSource[100], int ArrDestination[100], int arrLength, int& ArrDestinationLength)
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
	CopyArrayUsingAddArryElement(Arr, Arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements : \n";
	PrintArray(Arr, arrLength);

	cout << "\nArray 2 Elements After Copy  : \n";
	PrintArray(Arr2, arr2Length);

	return 0;
}
