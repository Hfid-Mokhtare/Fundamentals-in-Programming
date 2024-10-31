//Me : 
#include <iostream>
#include <string>

using namespace std;

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

int PrintRandomNumber(int From, int To)
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

void CopyArray(int ArrSource[100],int ArrDestination[100], int& arrLength)
{
	int counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrimeOrNot(ArrSource[i]) == enPrimeOrNot::Prime)
		{
			ArrDestination[counter] = ArrSource[i];
			counter++;
		}

	}
	arrLength = counter;
}



int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], arrLength;

	FillArrayWithRandomNumbers(Arr, arrLength);

	cout << "\nArray Elements : ";
	PrintArray(Arr, arrLength);

	int Arr2[100];
	CopyArray(Arr, Arr2, arrLength);

	cout << "\nArray 2 Elements After Copy : ";
	PrintArray(Arr2, arrLength);

	return 0;
}

==========================================================================

//Prof : 
#include <iostream>
#include <string>

using namespace std;

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

int PrintRandomNumber(int From, int To)
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

void CopyOnlyPrimeNumbers(int ArrSource[100], int ArrDestination[100], int arrLength, int &arr2Length)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrimeOrNot(ArrSource[i]) == enPrimeOrNot::Prime)
		{
			ArrDestination[Counter] = ArrSource[i];
			Counter++;
		}

	}
	arr2Length = --Counter;
}



int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], arrLength;

	FillArrayWithRandomNumbers(Arr, arrLength);

	int Arr2[100], arr2Length = 0;
	CopyOnlyPrimeNumbers(Arr, Arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements : ";
	PrintArray(Arr, arrLength);

	cout << "\nPrime Numbers in Array 2 : ";
	PrintArray(Arr2, arr2Length);

	return 0;
}
