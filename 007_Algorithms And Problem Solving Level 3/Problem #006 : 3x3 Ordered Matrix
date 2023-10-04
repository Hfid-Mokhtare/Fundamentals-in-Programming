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

	int arr[3][3];
	
	FillMatrixWitOrderedNumbers(arr, 3, 3);

	cout << "The following is a 3x3 Ordered Matrix : \n";
	PrintMatrix(arr, 3, 3);

	system("pause>0");

}
