//I can't solve this problem entel i say the solution of the Prof

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

bool IsPalindromeMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{

			if (Matrix1[i][j] != Matrix1[i][Cols - 1 - j])
			{
				return false;
			}

		}
	}
	
	return true;
}


int main()
{
	int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,4} };
	
	
	cout << "Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsPalindromeMatrix(Matrix1, 3, 3))
		cout << "\nYes is Palindrome";
	else
		cout << "\nNo is Not Palindrome";


	system("pause>0");
}
