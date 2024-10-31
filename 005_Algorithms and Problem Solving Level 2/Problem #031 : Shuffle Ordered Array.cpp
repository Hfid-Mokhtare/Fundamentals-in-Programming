//Me : this all what i can do i dont solve the problem corectly but i do my efforte.
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

int GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithNumbersIn_Order(int Arr[100], int &arrLength)
{
	arrLength = ReadPositiveNumber("\nPlease Enter the Number of Element : \n");

	for (int i = 0; i < arrLength; i++)
	{
		Arr[i] = i+1;
	}

}

int TimesRepeated(int Arr[100], short NumberToCheck, int arrLength)
{
	int Counter = 0;

	for (int i = 0; i < arrLength ; i++)
	{

		if (NumberToCheck == Arr[i])
		{
			Counter++;
		}
	}
	return Counter;
}


void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}

void ShuffleTheArray(int Arr[100], int Arr2[100], int arrLength)
{
	int j = 0;
	int i = 0;

	int arrToCheck[10];

	for (int k = 0; k < arrLength; k++)
	{

		do
		{
			j = GetRandomNumber(1, arrLength);
			arrToCheck[k] = j;
			Arr2[k] = Arr[j];

		} while (TimesRepeated(arrToCheck, j, arrLength) == 0);

		
	}

}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], Arr2[100], arrLength;
	 

	FillArrayWithNumbersIn_Order(Arr, arrLength);

	ShuffleTheArray(Arr, Arr2, arrLength);

	cout << "\nArray Elements befor shuffling : ";
	PrintArray(Arr, arrLength);

	cout << "\nArray Elements after shuffling : ";
	PrintArray(Arr2, arrLength);

	return 0;
}

==========================================================================

//Prof : 
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

void FillArrayWithNumbersIn_Order(int Arr[100], int &arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		Arr[i] = i+1;
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

void Swap_Numbers(int& Num1, int& Num2)
{
	int Temp = 0;

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void ShuffleTheArray(int Arr[100], int arrLength)
{
	

	for (int i = 0; i < arrLength; i++)
	{
		Swap_Numbers(Arr[GetRandomNumber(1, arrLength) - 1], Arr[GetRandomNumber(1, arrLength) - 1]);
	}

}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100];
	int arrLength= ReadPositiveNumber("\nPlease Enter the Number of Element : \n");

	FillArrayWithNumbersIn_Order(Arr, arrLength);

	cout << "\nArray Elements befor shuffling : ";
	PrintArray(Arr, arrLength);

	ShuffleTheArray(Arr, arrLength);

	cout << "\nArray Elements befor shuffling : ";
	PrintArray(Arr, arrLength);

	

	return 0;
}
