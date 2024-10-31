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

void PrintInvertedletterPattern(int Number)
{
	cout << "\n";

	for (int i = 64 + Number; i >= 65; i--)
	{
		for (int j = i-64; j >= 1; j--)
		{
			cout << char(i);
		}
		cout << "\n";
	}

}

int main()
{
	PrintInvertedletterPattern(ReadPositiveNumber("Please Enter a Positive Number : "));



	return 0;
}

=================================================================================================

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

void PrintInvertedletterPattern(int Number)
{
	cout << "\n";

	for (int i = 65 + Number-1; i >= 65; i--)
	{
		for (int j = 1; j <= Number-(65+Number-1-i); j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}

}

int main()
{
	PrintInvertedletterPattern(ReadPositiveNumber("Please Enter a Positive Number : "));



	return 0;
}
