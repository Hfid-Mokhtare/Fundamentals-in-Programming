//Problem #36 : Simple Calculator
#include <iostream>
#include <string>


using namespace std;

enum enOperationType { Add = '+', Subtract = '-', 
	                   Multiply = '*', Divide = '/' };

int ReadNum(string Message)
{
	float Number=0;
	cout << Message<<endl;
	cin >> Number;

	return Number;
}

enOperationType Read_OperationType()
{
	char OpType;
	cout << "Please enter Operation Type ( + , - , * , /) : ";
	cin >> OpType;
	return (enOperationType)OpType;
}

float Calculate(float Num1, float Num2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return Num1 + Num2;
	
	case enOperationType::Subtract:
		return Num1 - Num2;
		
	case enOperationType::Multiply:
		return Num1 * Num2;
	case enOperationType::Divide:
		return Num1 / Num2;
	default:
		cout << "wrongue Operation Type \n";
	}
}

void PrintResult(float Result)
{
	system("color 3F");
	cout << Result;
}


int main()
{
	float Num1 = ReadNum("Please enter the first Number : ");
	float Num2 = ReadNum("Please enter the second Number : ");
	enOperationType OpType = Read_OperationType();


	cout << Calculate(Num1, Num2, OpType);

	return 0;
}

===========================================================================

//Problem #37 : Sum Until -99
#include <iostream>
#include <string>

using namespace std;

int ReadNum(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

float SumNumbers()
{
	int Num = 0;
	int Sum = 0;
	int Counter = 1;

	do
	{
		Num = ReadNum("Please enter Number" + to_string(Counter) + " :");

		if (Num == -99)
		{
			break;
		}

		Sum += Num;
		Counter++;
	} while (Num != -99);

	return Sum;
}

int main()
{

	cout <<"\nThe Result = "<< SumNumbers()<<endl;

	return 0;
}

===========================================================================

//Problem #38 : Is Prime Number
#include <iostream>
#include <string>

using namespace std;

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

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

enPrimeOrNot CheckPrimeOrNot(int Num)
{
	
	int M = round(Num / 2);
	
	for (int counter = 2; counter <= M; counter++)
	    {
	    
	    	if (Num % counter == 0)
	    		return enPrimeOrNot::NotPrime;
	   
	    }

	    		return enPrimeOrNot::Prime;
}

void PrintNumberType(int Num)
{
	switch (CheckPrimeOrNot(Num))
	{
	case enPrimeOrNot::NotPrime:
		cout << "\nThe Number is Not Prime" << endl;
		break;
	case enPrimeOrNot::Prime:
		cout << "\nThe Number is Prime" << endl;
		break;
	}
	
}

int main()
{
	 
	PrintNumberType(ReadPositiveNumber("Please enter a Positive Number"));
	
	return 0;
}

===========================================================================

//Problem #39 : Pay remainder
#include <iostream> 
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

float CalculeTheRemainder(float TotalBill, float TotalCashPaid)
{
	return TotalCashPaid - TotalBill;
}

float PrintResult(float Remainder)
{
	return Remainder;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please Enter The Total Bill");
	float TotalCashPaid = ReadPositiveNumber("Please Enter The Total Cash Paid");

	cout << "\nTotal Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;

	cout << "********************************\n";
	cout << "\n Remainder = " << PrintResult(CalculeTheRemainder(TotalBill, TotalCashPaid));

	return 0;
}

===========================================================================

//Problem #40 : Service Fee and Sales Tax
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

float Calcule_TheTotalBill_After_Service_Fee_and_Sales_Tax( float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;
	return TotalBill;
}

float PrintResult(float TotalBill)
{
	return TotalBill;
}

int main()
{
	float  TotalBill = ReadPositiveNumber("Please Enter Total Bill : ");

	cout << "\nTotal Bill = " << TotalBill ;
	cout << "\nTotal Bill after Service Fee and Sales Tax = " << 
		PrintResult(Calcule_TheTotalBill_After_Service_Fee_and_Sales_Tax(TotalBill))<<endl;

	return 0;
}
