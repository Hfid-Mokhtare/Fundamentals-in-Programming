// Problem #26 :
#include <iostream>
#include <string>

using namespace std;

int ReadNum()
{
	int Num = 0;
	cout << "enter the number : "; cin >> Num;
	return Num;
}

void PrintResulte(int Num)
{
	int i = 1;
	while  (i<=Num)
	{
		cout << i<< endl;
		i++;
	}
}
int main()
{
	PrintResulte(ReadNum());

	return 0;
}

===================================================================

// Problem #27 :
#include <iostream>
#include <string>

using namespace std;

int ReadNum()
{
	int Num = 0;
	cout << "enter the number : "; cin >> Num;
	return Num;
}

void PrintResult(int Num)
{
	int i = Num;
	while (i>=1)
	{
		cout << i << endl;
		i--;
	}
}
int main()
{
	PrintResult(ReadNum());

	return 0;
}

===================================================================

// Problem #28 :
#include <iostream>
#include <string>

using namespace std;

int ReadNum()
{
	int Num = 0;
	cout << "enter the number : "; cin >> Num;
	return Num;
}

void PrintResult(int Num)
{
	int SumOddNum = 0;
	int i = 1;

	while (i<=Num)
	{
		SumOddNum = SumOddNum + i;
		i+=2;
	}
	cout << SumOddNum;
}
int main()
{
	PrintResult(ReadNum());

	return 0;
}

===================================================================

// Problem #29 :
#include <iostream>
#include <string>

using namespace std;

int ReadNum()
{
	int Num = 0;
	cout << "enter the number : "; cin >> Num;
	return Num;
}

void PrintResult(int Num)
{
	int SumEvenNum = 0;
	int i = 0;

	while (i<=Num)
	{
		SumEvenNum = SumEvenNum + i;
		i+=2;
	}
	cout << SumEvenNum;
}
int main()
{
	PrintResult(ReadNum());

	return 0;
}

===================================================================

// Problem #30 :
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

short CheckNumInRange(int Num)
{

	while (Num<0)
	{
		cout << "Negative number ! Please enter Positive Number : ";cin >> Num;
	}
	return Num;
}

void PrintResult(int Num)
{
	int Factorial = 1;
	int i = Num;

	while (i >= 1)
	{
		Factorial = Factorial * i;
		i--;
	}
	cout << "the Factorial is : " << Factorial;
}
int main()
{
	 PrintResult(CheckNumInRange(ReadNum()));

	return 0;
}

===================================================================

// Problem #32 :
#include <iostream>
#include <string>

using namespace std;

void ReadNum(int &Num, int &Base)
{
	cout << "enter the number : "; cin >> Num;
	cout << "enter the Base : "; cin >> Base;
}

void PrintResult(int Num, int Base)
{
	int NumWithPow = 1;
	int i = Base;
	while (i >= 1)
	{
		NumWithPow = NumWithPow * Num;
		i--;
	}
	cout << NumWithPow;
}
int main()
{
	int Num=0, Base=0;
	
	ReadNum(Num, Base);
	PrintResult(Num, Base);

	return 0;
}

===================================================================

// Problem #37 :(i soleve this problem after i check the break lesson)
#include <iostream>

using namespace std;

using namespace std;

int ReadNum()
{
	int Num;
	cout << "enter the number : ";
	cin >> Num;

	return Num;
}

int SumNumbers()
{
	int Num;
	int Sum = 0;
	

	do
	{
		Num = ReadNum();

		if (Num == -99)
		{
			cout << "programme is going to stop..";
	        return Sum;
			break;
		}

		Sum = Sum + Num;
	} while (Num != -99);
	

}

int main()
{
	
	cout << SumNumbers();
			
	return 0;
}

===================================================================

// Problem #46 :
#include <iostream>
#include <string>
#include <cmath>

using namespace std;




void PrintLetters()
{
	int i = 65;
	while ( i <= 90)
	{
		cout << char(i) << endl;
		i++;
	}

}
int main()
{

	PrintLetters();

	return 0;
}

===================================================================

// Problem #50 (i soleve this problem after i check the break lesson):
#include <iostream>
using namespace std;

int Read_Pin()
{
	int Num;
	cout << "enter the PIN : ";
	cin >> Num;

	return Num;
}

void Check_Pin()
{
	const int Pin =1234;
	int Entered_Pin;
	int Tht_Clien_Balance = 7500;
	int counter = 1;

	do
	{
		Entered_Pin = Read_Pin();

		if (Entered_Pin == Pin)
		{
		    system("color 3F");
			cout << "Your Balance is : " << Tht_Clien_Balance<<endl;
			break;
		}
		else
		{
			cout << " Wrongue PIN \n";
			counter++;
		}

		
	} while (counter<=3);
	

}

int main()
{
	
   Check_Pin();
			
	return 0;
}
