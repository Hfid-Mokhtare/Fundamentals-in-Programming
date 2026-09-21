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
			cout << setw(3) << arr[i][j];
		}
		cout << "\n";
	}
}

bool IsIdentityMatrix(int Matrix1[3][3], short Rows, short Cols)
{

	//check Diagomal elements are 1 and rest elements are 0
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			//check for diagonals element
			if (i==j && Matrix1[i][j] != 1) 
			{
				return false;
			}
			//check for elements
			else if (i != j && Matrix1[i][j] != 0)
			{
					return false;
			}
		}
	}

	
	return true;

}


int main()
{

	int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

	
	cout << "Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	(IsIdentityMatrix(Matrix1, 3, 3)==true) ? 
		cout << "\nYes : Matrix is Identity." : 
		cout << "\nNo : Matrix  is Not Identity.";
	
	
	system("pause>0");
}
