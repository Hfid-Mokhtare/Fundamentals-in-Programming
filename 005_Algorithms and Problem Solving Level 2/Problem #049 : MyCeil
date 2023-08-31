//Me : I soleve the Problem but it stele a small Problem in my solution is when you enter a integer Number.
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

int MyCeil(float Number)
{
	if (Number > 0)
		return int(Number) + 1;
	else
		return int(Number);

}

int main()
{
	float Number = ReadNumber("Please enter a Number : ");

	cout << "\nMy Ceil Result : " << MyCeil(Number) << endl;
	cout << "\nC++ Ceil Result : " << ceil(Number) << endl;

	return 0;
}

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

int MyCeil(float Number)
{

	if (abs(GetFractionPart(Number))>0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	return Number;
		

}

int main()
{
	float Number = ReadNumber("Please enter a Number : ");

	cout << "\nMy Ceil Result : " << MyCeil(Number) << endl;
	cout << "\nC++ Ceil Result : " << ceil(Number) << endl;

	return 0;
}
