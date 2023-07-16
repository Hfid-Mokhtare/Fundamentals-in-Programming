\\Exemple :
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

short ReadLength(string message)
{
	
	short Length;
	cout << message; cin >> Length;
	return Length;
}

void ReadArryData(short Length, float Arr[100])
{
	for (int i = 0; i <= Length-1; i++)
	{
		cout << "Please enter Number " << i+1 << " : "; cin >> Arr[i];
	}
}

void PrintArryData(short Length, float Arr[100])
{
	for (int i = 0; i <= Length-1; i++)
	{
		cout << "Number [" << i+1 << "] : " << Arr[i]<<endl;
	}
	cout << "\n*******************************************\n";
}

float CalculeSumOfArr(short Length, float Arr[100])
{
	float sum=0;
	for (int i = 0; i <= Length-1; i++)
	{
		sum += Arr[i];
	}
	cout << "sum : " << sum << endl;
	return sum;
}

void CalculeAverageOfArr(short Length, float sum)
{
	float Average = sum / Length;
	cout << "Average : " << Average << endl;
}


int main()
{
	float Arr[100];
	short Length = ReadLength("How Many Numbers do you want to enter ? 1 to 100 \n");
	ReadArryData(Length, Arr);
	PrintArryData(Length, Arr);
	CalculeAverageOfArr(Length,CalculeSumOfArr(Length, Arr));

	return 0; 
}
================================================================================

//Q1 : 
#include <iostream>
#include <string>


using namespace std;

short Length;

struct StContacteInfo
{
	string facebook_acounte;
	string tweeter_acounte;
	string amail;
	string phone;
};
struct StPersonalInfo
{
	string FullName;
	short age;
	char Gender;
	bool Married;
	unsigned int MonthSalary;
};
struct StAdress
{

	string Country;
	string City;
	string street;
};
struct StMyCartInfo
{
	StAdress Address;
	StContacteInfo ContacteInfo;
	StPersonalInfo PersonalInfo;
};


void ReadLength()
{
	
	cout << " How many Personnes do you have : "; cin >> ::Length;
}


void ReadInfo(StMyCartInfo& MyCartInfo)
{
	cout << "*************************************************************\n\n";
	cout << "enter The FullName : "; cin.ignore(1, '\n'); getline(cin, MyCartInfo.PersonalInfo.FullName);
	cout << "enter The age : "; cin >> MyCartInfo.PersonalInfo.age;
	cout << "enter The Gender (M/F) : "; cin >> MyCartInfo.PersonalInfo.Gender;
	cout << "is Married ? (1/0) : "; cin >> MyCartInfo.PersonalInfo.Married;
	cout << "enter The MonthSalary : "; cin >> MyCartInfo.PersonalInfo.MonthSalary;
	cout << "enter The Country : "; cin >> MyCartInfo.Address.Country;
	cout << "enter The City : "; cin >> MyCartInfo.Address.City;
	cout << "enter The street : "; cin >> MyCartInfo.Address.street;
	cout << "enter The Facebook_account : "; cin >> MyCartInfo.ContacteInfo.facebook_acounte;
	cout << "enter The tweeter_account : "; cin >> MyCartInfo.ContacteInfo.tweeter_acounte;
	cout << "enter The email : "; cin >> MyCartInfo.ContacteInfo.amail;
	cout << "enter The phone : "; cin >> MyCartInfo.ContacteInfo.phone;
	

}

void PrintInfo(StMyCartInfo MyCartInfo)
{

	cout << " (((())))(((((())))))((())(()))))(())))()))))(((((())))\n\n";
	cout << " FullName : " << MyCartInfo.PersonalInfo.FullName << endl;
	cout << " age : " << MyCartInfo.PersonalInfo.age << " Years olde"<<endl;
	cout << " Gender (M/F) : " << MyCartInfo.PersonalInfo.Gender << endl;
	cout << " Married (1/0) : " << MyCartInfo.PersonalInfo.Married << endl;
	cout << " MonthSalary : " << MyCartInfo.PersonalInfo.MonthSalary << endl;
	cout << " YearlySalary : " << (MyCartInfo.PersonalInfo.MonthSalary) * 12 << endl;
	cout << " Country : " << MyCartInfo.Address.Country << endl;
	cout << " City : " << MyCartInfo.Address.City << endl;
	cout << " street : " << MyCartInfo.Address.street << endl;
	cout << " Facebook_account : " << MyCartInfo.ContacteInfo.facebook_acounte << endl;
	cout << " tweeter_account : " << MyCartInfo.ContacteInfo.tweeter_acounte << endl;
	cout << " email : " << MyCartInfo.ContacteInfo.amail << endl;
	cout << " phone : " << MyCartInfo.ContacteInfo.phone << endl;

}


void ReadPersonInfo(StMyCartInfo Person[100])
{
	
	for (int i = 0; i <= ::Length-1; i++)
	{
		cout <<"\nPerson["<<i<<"]";
		ReadInfo(Person[i]);
	}
	
}

void PrintPersonInfo(StMyCartInfo Person[100])
{
	for (int i = 0; i <= ::Length-1; i++)
	{
		cout << "\nPerson[" << i << "]";
		PrintInfo(Person[i]);
	}
}

int main()
{
	StMyCartInfo Person[100];

	ReadLength();

	ReadPersonInfo(Person);
	PrintPersonInfo(Person);


	return 0;
}

