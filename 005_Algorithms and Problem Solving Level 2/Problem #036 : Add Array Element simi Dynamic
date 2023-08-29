//Me : 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number != 0 && Number != 1);

	return Number;
}

void FillArrayWithNumber(int Arr[100], int arrLength)
{
	cout << "Please enter a Number : ";
	cin >> Arr[arrLength];  
}

int AddMoreNumberOrNot(int Arr[100], int& arrLength)
{
	bool ContinueOrNot;

	do
	{
		FillArrayWithNumber(Arr, arrLength);
		ContinueOrNot=ReadPositiveNumber("Do you want to add more numbers ? [0]No , [1]Yes ?");
		cout << endl;
		arrLength++;

	} while (ContinueOrNot==true);

	return arrLength;
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

	int Arr[100], arrLength=0;

	AddMoreNumberOrNot(Arr, arrLength);

	cout << "Array Length : " << arrLength;

	cout << "\nArray Element : ";
	PrintArray(Arr, arrLength);


	return 0;
}

============================================================================

//Prof : 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadNumber()
{
	int Number = 0;

	cout << "\nPlease enter a Number : ";
	cin >> Number;

	return Number;
}

void AddArryElement(int Number, int Arr[100], int& arrLength)
{
	Arr[arrLength] = Number;
	arrLength++;
}

void InputUserNumberInArray(int Arr[100], int& arrLength)
{
	bool AddMore = true;

	do
	{
		AddArryElement(ReadNumber(),Arr, arrLength);
		cout << "Do you want to add more numbers ? [0]No , [1]Yes ?";
		cin >> AddMore;
		

	} while (AddMore);

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

	int Arr[100], arrLength=0;

	InputUserNumberInArray(Arr, arrLength);

	cout << "\nArray Length : " << arrLength;

	cout << "\nArray Element : ";
	PrintArray(Arr, arrLength);


	return 0;
}
