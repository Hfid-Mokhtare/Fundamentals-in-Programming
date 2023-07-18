//Exemple using while loop : 
#include <iostream>

using namespace std;

int Read_Number_In_Range_Using_While(int From, int To)
{
	int Num;

	cout << "Enter Number from " << From << " to " << To << " :";
	cin >> Num;

	while (Num<From || Num > To)
	{
		cout << "Wrongue Number ! Please Enter Number from " << From << " to " << To << " :";
		cin >> Num;
	}
	return Num;
}

int main()
{
	cout << "the Number that you enter is : " << Read_Number_In_Range_Using_While(1, 10);
	return 0;
}

===============================================================================================

//The Same Exemple using Do while loop : 
#include <iostream>

using namespace std;

int Read_Number_In_Range_Using_Do_While(int From, int To)
{
	int Num;

	do
	{
		cout << "Enter Number from " << From << " to " << To << " :";
		cin >> Num;

	}while (Num<From || Num > To);

	return Num;
}

int main()
{
	cout << "the Number that you enter is : " << Read_Number_In_Range_Using_Do_While(1, 10);\

	return 0;
}
