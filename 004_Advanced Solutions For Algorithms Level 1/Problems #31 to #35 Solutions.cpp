// Problem #31 : Power of 2,3,4
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int  ReadNum()
{

	float Num;
	cout << "please enter a number : "; cin >> Num;
	return Num;
}
void PowerOf2_3_4(int Num)
{
	int a, b, c;
	a = Num * Num;
	b = Num * Num * Num;
	c = Num * Num * Num * Num;
	cout << a << " " << b << " " << c << endl;
}

int main()
{

	PowerOf2_3_4(ReadNum());

	return 0;
}

====================================================================

// Problem #32 : Power of M
#include <iostream>
#include <string>

using namespace std;

int ReadNum()
{
	int Num;
	cout << "enter the number : "; 
	cin >> Num;
	return Num;
}

int ReadPower()
{
	int Num;
	cout << "enter the Power : ";
	cin >> Num;
	return Num;
}


int PowerOfM(int M, int Num)
{
	if (M == 0)
	{
		//Any number powered to zero gives 1
		return 1;
	}
	
	int P = 1;
	for (int i = 1; i <= M; i++)
	{
		P *= Num;
	}
	return P;
	
}
int main()
{
	cout << "Result = " << PowerOfM(ReadPower(), ReadNum());

	return 0;
}

====================================================================

// Problem #33 : Grade A,B,C,D,E,F
#include <iostream>
#include <string>


using namespace std;


short ReadNumberInRange(int From,int To)
{
	short Grade;
	do
	{
	cout << " Please enter your Grade From "<<0<<" To "<<100 <<" : "; 
	cin >> Grade;

	} while (Grade<From || Grade>To);

	return Grade;
}


char GetGradeLetter(short Grade)
{


	if (Grade >= 90)
	
		return 'A';
	
	else if (Grade >= 80)
	
		return 'B';
	
	else if (Grade >= 70)

		return 'C';
	
	else if (Grade >= 60)
	
		return 'D';
	
	else if (Grade >= 50)
	
		return 'F';
	
	else
	
		return 'G';
	
}

int main()
{

	cout <<endl<<"Result = "<< GetGradeLetter(ReadNumberInRange(0, 100));

	return 0;
}

====================================================================

// Problem #34 : Commission Percentage
#include <iostream>
#include <string>


using namespace std;


float ReadTotalSale()
{
	float TotalSale;
	do
	{
		cout << " Please enter The Total Sales  : ";  
		cin >> TotalSale;

	} while (TotalSale<0);

	return TotalSale;
}

float GetCommissionPercentage(float TotalSale)
{
	if (TotalSale >= 1000000)
		return 0.01;
	else if (TotalSale >= 500000)
		return 0.02;
	else if (TotalSale >= 100000)
		return 0.03;
	else if (TotalSale >= 50000)
		return 0.05;
	else
		return 0.00;
	
}

float CalculateTotalCommission(float TotalSale)
{
	return GetCommissionPercentage(TotalSale) * TotalSale;
}

int main()
{

	float TotalSale =ReadTotalSale();
	cout << endl << "Commission Percentage = " << GetCommissionPercentage(TotalSale);
	cout << endl << "Total Commission = " << CalculateTotalCommission(TotalSale);

	return 0;
}

====================================================================

// Problem #35 : Piggy Bank Calculator
#include <iostream>
#include <string>

using namespace std; 

struct stPiggyBankContent
{
    float Penny, Nickel, Dime, Quarter, Dollar;
};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent PiggyBankContent;

	cout << "please enter the number of Penny : "; cin >> PiggyBankContent.Penny;
	cout << "please enter the number of Nickel : "; cin >> PiggyBankContent.Nickel;
	cout << "please enter the number of Dime : "; cin >> PiggyBankContent.Dime;
	cout << "please enter the number of Quarter : "; cin >> PiggyBankContent.Quarter;
	cout << "please enter the number of Dollar : "; cin >> PiggyBankContent.Dollar;

	return PiggyBankContent;
}

float CalculateTotalPinnies(stPiggyBankContent PiggyBankContent)
{
	float TotalPinnies=0;
	TotalPinnies = PiggyBankContent.Penny + (PiggyBankContent.Nickel * 5) + (PiggyBankContent.Dime * 10) + (PiggyBankContent.Quarter * 25) + (PiggyBankContent.Dollar * 100);
	return TotalPinnies;
}

float CalculateTotalDollars(float TotalPinnies)
{
	float TotalDollars=0;
	TotalDollars = TotalPinnies / 100;
	return TotalDollars;
}

void PrintResult(stPiggyBankContent PiggyBankContent)
{
	float TotalPinnies = CalculateTotalPinnies(PiggyBankContent);
	cout << TotalPinnies << " pennies" << endl;
	cout << CalculateTotalDollars(TotalPinnies) << " Dollars" << endl;
}

int main()
{
	
	PrintResult(ReadPiggyBankContent());

	

	return 0;
}
