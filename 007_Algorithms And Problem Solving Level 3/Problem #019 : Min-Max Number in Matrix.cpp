//Me and Prof : 

#include <iostream>
#include<iomanip>
#include <string>

using namespace std;


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

int MaxNumberInMatrix(int Matrix1[3][3], short Rows, short Cols)
{

	int Max = Matrix1[0][0];

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			if (Matrix1[i][j] > Max)
			{
				Max = Matrix1[i][j];
			}

		}
	}

	return Max;

}

int MinNumberInMatrix(int Matrix1[3][3], short Rows, short Cols)
{

	int Min = Matrix1[0][0];

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			if (Matrix1[i][j] < Min)
			{
				Min = Matrix1[i][j];
			}

		}
	}

	return Min;

}


int main()
{
	int Matrix1[3][3] = { {65,2,3},{11,15,13},{72,8,44} };
	
	cout << "Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMinimum Number is : ";
	cout << MinNumberInMatrix(Matrix1, 3, 3);

	cout << endl;

	cout << "\nMax Number is : ";
	cout << MaxNumberInMatrix(Matrix1, 3, 3);


	system("pause>0");
}
