//Me :
#include <iostream>
#include <string>

using namespace std;

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

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

enPrimeOrNot CheckPrimeOrNot(int Num)
{

	int M = round(Num / 2);

	for (int counter = 2; counter <= M; counter++)
	{

		if (Num % counter == 0)
			return enPrimeOrNot::NotPrime;

	}

	return enPrimeOrNot::Prime;
}

void PrintPrimeNumberFrom1toN(int N)
{
	for (int i = 1; i <= N; i++)
	{
		switch (CheckPrimeOrNot(i))
		{

		case enPrimeOrNot::NotPrime:
			continue;
		case enPrimeOrNot::Prime:
			cout << i << endl;
			continue;
		}

	}

}

int main()
{

	PrintPrimeNumberFrom1toN(ReadPositiveNumber("Please enter a Positive Number"));

	return 0;
}

============================================================================================

//Prof :
#include <iostream>
#include <string>

using namespace std;

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

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

enPrimeOrNot CheckPrimeOrNot(int Num)
{

	int M = round(Num / 2);

	for (int counter = 2; counter <= M; counter++)
	{

		if (Num % counter == 0)
			return enPrimeOrNot::NotPrime;

	}

	return enPrimeOrNot::Prime;
}

void PrintPrimeNumberFrom1toN(int N)
{
	cout << "\nPrime Numbers From 1 to " << N << " are :\n";
	for (int i = 1; i <= N; i++)
	{
		
		switch (CheckPrimeOrNot(i))
		{
	
		case enPrimeOrNot::Prime:
			cout << i << endl;
			
		}
		
	}

}

int main()
{

	PrintPrimeNumberFrom1toN(ReadPositiveNumber("Please enter a Positive Number"));

	return 0;
}
