// Problem #26 : Print Numbers from 1 to N
#include <iostream>
#include <string>

using namespace std;

int ReadNum()
{
	int Num = 0;
	cout << "Enter the number : "; cin >> Num;
	return Num;
}

void PrintRangeFrom1toN_UsingFor(int Num)
{
	cout << "Range printed using For Statement : \n";
	for (int Counter = 1; Counter <= Num; Counter++)
	{
		cout << Counter << endl;
	}
}

void PrintRangeFrom1toN_UsingWhile(int Num)
{
	int Counter = 0;
	cout << "Range printed using While Statement : \n";
	while (Counter <= Num)
	{
		Counter++;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1toN_UsingDoWhile(int Num)
{
	cout << "Range printed using Do While Statement : \n";
	int Counter = 0;
	do
	{
		Counter++;
		cout << Counter << endl;
	}while (Counter <= Num);
}


int main()
{
	int Num = ReadNum();

	PrintRangeFrom1toN_UsingFor(Num);
	PrintRangeFrom1toN_UsingWhile(Num);
	PrintRangeFrom1toN_UsingDoWhile(Num);

	return 0;
}

==================================================================

// Problem #27 : Print Numbers from N to 1
#include <iostream>
#include <string>

using namespace std;

int ReadNum()
{
	int Num = 0;
	cout << "Enter the number : "; cin >> Num;
	return Num;
}

void PrintRangeFromNto1_UsingFor(int Num)
{
	cout << "Range printed using For Statement : \n";
	for (int Counter = Num; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

void PrintRangeFromNto1_UsingWhile(int Num)
{
	int Counter = Num+1;
	cout << "Range printed using While Statement : \n";
	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}

void PrintRangeFromNto1_UsingDoWhile(int Num)
{
	cout << "Range printed using Do While Statement : \n";
	int Counter = Num+1;
	do
	{
		Counter--;
		cout << Counter << endl;

	}while (Counter > 1);
}


int main()
{
	int Num = ReadNum();

	PrintRangeFromNto1_UsingFor(Num);
	PrintRangeFromNto1_UsingWhile(Num);
	PrintRangeFromNto1_UsingDoWhile(Num);

	return 0;
}

==================================================================

// Problem #28 : Print Sum Odd Numbers from 1 to N
#include <iostream>
#include <string>

using namespace std;

enum enOddOrEven { Odd=1,Even=2};

int ReadNum()
{
	int Num = 0;
	cout << "Enter the number : "; cin >> Num;
	return Num;
}

enOddOrEven CheckOddOrEven(int Num)
{
	if (Num % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumOddNumFrom1toN_UsingFor(int Num)
{
	cout << "Sum Odd Numbers using For Statement : \n";
	int Sum = 0;
	for (int Counter = 1; Counter <= Num; Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
		{
		    Sum += Counter;
		}
	}
	return Sum;
}

int SumOddNumFrom1toN_UsingWhile(int Num)
{
	int Counter = 1;
	int Sum = 0;
	cout << "Sum Odd Numbers using While Statement : \n";
	while (Counter < Num)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
		Counter++;
	}
	return Sum;
}

int SumOddNumFrom1toN_UsingDoWhile(int Num)
{
	cout << "Sum Odd Numbers using Do While Statement : \n";
	int Counter = 1;
	int Sum = 0;
	do
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
		Counter++;
		

	} while (Counter <= Num);
	return Sum;
}

void PrintResult(int Num)
{
	cout << SumOddNumFrom1toN_UsingFor(Num) << endl;
	cout << SumOddNumFrom1toN_UsingWhile(Num) << endl;
	cout << SumOddNumFrom1toN_UsingDoWhile(Num) << endl;
}


int main()
{
	int Num = ReadNum();

	PrintResult(Num);

	return 0;
}

==================================================================

// Problem #29 : Print Sum Even Numbers from 1 to N
#include <iostream>
#include <string>

using namespace std;

enum enOddOrEven { Odd=1,Even=2};

int ReadNum()
{
	int Num = 0;
	cout << "Enter the number : "; cin >> Num;
	return Num;
}

enOddOrEven CheckOddOrEven(int Num)
{
	if (Num % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumEvenNumFrom1toN_UsingFor(int Num)
{
	cout << "Sum Odd Numbers using For Statement : \n";
	int Sum = 0;
	for (int Counter = 1; Counter <= Num; Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
		    Sum += Counter;
		}
	}
	return Sum;
}

int SumEvenNumFrom1toN_UsingWhile(int Num)
{
	int Counter = 1;
	int Sum = 0;
	cout << "Sum Odd Numbers using While Statement : \n";
	while (Counter <= Num)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
		Counter++;
	}
	return Sum;
}

int SumEvenNumFrom1toN_UsingDoWhile(int Num)
{
	cout << "Sum Odd Numbers using Do While Statement : \n";
	int Counter = 1;
	int Sum = 0;
	do
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
		Counter++;
		

	} while (Counter <= Num);
	return Sum;
}

void PrintResult(int Num)
{
	cout << SumEvenNumFrom1toN_UsingFor(Num) << endl;
	cout << SumEvenNumFrom1toN_UsingWhile(Num) << endl;
	cout << SumEvenNumFrom1toN_UsingDoWhile(Num) << endl;
}


int main()
{
	int Num = ReadNum();

	PrintResult(Num);

	return 0;
}

======================================================================

// Problem #30 : Factorial of N
#include <iostream>
#include <string>

using namespace std;

int ReadNum(string Message)
{
	int Num;
	do
	{
	cout << Message;
	cin >> Num;

	} while (Num < 0);

	return Num;
}

int Factorial(int Num)
{
	int Factorial = 1;

	for (int i = Num; i >= 1; i--)
	{
		Factorial = Factorial * i;
	}
	return Factorial;
}

void PrintResult(int Factorial)
{
	cout << "Factorial = " << Factorial << endl;
}

int main()
{

	PrintResult(Factorial(ReadNum("enter the number : ")));

	return 0;
}
