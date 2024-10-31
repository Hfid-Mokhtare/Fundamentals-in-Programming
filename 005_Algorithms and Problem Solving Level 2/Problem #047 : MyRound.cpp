//Me : 
#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

int GetTheNumberAfter(float Number)
{
	int i = 0;

	if (Number < 0)
	{
		while (i >= Number)
		{
			i--;
		}
		return i;
	}
	while (i <= Number)
	{
		i++;
	}
	return i;
	
}

int MyRound(float Number)
{
	float NumberAfter = GetTheNumberAfter(Number);


	if (NumberAfter < 0)
	{
		if (NumberAfter - Number >= -0.5)
		{
			return NumberAfter;
		}
		return NumberAfter + 1;

	}

	if (NumberAfter - Number <= 0.5)
	{
		return NumberAfter;
	}
	return NumberAfter - 1;
}

int main()
{
	float Number = ReadNumber("Please enter a Number : ");

	cout << "\nMy Round Result : " << MyRound(Number) << endl;
	cout << "\nC++ Round Result : " << round(Number) << endl;


	return 0;
}

=========================================================================

//Prof : 
#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

int MyRound(float Number)
{
	int IntPart  = int(Number);
	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >=.5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
	else
	{
		return IntPart;
	}
}

int main()
{
	float Number = ReadNumber("Please enter a Number : ");

	cout << "\nMy Round Result : " << MyRound(Number) << endl;
	cout << "\nC++ Round Result : " << round(Number) << endl;

	return 0;
}

