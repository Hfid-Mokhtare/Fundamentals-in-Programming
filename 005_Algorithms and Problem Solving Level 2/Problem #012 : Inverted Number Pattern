//Me : 
#include <iostream>
#include <string>

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


int main()
{
	int Number = ReadPositiveNumber("Please Enter a Positive Number : ");

	for (int i=Number;i>=1;i--)
	{
		for (int j=i;j>=1;j--)
		{
			cout << i;
		}
		cout << endl;
	}
	

	return 0;
}

===========================================================================

//Prof : 
#include <iostream>
#include <string>

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

void PrintInvertedNumberPattern(int Number)
{
	cout << "\n";

	for (int i = Number; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}

}

int main()
{
	PrintInvertedNumberPattern(ReadPositiveNumber("Please Enter a Positive Number : "));

	

	return 0;
}
