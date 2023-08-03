//Me and Prof : 
#include <iostream>
#include <string>

using namespace std;


int PrintRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& arrLength)
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

int SumArray(int Arr[100], int arrLength)
{
	int Sum = 0;

	for (int i = 0; i < arrLength; i++)
	{
		
		Sum += Arr[i];
		
	}
	return Sum;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100], arrLength;

	FillArrayWithRandomNumbers(Arr, arrLength);

	cout << "\nArray Elements : ";
	PrintArray(Arr, arrLength);

	cout << "\nSum of all Numbers is : ";
	cout << SumArray(Arr, arrLength) << endl;

	return 0;
}
