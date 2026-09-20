//Me : 
#include <iostream>
#include<iomanip>

using namespace std;


void PrintMatrix(int[3][3], short, short);

int GetRandomNumber(int, int);

void FillMatrixWithRandomNumbers(int[3][3], short, short);

void PrintSumOfEachRow(int[3][3], short, short);





int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL)); 

	
	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 Random Matrix : \n";
	PrintMatrix(arr, 3, 3);

	cout << "\nThe following are the Sum of each Row in the Matrix : \n";
	PrintSumOfEachRow(arr, 3, 3);

	
	return 0;
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

int GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
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

void PrintSumOfEachRow(int arr[3][3], short Rows, short Cols)
{
	int Sum = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Sum += arr[i][j];
		}
		cout << "Row " << i+1 << " Sum = " << Sum << endl;
	}
}

==========================================================================

//Prof : 
#include <iostream>
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

void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
{
	
	cout << "\nThe following are the Sum of each Row in the Matrix : \n";

	for (int i = 0; i < Rows; i++)
	{
		
		cout << "Row " << i + 1 << " Sum = " << RowSum(arr,i, Cols) << endl;
	}
}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL)); 

	
	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 Random Matrix : \n";
	PrintMatrix(arr, 3, 3);

	
	PrintEachRowSum(arr, 3, 3);

	system("pause>0");

}
