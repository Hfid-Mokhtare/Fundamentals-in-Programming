//Me : 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void FillArrayWithHardCodeNumbers(int Arr[100], int& arrLength)
{
	arrLength = 6;

	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 30;
	Arr[4] = 20;
	Arr[5] = 10;

}

void AddArryElement(int Number, int Arr2[100], int& arr2Length)
{
		arr2Length++;
		Arr2[arr2Length - 1] = Number;
}

void CopyArrayInRverseOrderUsingAddArryElement(int ArrSource[100], int ArrSourceLength, int ArrDestination[100], int& ArrDestinationLength)
{
	for (int i = ArrSourceLength - 1; i >= 0; i--)
	{
		AddArryElement(ArrSource[i], ArrDestination, ArrDestinationLength);
	}
}

void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}

bool IsTheSameElement(int Number1, int Number2 )
{
	/*This function will compare whith tow Number are they eguale*/
	
	return Number1 == Number2;
}

int IsPalindromeArray(int ArrSource[100], int arrLength, int ArrDestination[100], int& ArrDestinationLength)
{

	for (int i = 0; i < arrLength; i++)
	{

		if (!IsTheSameElement(ArrSource[i], ArrDestination[i]))
		{
			return -1;
		}
	}
}

int main()
{

	int ArrSource[100], ArrSourceLength = 0, ArrDestination[100], ArrDestinationLength = 0;

	FillArrayWithHardCodeNumbers(ArrSource, ArrSourceLength);

	CopyArrayInRverseOrderUsingAddArryElement(ArrSource, ArrSourceLength, ArrDestination, ArrDestinationLength);

	cout << "\nArray 1 Elements : \n";
	PrintArray(ArrSource, ArrSourceLength);
	
	if (IsPalindromeArray(ArrSource, ArrSourceLength, ArrDestination, ArrDestinationLength) == -1)
	{
		cout << "No is Not a Palindrome Array\n";
	}
	else
		cout << "Yes is a Palindrome Array\n";


	

	return 0;
}

========================================================================================================

//Prof : 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void FillArrayWithHardCodeNumbers(int Arr[100], int& arrLength)
{
	arrLength = 6;

	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 30;
	Arr[4] = 20;
	Arr[5] = 10;

}

void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}

bool IsPalindromeArray(int ArrSource[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{

		if (ArrSource[i] != ArrSource[arrLength - 1 - i])
		{
			return false;
		}
	}
	return true;
}

int main()
{

	int ArrSource[100], ArrSourceLength = 0;

	FillArrayWithHardCodeNumbers(ArrSource, ArrSourceLength);

	cout << "\nArray 1 Elements : \n";
	PrintArray(ArrSource, ArrSourceLength);
	
	if (IsPalindromeArray(ArrSource, ArrSourceLength))
	
		cout << "Yes is a Palindrome Array\n";
	
	else
		cout << "No is Not a Palindrome Array\n";


	

	return 0;
}

