//Problem #11 : Average Pass Fail
#include <iostream>
#include <string>

using namespace std;

enum enPass_or_Fail { Fail = 0, Pass = 1 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "please enter the first Mark : "; cin >> Mark1;
	cout << "please enter the second Mark : "; cin >> Mark2;
	cout << "please enter the third Mark : "; cin >> Mark3;
}


int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{

	return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintAverage(int Mark1, int Mark2, int Mark3)
{
	cout<<"The Average is : "<<CalculateAverage(Mark1, Mark2, Mark3);
}

enPass_or_Fail Check_Average(int Mark1, int Mark2, int Mark3)
{
	if (CalculateAverage(Mark1, Mark2, Mark3) >= 50)
		return enPass_or_Fail::Pass;
	else
		return enPass_or_Fail::Fail;

}

void PrintPassOrFail(int Mark1, int Mark2, int Mark3)
{
	if (Check_Average(Mark1, Mark2, Mark3) == enPass_or_Fail::Pass)
		cout << "\nYou Passed";
	else
		cout << "\nYou Failed";
}

void PrintResult(int Mark1, int Mark2, int Mark3)
{
	PrintAverage(Mark1, Mark2, Mark3);
	PrintPassOrFail(Mark1, Mark2, Mark3);
}

int main()
{
	int Mark1, Mark2, Mark3;

	ReadMarks(Mark1, Mark2, Mark3);
	PrintResult(Mark1, Mark2, Mark3);

	return 0;
}

==============================================================================

//Problem #12 : Max of 2 Numbers
#include <iostream>
#include <string>

using namespace std;


void ReadNum(int &Num1,int &Num2)
{

	cout << "enter the number1 : ";cin >> Num1;
	cout << "enter the number2 : "; cin >> Num2;
	
}

int Found_Max_Number(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void Print_Max_Num(int MaxNum)
{
	cout << " Max Number is : " << MaxNum;
}


int main()
{
	int Num1, Num2;

	ReadNum(Num1, Num2);
	Print_Max_Num(Found_Max_Number(Num1, Num2));

	return 0;
}

==============================================================================

//Problem #13 : Max of 3 Numbers
#include <iostream>
#include <string>

using namespace std;


void ReadNum(int &Num1,int &Num2,int &Num3)
{

	cout << "enter the number1 : ";cin >> Num1;
	cout << "enter the number2 : "; cin >> Num2;
	cout << "enter the number3 : "; cin >> Num3;
}

int Found_Max_Number(int Num1, int Num2,int Num3)
{
	if (Num1 > Num2)

		if (Num1 > Num3)

			return Num1;
		else
			return Num3;
	
	else if (Num2 > Num3)
	
		return Num2;
	
	else
		return Num3;
}

void Print_Max_Num(int MaxNum)
{
	cout << "\n The Max Number is : " << MaxNum;
}


int main()
{
	int Num1, Num2, Num3;

	ReadNum(Num1, Num2, Num3);
	Print_Max_Num(Found_Max_Number(Num1, Num2, Num3));

	return 0;
}

==============================================================================

//Problem #14 : Swap Numbers
#include <iostream>
#include <string>

using namespace std;


void ReadNum(int &Num1,int &Num2)
{
	cout << "enter the number1 : ";cin >> Num1;
	cout << "enter the number2 : "; cin >> Num2;
}


void Prin_Number_Befor_Swaping(int Num1, int Num2)
{
	cout << endl << Num1 << endl;
	cout << Num2 << endl;
}

void Swap_Numbers(int &Num1, int &Num2)
{
	int Temp = 0;

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void Prin_Number_After_Swaping(int Num1, int Num2)
{
	Swap_Numbers(Num1, Num2);
	cout << endl << Num1 << endl;
	cout << Num2 << endl;
}

void Print_Result(int Num1, int Num2)
{
	Prin_Number_Befor_Swaping(Num1, Num2);
	Prin_Number_After_Swaping(Num1, Num2);
}


int main()
{
	int Num1, Num2;

	ReadNum(Num1, Num2);
	Print_Result(Num1, Num2);

	return 0;
}

==============================================================================

//Problem #15 : Rectagle Area
#include <iostream>

using namespace std;

void Read_Numbers(float& Length, float& Width)
{
	cout << "please enter the length : "; cin >> Length;
	cout << "please enter the width : "; cin >> Width;
}

float Calcule_Rectangle_Area(float Length, float Width)
{

	return Length * Width;

}

void Print_Rectangle_Area(float RectangleArea)
{
	cout << "\nthe Rectangle Area is : " << RectangleArea;
}




int main()
{
	float Length, Width;
	
	Read_Numbers(Length, Width);
	Print_Rectangle_Area(Calcule_Rectangle_Area(Length, Width));

	return 0;
}

