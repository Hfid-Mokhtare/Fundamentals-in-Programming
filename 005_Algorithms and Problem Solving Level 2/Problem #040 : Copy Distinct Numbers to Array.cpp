//Prof : i can't solve this Problem in the first time but i soleve it when i see a Parte of the video
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void AddArryElement(int Number, int Arr2[100], int& arr2Length)
{
		arr2Length++;
		Arr2[arr2Length - 1] = Number;
}

short FindNumberPositionInArray(int Arr[100], int arrLength, int Number)
{
	/*This function will search for a number in array and return its index,
	or return -1 if it does not exists*/
	for (int i = 0; i < arrLength; i++)
	{
		if (Arr[i] == Number)
			return i;//this will bread the function and return the index
	}
	//if you reached here, this means the number is not found
	return -1;
}

bool IsTheNumberInArray(int Arr[100], int arrLength, int Number)
{

	return FindNumberPositionInArray(Arr, arrLength, Number) != -1;

}

void CopyDistinctNumbers(int ArrSource[100], int arrLength, int ArrDestination[100], int& ArrDestinationLength)
{
	
	for (int i = 0; i < arrLength; i++)
	{

		if (!IsTheNumberInArray(ArrDestination, ArrDestinationLength, ArrSource[i]))
		{
			AddArryElement(ArrSource[i], ArrDestination, ArrDestinationLength);
		}
	}

}

void FillArrayWithHardCodeNumbers(int Arr[100], int& arrLength)
{
	arrLength = 10;

	Arr[0] = 10;
	Arr[1] = 10;
	Arr[2] = 10;
	Arr[3] = 50;
	Arr[4] = 50;
	Arr[5] = 70;
	Arr[6] = 70;
	Arr[7] = 70;
	Arr[8] = 70;
	Arr[9] = 90;
}

void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}

int main()
{

	int ArrSource[100], ArrSourceLength = 0, ArrDestination[100], ArrDestinationLength = 0;

	FillArrayWithHardCodeNumbers(ArrSource, ArrSourceLength);

	
	CopyDistinctNumbers(ArrSource, ArrSourceLength, ArrDestination, ArrDestinationLength);

	cout << "\nArray 1 Elements : \n";
	PrintArray(ArrSource, ArrSourceLength);

	cout << "\nArray 2 Distinct Element  : \n";
	PrintArray(ArrDestination, ArrDestinationLength);

	return 0;
}
