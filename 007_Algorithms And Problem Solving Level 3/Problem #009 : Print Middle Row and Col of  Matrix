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
			arr[i][j] = GetRandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3);
			printf("%0*d   ", 2,arr[i][j]);
		}
		cout << "\n";
	}
}

void PrintMidRowOfMatrix(int Matrix1[3][3], short Rows, short Cols)
{

	short MiddleRow = Rows / 2;
	
		for (int j = 0; j < Cols; j++)
		{
			printf("%0*d   ", 2, Matrix1[MiddleRow][j]);
		}

		cout << "\n";
}

void PrintMidColOfMatrix(int Matrix1[3][3], short Rows, short Cols)
{

	short MiddleCol = Cols / 2;

	for (int i = 0; i < Rows; i++)
	{
		printf("%0*d   ", 2,  Matrix1[i][MiddleCol]);
	}

	cout << "\n";
}


int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));


	int Matrix1[3][3];
	
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMiddle Row of Matrix is : \n";
	PrintMidRowOfMatrix(Matrix1, 3, 3);

	cout << "\nMiddle Col of Matrix is : \n";
	PrintMidColOfMatrix(Matrix1, 3, 3);
	
	system("pause>0");

}
