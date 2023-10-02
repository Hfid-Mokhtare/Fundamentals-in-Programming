#include <iostream>
#include <string>
#include<iomanip>

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

int RowSum(int arr[3][3], short RowNumber, short Cols)
{
	int Sum = 0;
	for (int j = 0; j < Cols; j++)
	{
		Sum += arr[RowNumber][j];
	}
	return Sum;
}

void FillRowSumArray(int RowSumArray[3], short Arrlength,int arr[3][3], short Cols)
{
	for (int i = 0; i < Arrlength; i++)
	{

		RowSumArray[i] = RowSum(arr, i, Cols) ;
	}
}

void PrintEachRowSum(int RowSumArray[3], short Arrlength)
{
	
	cout << "\nThe following are the Sum of each Row in the Matrix : \n";

	for (int i = 0; i < Arrlength; i++)
	{
		
		cout << "Row " << i + 1 << " Sum = " << RowSumArray[i] << endl;
	}
}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL)); 

	
	int arr[3][3];
	int RowSumArray[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 Random Matrix : \n";
	PrintMatrix(arr, 3, 3);

	FillRowSumArray(RowSumArray, 3, arr, 3);
	
	PrintEachRowSum(RowSumArray,3);

	system("pause>0");

}

======================================================================

//Prof : 
#include <iostream>
#include <string>
#include<iomanip>

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

int RowSum(int arr[3][3], short RowNumber, short Cols)
{
	int Sum = 0;
	for (int j = 0; j < Cols; j++)
	{
		Sum += arr[RowNumber][j];
	}
	return Sum;
}

void SumMatrixRowInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{

		arrSum[i] = RowSum(arr, i, Cols) ;
	}
}

void PrintRowSumArray(int arrSum[3], short Rows)
{
	
	cout << "\nThe following are the Sum of each Row in the Matrix : \n";

	for (int i = 0; i < Rows; i++)
	{
		
		cout << "Row " << i + 1 << " Sum = " << arrSum[i] << endl;
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

	SumMatrixRowInArray(arr, arrSum, 3, 3);
	
	PrintRowSumArray(arrSum,3);

	system("pause>0");

}
