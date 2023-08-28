//Me: 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
		Arr[i] = GetRandomNumber(1, 100);

}

void PrintArray(int Arr[100], int arrLength)
{
	cout << "Array 1 Element : \n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";

	}
	cout << endl;
}

int chercheForNumberPositionInArr(int Arr[100], int arrLength,int Num)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (Arr[i] == Num)
			return i;
	}
	return -1;
}

int chercheForNumberOrderInArr(int Arr[100], int arrLength, int Num)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (Arr[i] == Num)
			return i+1;
	}
	return -1;
}

void chercheForNumberInArr(int Arr[100], int arrLength, int Num)
{
	int Position = chercheForNumberPositionInArr(Arr, arrLength, Num);
	int Order = chercheForNumberOrderInArr(Arr, arrLength, Num);

	cout << "The Number you looking for is : ";
	cout << Num << endl;

	if (Position != -1)
	{
		cout << "The Number Founded at Position : ";
		cout << Position << endl;
		cout << "The Number Founded in Order : ";
		cout << Order << endl;
	}
	else
	{
		cout << "The Number is Not found :-( \n";
	}
	
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100];
	int arrLength = ReadPositiveNumber("\nPlease Enter the Number of Element : \n");

	FillArrayWithRandomNumbers(Arr, arrLength);

	PrintArray(Arr, arrLength);

	chercheForNumberInArr(Arr, arrLength, ReadPositiveNumber("\nPlease Enter A Number to cherche for : \n"));

	return 0;
}

=================================================================================

//Prof : 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;



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

short FindNumberPositionInArray(int Arr[100], int arrLength, int Num)
{
	/*This function will search for a number in array and return its index,
	or return -1 if it does not exists*/
	for (int i = 0; i < arrLength; i++)
	{
		if (Arr[i] == Num)
			return i;//this will bread the function and return the index
	}
	//if you reached here, this means the number is not found
	return -1;
}

int ReadNumber()
{
	int Number = 0;

	cout << "\nPlease Enter the Number you search for : \n";
	cin >> Number;

	return Number;
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

	short NumberPosition = FindNumberPositionInArray(Arr, arrLength, Number);
	if (NumberPosition == -1)
	{
		cout << "The Number is Not found :-( \n";
	}
	else
	{
		cout << "The Number Founded at Position : " << NumberPosition << endl;
		cout << "The Number Founded in Order : " << NumberPosition + 1 << endl;
	}

	return 0;
}
