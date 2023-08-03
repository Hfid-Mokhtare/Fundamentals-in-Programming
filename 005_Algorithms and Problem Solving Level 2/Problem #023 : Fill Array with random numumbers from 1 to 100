//Me : 
#include <iostream>
#include <string>

using namespace std;

int PrintRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void ReadArray(int Arr[100],int & arrLength)
{
	cout << "\nPlease Enter the Number Of Element : \n";
	cin >> arrLength;
	
	for (int i = 0; i <= arrLength-1; i++)
	{
		 Arr[i]= PrintRandomNumber(1,100);
	}
	cout << endl;
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

	srand((unsigned)time(NULL));

	int Arr[100], arrLength;

	ReadArray(Arr, arrLength);

	cout << "\nArray Elements : ";
	PrintArray(Arr, arrLength);

	return 0;
}

==================================================================

//Prof : 
#include <iostream>
#include <string>

using namespace std;

int PrintRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int Arr[100],int & arrLength)
{
	cout << "\nPlease Enter the Number of Element : \n";
	cin >> arrLength;
	
	for (int i = 0; i < arrLength; i++)
		Arr[i] = PrintRandomNumber(1, 100);

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

	srand((unsigned)time(NULL));

	int Arr[100], arrLength;

	FillArrayWithRandomNumbers(Arr, arrLength);

	cout << "\nArray Elements : ";
	PrintArray(Arr, arrLength);

	return 0;
}
