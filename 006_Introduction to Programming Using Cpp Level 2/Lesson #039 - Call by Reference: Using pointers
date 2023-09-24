#include <iostream>

using namespace std;

void ReadNum(int* Num1, int* Num2)
{
	cout << "enter the number1 : "; cin >> *Num1;
	cout << "enter the number2 : "; cin >> *Num2;
}


void Prin_Number_Befor_Swaping(int* Num1, int* Num2)
{
	cout << endl << *Num1 << endl;
	cout << *Num2 << endl;
}

void Swap_Numbers(int* Num1, int* Num2)
{
	int Temp = 0;

	Temp = *Num1;
	*Num1 = *Num2;
	*Num2 = Temp;
}

void Prin_Number_After_Swaping(int* Num1, int* Num2)
{
	Swap_Numbers(Num1, Num2);
	cout << endl << *Num1 << endl;
	cout << *Num2 << endl;
}

void Print_Result(int *Num1, int *Num2)
{
	Prin_Number_Befor_Swaping(Num1, Num2);
	Prin_Number_After_Swaping(Num1, Num2);
}


int main()
{
	int Num1, Num2;

	ReadNum(&Num1, &Num2);
	Print_Result(&Num1, &Num2);

	return 0;
}
