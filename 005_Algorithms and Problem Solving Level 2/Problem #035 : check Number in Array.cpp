//Me: 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadNumber()
{
	int Number = 0;

	cout << "\nPlease Enter the Number you search for : \n";
	cin >> Number;

	return Number;
}

int GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& arrLength)
{
	cout << "Please Enter the Number of Element : \n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		Arr[i] = GetRandomNumber(1, 100);

}

void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
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

bool IsTheNumberExist(int Arr[100], int arrLength, int Number)
{
	short NumberPosition = FindNumberPositionInArray(Arr, arrLength, Number);
	if (NumberPosition != -1)
	{
		return true;
	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], arrLength;
	FillArrayWithRandomNumbers(Arr, arrLength);

	cout << "Array 1 Element : \n";
	PrintArray(Arr, arrLength);

	int Number = ReadNumber();
	cout << "The Number you looking for is : "<< Number <<endl;

	if (IsTheNumberExist(Arr, arrLength, Number)==true)
	{
		cout << "Yes, The Number is found :-) \n";
	}
	else
	{
		cout << "No, The Number is Not found :-( \n";
	}

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

	cout << "\nPlease Enter the Number you search for : \n";
	cin >> Number;

	return Number;
}

int GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& arrLength)
{
	cout << "Please Enter the Number of Element : \n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		Arr[i] = GetRandomNumber(1, 100);

}

void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
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

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], arrLength;
	FillArrayWithRandomNumbers(Arr, arrLength);

	cout << "Array 1 Element : \n";
	PrintArray(Arr, arrLength);

	int Number = ReadNumber();
	cout << "The Number you looking for is : "<< Number <<endl;

	if (!IsTheNumberInArray(Arr, arrLength, Number))
	{
		cout << "No, The Number is Not found :-( \n";
	}
	else
	{
		cout << "Yes, The Number is found :-) \n";
	}

	return 0;
}
