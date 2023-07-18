//Problem #4 : 
#include <iostream>
#include <string>


using namespace std;


void ReadInfo(short &Age, bool &HasDriverLicense)
{

	cout << " Please enter your age : "; cin >> Age;
	cout << " Do you have driver license ? (0/1) "; cin >> HasDriverLicense;
}

void CheckRequirement(short Age, bool HasDriverLicense)
{
	
	if (Age > 21 && HasDriverLicense == true)
		cout << " Hired ";
	else
		cout << " Rejected ";
	
}



int main()
{
	short Age;
	bool HasDriverLicense;
	
	ReadInfo(Age, HasDriverLicense);
	CheckRequirement(Age, HasDriverLicense);
	
	 
	return 0;
}

===============================================================================

//Problem #8 :
#include <iostream>
#include <string>


using namespace std;


void ReadMark(short& Mark)
{
	cout << " Please enter your Mark : "; cin >> Mark;
}

void CheckMark(short Mark)
{
	
	if (Mark>=50)
		cout << " PASS ";
	else
		cout << " fail ";
}

int main()
{
	short Mark;
	ReadMark(Mark);
	CheckMark(Mark);
	
	return 0;
}

===============================================================================

//Problem #11 :
#include <iostream>
#include <string>


using namespace std;


void ReadMarks(float Mark[3])
{
	cout << " Please enter Mark1 : "; cin >> Mark[0];
	cout << " Please enter Mark1 : "; cin >> Mark[1];
	cout << " Please enter Mark1 : "; cin >> Mark[2];
}

float CalculeTheAverage(float Mark[3])
{
	return (Mark[0] + Mark[1] + Mark[2]) / 3;
}

void CheckAverage(float Average)
{
	
	if (Average >= 50)
	{
		cout << "The Average is : " << Average << endl;
		cout << "PASS ";
	}
	else
	{
		cout << "The Average is : " << Average << endl;
		cout << "FAIL";
	}
}

int main()
{
	float Mark[3];

	ReadMarks(Mark);
	CheckAverage(CalculeTheAverage(Mark));
	
	return 0;
}

===============================================================================

//Problem #24 :
#include <iostream>
#include <string>


using namespace std;


short ReadAge()
{
	short Age=0;
	cout << " Please enter your Age : "; cin >> Age;
	return Age;
}


void CheckAge(short Age)
{
	
	if ( Age >=18 && Age <= 45)
	{
		
		cout << "Valide Age ";
	}
	else
	{
		cout << "Invalide Age ";
	}
}

int main()
{

	CheckAge(ReadAge());
	
	return 0;
}

===============================================================================

//Problem #49 :
#include <iostream>
#include <string>


using namespace std;


short ReadPin()
{
	short Pin;
	cout << " Please enter the Pin : "; cin >> Pin;
	return Pin;
}


void CheckPin(short Pin)
{
	int Balance = 7500;
	short CorrectPin = 1234;
	
	if ( Pin == CorrectPin)
	{
		
		cout << " Your Balance is : " << Balance;
	}
	else
	{
		cout << " Wrong PIN ";
	}
}

int main()
{

	CheckPin(ReadPin());
	
	return 0;
}


