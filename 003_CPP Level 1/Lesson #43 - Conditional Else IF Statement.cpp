//Problem #33 :
#include <iostream>
#include <string>


using namespace std;


short ReadGrade()
{
	short Grade;
	cout << " Please enter your Grade  : "; cin >> Grade;
	return Grade;
}


void CheckGrade(short Grade)
{
	
	
	if (Grade >= 90)
	{
		cout << " A " << endl;
	}
	else if(Grade >= 80)
	{
		cout << " B " << endl;
	}
	else if (Grade >= 70)
	{
		cout << " C " << endl;
	}
	else if (Grade >= 60)
	{
		cout << " D " << endl;
	}
	else if (Grade >= 50)
	{
		cout << " E " << endl;
	}
	else
	{
		cout << " F " << endl;
	}
}

int main()
{

	CheckGrade(ReadGrade());
	
	return 0;
}

=============================================================================

//Problem #34 :
#include <iostream>
#include <string>


using namespace std;


float ReadTotalSale()
{
	float TotalSale;
	cout << " Please enter The Total Sales  : "; cin >> TotalSale;
	return TotalSale;
}


float CheckTotalSale (float TotalSale)
{
	
	
	if (TotalSale >= 1000000)
	{
		return TotalSale*0.01;
	}
	else if(TotalSale >= 500000)
	{
		return TotalSale*0.02;
	}
	else if (TotalSale >= 100000)
	{
		return TotalSale*0.03;
	}
	else if (TotalSale >= 50000)
	{
		return TotalSale*0.05;
	}
	else
	{
		return TotalSale;
	}
}



int main()
{

	cout << CheckTotalSale(ReadTotalSale());
	
	return 0;
}

=============================================================================

//Problem #36 :
#include <iostream>
#include <string>


using namespace std;


void ReadNum(float &Num1, float&Num2, string &OperationType)
{
	
	cout << " Please enter Number1 : "; cin >> Num1;
	cout << " Please enter Number2 : "; cin >> Num2;
	cout << " Please enter the Operation Type : "; cin >> OperationType;

	
}


float CheckOperationType (float Num1, float Num2, string OperationType)
{
	
	if (OperationType == "+")
	{
		return Num1 + Num2;
	}
	else if(OperationType == "-")
	{
		return Num1 - Num2;
	}
	else if (OperationType == "*")
	{
		return Num1 * Num2;
	}
	else if (OperationType == "/" )
	{
		return Num1 / Num2;
	}
	else
	{
		cout << " wrongue Operation Type !\n";
	}
}

void PrintResult(float Result)
{
	cout << Result;
}


int main()
{
	float Num1, Num2;
	string OperationType;

	ReadNum(Num1, Num2, OperationType);
	;
	PrintResult(CheckOperationType(Num1, Num2, OperationType));
	
	return 0;
}

=============================================================================

//Problem #44 :
#include <iostream>
#include <string>


using namespace std;

enum Days {monday = 1,tusday=2,wedensday=3,thursday=4,friday=5,saturday=6, sunday=7};

short ReadNumOFDays()
{
	short NumOFDays;

	cout << " enter Number OF Day : "; cin >> NumOFDays;
	
	return NumOFDays; 
	
}

void CheckNumOFDays(short NumOFDays)
{
	
	if (NumOFDays == monday)
	{
		cout << "monday";
	}
	else if(NumOFDays == tusday)
	{
		cout << "tusday";
	}
	else if (NumOFDays == wedensday)
	{
		cout << "wedensday";
	}
	else if (NumOFDays == thursday)
	{
		cout << "thursday";
	}
	else if (NumOFDays == friday)
	{
		cout << "friday";
	}
	else if (NumOFDays == saturday)
	{
		cout << "saturday";
	}
	else if (NumOFDays == sunday)
	{
		cout << "sunday";
	}
	else
	{
		cout << " wrongue Inpute !\n";
	}
}

int main()
{
	
	CheckNumOFDays(ReadNumOFDays());
	
	return 0;
}

=============================================================================

//Problem #45 :
#include <iostream>
#include <string>


using namespace std;

enum enMonth { janury = 1, fibrery = 2, march = 3, aprile = 4, may = 5, june = 6, july = 7, august = 8, septenber = 9, october = 10, november = 11, december = 12};

short ReadNumOFMonth()
{
	short NumOFMonth;

	cout << " enter Number OF Day : "; cin >> NumOFMonth;
	
	return NumOFMonth;
	
}

void CheckNumOFMonth(short NumOFMonth)
{
	
	if (NumOFMonth == janury)
	{
		cout << "janury";
	}
	else if(NumOFMonth == fibrery)
	{
		cout << "fibrery";
	}
	else if (NumOFMonth == march)
	{
		cout << "march";
	}
	else if (NumOFMonth == aprile)
	{
		cout << "aprile";
	}
	else if (NumOFMonth == may)
	{
		cout << "may";
	}
	else if (NumOFMonth == june)
	{
		cout << "june";
	}
	else if (NumOFMonth == july)
	{
		cout << "july";
	}
	else if (NumOFMonth == august)
	{
		cout << "august";
	}
	else if (NumOFMonth == septenber)
	{
		cout << "septenber";
	}
	else if (NumOFMonth == october)
	{
		cout << "october";
	}
	else if (NumOFMonth == november)
	{
		cout << "november";
	}
	else if (NumOFMonth == december)
	{
		cout << "december";
	}
	else
	{
		cout << " wrongue Inpute !\n";
	}
}

int main()
{
	
	CheckNumOFMonth(ReadNumOFMonth());
	
	return 0;
}
