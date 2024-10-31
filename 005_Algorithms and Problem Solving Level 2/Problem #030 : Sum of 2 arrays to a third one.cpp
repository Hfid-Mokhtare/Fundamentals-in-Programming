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

int PrintRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
		Arr[i] = PrintRandomNumber(1, 100);

}


void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}



void SumOfTowArrays(int Arr[100], int Arr2[100], int Arr3[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Arr3[i] = Arr[i] + Arr2[i];
	}

}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], Arr2[100], arrLength;

	arrLength = ReadPositiveNumber("\nPlease Enter the Number of Element : \n");

	FillArrayWithRandomNumbers(Arr, arrLength);
	FillArrayWithRandomNumbers(Arr2, arrLength);

	cout << "\nArray 1 Elements : ";
	PrintArray(Arr, arrLength);

	cout << "\nArray 2 Elements : ";
	PrintArray(Arr2, arrLength);

	int Arr3[100];
	SumOfTowArrays(Arr, Arr2, Arr3, arrLength);

	cout << "\nSum of Array 1 and Array 2 Elements : ";
	PrintArray(Arr3, arrLength);

	return 0;
}

=========================================================================================

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

int PrintRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
		Arr[i] = PrintRandomNumber(1, 100);

}


void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}



void SumOf2Arrays(int Arr[100], int Arr2[100], int ArrSum[100], int arrLength)
{
	
	for (int i = 0; i < arrLength; i++)
	{
		ArrSum[i] = Arr[i] + Arr2[i];
	}

}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], Arr2[100], ArrSum[100];
	int arrLength = ReadPositiveNumber("\nPlease Enter the Number of Element : \n");

	FillArrayWithRandomNumbers(Arr, arrLength);
	FillArrayWithRandomNumbers(Arr2, arrLength);

	SumOf2Arrays(Arr, Arr2, ArrSum, arrLength);

	cout << "\nArray 1 Elements : ";
	PrintArray(Arr, arrLength);

	cout << "\nArray 2 Elements : ";
	PrintArray(Arr2, arrLength);
	
	cout << "\nSum of Array 1 and Array 2 Elements : ";
	PrintArray(ArrSum, arrLength);

	return 0;
}
