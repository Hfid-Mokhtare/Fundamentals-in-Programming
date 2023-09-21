#include <iostream>
#include <iomanip> // this library stored the std::setw

using namespace std;

//void FillArrayRows(int[], int);
//void FillArrayCols(int[], int);
//void FillTabelColons(int);

//void MyTable();

int main()
{

	int arrTable[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	cout << "+-----------+-----------+-----------+-----------+-----------+\n";
	cout << "|           | Colon 1   | Colon 2   | Colon 3   | Colon 4   |\n";
	cout << "+-----------+-----------+-----------+-----------+-----------+\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "|   Row  " << i + 1 << "  |";

		for (int j = 0; j < 4; j++)
		{
			cout << setw(11) << arrTable[i][j] << "|";
		}
		cout << "\n+-----------+-----------+-----------+-----------+-----------+\n";
	}
	


	return 0;
}
