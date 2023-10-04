//Me and Prof : 

#include <iostream>
#include<iomanip>
#include <string>

using namespace std;

void FillMatrixWitOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
	int Counter = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

void TransposedMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			  arrTransposed[i][j] = arr[j][i];
		}
		cout << "\n";
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

int main()
{

	int arr[3][3], arrTransposed[3][3];
	
	
	FillMatrixWitOrderedNumbers(arr, 3, 3);

	cout << "The following is a 3x3 Ordered Matrix : \n";
	PrintMatrix(arr, 3, 3);

	TransposedMatrix(arr, arrTransposed, 3, 3);

	cout << "\nThe following is the Transposed Matrix : \n";
	PrintMatrix(arrTransposed, 3, 3);

	system("pause>0");

}
