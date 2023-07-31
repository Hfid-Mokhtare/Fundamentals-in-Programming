//Me : 

// I didn't solve this problem ?
// But i spend a lot of time on it trying to solve it !
// But i get no Result

===============================================================================

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

void PrintDigits(int Number)
{
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
	}

}

int main()
{
	PrintDigits(ReadPositiveNumber("Please Enter a Positive Number : "));

	
	return 0;
}
