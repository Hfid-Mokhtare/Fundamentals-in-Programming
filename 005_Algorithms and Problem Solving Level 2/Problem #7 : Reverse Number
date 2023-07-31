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

void PrintDigits(int Number)
{
	int Remainder = 0;
	string stNumber = "";
	int ReversNumber = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		//cout << Remainder ;
		stNumber +=to_string(Remainder);
	}
    ReversNumber = stoi(stNumber);
	cout << ReversNumber;
}

int main()
{
	PrintDigits(ReadPositiveNumber("Please Enter a Positive Number : "));


	return 0;
}

=======================================================================================

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

int ReverseNumber(int Number)
{
	int Remainder = 0,Number2=0;
	
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

int main()
{
	cout << "\nReverse is : \n"
		<< ReverseNumber(ReadPositiveNumber("Please Enter a Positive Number : "))
		<< "\n";


	return 0;
}
