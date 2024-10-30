//Problem #1 : Print your Name
#include <iostream>

using namespace std;

void Print_Name(string Name)
{
	cout <<"\n Your name is : "<< Name<<endl;
}

int main()
{

	Print_Name("Mohamed Ali Zeggaf");

	return 0;
}

=======================================================

//Problem #2 :  Print your Name 2
#include <iostream>

using namespace std;

string ReadName()
{
	string Name;

	cout << " Enter you Name : ";
	getline(cin, Name);
	return Name;
}

void PrintName(string Name)
{
	cout << "\n Your name is : " << Name << endl;
}

int main()
{
	PrintName(ReadName());

	return 0;
}

=======================================================

//Problem #3 : Print ODD or EVEN Number
#include <iostream>

using namespace std;

enum enNumberType {Even=1,Odd=0};

int Read_Num()
{
	int Num = 0;
	cout << "enter the number : "; 
	cin >> Num;
	return Num;
}

enNumberType Check_Number_Type(int Num)
{
	int Result = Num % 2;
	if (Result % 2 == 0)
	{
		return enNumberType::Even;
	}
	else
	{
		return enNumberType::Odd;
	}
}

void Print_Number_Type(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
	{
		cout << "\nNumber is : Even";
	}
	else
	{
		cout << "\nNumber is : ODD";
	}
}
int main()
{
	Print_Number_Type(Check_Number_Type(Read_Num()));

	return 0;
}

=======================================================

//Problem #4 : Hire a driver -case 1
#include <iostream>

using namespace std;

struct stInfo
{
	short age;
	bool HasDriverLicense;
};

stInfo Read_Info()
{
	stInfo Info;

	cout << " Please enter your age : "; cin >> Info.age;
	cout << " Do you have driver license ? (0/1) "; cin >> Info.HasDriverLicense;

	return Info;
}

bool Is_Accepted(stInfo Info)
{
	return (Info.age > 21 && Info.HasDriverLicense);
}

void Print_Result(stInfo Info)
{
	if (Is_Accepted(Info))
		cout << "\n Hired ";
	else
		cout << "\n Rejected ";
}

int main()
{
	;
	Print_Result(Read_Info());


	return 0;
}

=======================================================

//Problem #5 :  Hire a driver -case 2
#include <iostream>

using namespace std;

struct stInfo
{
	short age;
	bool HasDriverLicense;
	bool HasRecommendation;
};

stInfo Read_Info()
{
	stInfo Info;

	cout << " Please enter your age : "; cin >> Info.age;
	cout << " Do you have driver license ? (0/1) "; cin >> Info.HasDriverLicense;
	cout << " Do you have Recommendation? (0/1) "; cin >> Info.HasRecommendation;

	return Info;
}

bool Is_Accepted(stInfo Info)
{
	if (Info.HasRecommendation)
	{
		return true;
	}
	else
	{
	    return (Info.age > 21 && Info.HasDriverLicense);
	}
}

void Print_Result(stInfo Info)
{
	if (Is_Accepted(Info))
		cout << "\n Hired ";
	else
		cout << "\n Rejected ";
}

int main()
{
	;
	Print_Result(Read_Info());


	return 0;
}
