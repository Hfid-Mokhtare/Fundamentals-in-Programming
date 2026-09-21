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
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

bool IsNumberInMatrix(int Matrix1[3][3], short Rows, short Cols, int NumToCheck)
{
	short Counter = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == NumToCheck)
			{
				return true;
			}
		}
	}

	return false;

}


int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3];


	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	int NumToCheck = 0;
	cout << "\nEnter the number to look for in matrix ?";
	cin >> NumToCheck;

	
	(IsNumberInMatrix(Matrix1, 3, 3, NumToCheck) == true) ?
		cout << "\nYes is There" :
		cout << "\nNo is Not There";


	system("pause>0");
}
