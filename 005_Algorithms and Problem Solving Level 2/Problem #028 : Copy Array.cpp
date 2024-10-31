//Me : 
#include <iostream>
#include <string>

using namespace std;

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



void CopyArray(int Arr[100],int ArrCopy[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		ArrCopy[i]=Arr[i] ;

	}
	
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], ArrCopy[100], arrLength;

	FillArrayWithRandomNumbers(Arr, arrLength);

	cout << "\nArray Elements : ";
	PrintArray(Arr, arrLength);

	cout << "\nArray 2 Elements After Copy : ";
	CopyArray(Arr, ArrCopy, arrLength);
	PrintArray(ArrCopy, arrLength);

	return 0;
}

========================================================================

//Prof : 
#include <iostream>
#include <string>

using namespace std;

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



void CopyArray(int ArrSource[100],int ArrDestination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		ArrDestination[i]= ArrSource[i] ;

	}
	
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], arrLength;

	FillArrayWithRandomNumbers(Arr, arrLength);

	int Arr2[100];
	CopyArray(Arr, Arr2, arrLength);

	cout << "\nArray Elements : ";
	PrintArray(Arr, arrLength);

	cout << "\nArray 2 Elements After Copy : ";
	PrintArray(Arr2, arrLength);

	return 0;
}
