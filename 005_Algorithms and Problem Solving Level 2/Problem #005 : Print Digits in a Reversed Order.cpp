//Me : 

// I didn't solve this problem ?
// But i spend a lot of time on it trying to solve it !
// But i get no Result

// after one year i comeback to this problem and i solve it 
// and the moste importent is that i add an other methode to solve this problem using string 
=============================================================================================

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

// ---- Methode using string
void Separate_Number_Using_string(int Num)
{
	string S_Num = to_string(Num);

	cout << "using String Methode : \n";
	
	for (int i = (S_Num.length()) - 1;i >= 0;i--)
	{
		cout << S_Num[i] << endl;
	}

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
	Separate_Number_Using_string(ReadPositiveNumber("Please enter a positive Number : "));
	
	return 0;
}
