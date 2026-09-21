//Me : 

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
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

short CountNumToCheck(int Matrix1[3][3], short Rows, short Cols, int NumToCheck)
{
	short Counter = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == NumToCheck)
			{
				Counter++;
			}
		}
	}

	return Counter;

}

bool IsSparseMatrix(int Matrix1[3][3], short Rows, short Cols)
{
  short MatrixSize = Rows * Cols;
	int NumberOf_0 = CountNumToCheck(Matrix1, 3, 3, 0);

		return ((MatrixSize - NumberOf_0) < NumberOf_0);
}


int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {0,1,4},{0,1,2},{0,0,9} };
	
	//FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	(IsSparseMatrix(Matrix1, 3, 3) == true) ?
		cout << "\nYes : It is Sparse" :
		cout << "\nNo : It is Not Sparse";
	
	
	system("pause>0");
}

================================================================

//Prof :

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
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

short CountNumToCheck(int Matrix1[3][3], short Rows, short Cols, int NumToCheck)
{
	short Counter = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == NumToCheck)
			{
				Counter++;
			}
		}
	}

	return Counter;

}

bool IsSparseMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	short MatrixSize = Rows * Cols;

		return  (CountNumToCheck(Matrix1, 3, 3, 0) >= (MatrixSize / 2));
}


int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {1,1,4},{0,1,2},{0,0,9} };
	
	//FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	(IsSparseMatrix(Matrix1, 3, 3) == true) ?
		cout << "\nYes : It is Sparse" :
		cout << "\nNo : It is Not Sparse";
	
	
	system("pause>0");
}
