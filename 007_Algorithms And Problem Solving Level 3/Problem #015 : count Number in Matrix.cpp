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


int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {9,6,0},{3,9,0},{0,8,9} };
	

	//FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	int NumToCheck = 0;
	cout << "\nEnter the number to count in matrix ?";
	cin >> NumToCheck;

	int Counter = CountNumToCheck(Matrix1, 3, 3, NumToCheck);
	
	cout << "\nNumber " << NumToCheck << " count in matrix is "
		 << Counter << endl;
	
	
	system("pause>0");
}
