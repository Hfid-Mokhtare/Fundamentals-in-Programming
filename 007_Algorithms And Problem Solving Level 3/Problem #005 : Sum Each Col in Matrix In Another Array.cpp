//Me and Prof : 

#include <iostream>
#include<iomanip>
#include <string>

using namespace std;


int GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = GetRandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}

int ColSum(int arr[3][3], short Rows, short ColNumber)
{
	int Sum = 0;
	for (int i = 0; i < Rows; i++)
	{
		Sum += arr[i][ColNumber];
	}
	return Sum;
}

void SumMatrixColInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (int i = 0; i < Cols; i++)
	{

		arrSum[i] = ColSum(arr, Rows, i);
	}
}


void PrintColSumArray(int arrSum[3], short length)
{

	cout << "\nThe following are the Sum of each Row in the Matrix : \n";

	for (int j = 0; j < length; j++)
	{

		cout << "Col " << j + 1 << " Sum = " << arrSum[j]<< endl;
	}
}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));


	int arr[3][3];
	int arrSum[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 Random Matrix : \n";
	PrintMatrix(arr, 3, 3);

	SumMatrixColInArray(arr, arrSum, 3, 3);

	PrintColSumArray(arrSum, 3);

	system("pause>0");

}
