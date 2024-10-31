//Me : 
#include <iostream>
#include <string>

using namespace std;


long long ReadPositiveNumber(string Message)
{
	long long Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

long long ReverseNumber(long long Number)
{
	long long Remainder = 0, Number2 = 0;
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
	long long Number = ReadPositiveNumber("Please Enter a Positive Number : ");
	
	if (ReverseNumber(Number) == Number)
		cout << " Yes ,it is a Palindrome Number .";
	else
		cout << " No ,it is NOT a Palindrome Number .";

	return 0;
}

======================================================================================

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
	int Remainder = 0, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
	
}

bool IsPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}



int main()
{
	
	if (IsPalindromeNumber(ReadPositiveNumber("Please Enter a Positive Number : ")) )
		
		cout << "\nYes ,it is a Palindrome Number .\n";
	else
	
		cout << "\nNo ,it is NOT a Palindrome Number .\n";
	

	return 0;
}
