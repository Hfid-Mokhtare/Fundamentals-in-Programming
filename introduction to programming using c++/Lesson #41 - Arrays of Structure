//Q1 :

#include <iostream>
#include <string>


using namespace std;

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


void ReadInfo(StMyCartInfo &MyCartInfo)
{
	cout << "*************************************************************\n";
	cout << "enter your FullName : "; cin.ignore(1, '\n'); getline(cin, MyCartInfo.PersonalInfo.FullName);
	cout << " enter your age : "; cin >> MyCartInfo.PersonalInfo.age;
	cout << "enter your Gender (M/F) : "; cin >> MyCartInfo.PersonalInfo.Gender;
	cout << "enter your Married (1/0) : "; cin >> MyCartInfo.PersonalInfo.Married;
	cout << "enter your MonthSalary : "; cin >> MyCartInfo.PersonalInfo.MonthSalary;
	cout << "enter your Country : "; cin >> MyCartInfo.Address.Country;
	cout << "enter your City : "; cin >> MyCartInfo.Address.City;
	cout << "enter your street : "; cin >> MyCartInfo.Address.street;
	cout << "enter your Facebook_account : "; cin >> MyCartInfo.ContacteInfo.facebook_acounte;
	cout << "enter your tweeter_account : "; cin >> MyCartInfo.ContacteInfo.tweeter_acounte;
	cout << "enter your email : "; cin >> MyCartInfo.ContacteInfo.amail;
	cout << "enter your phone : "; cin >> MyCartInfo.ContacteInfo.phone;
	cout << "*************************************************************\n";

}

void PrintInfo(StMyCartInfo MyCartInfo)
{
	cout << "\n\n(((())))(((((())))))((())(()))))(())))()))))(((((())))\n";
	cout << " FullName : " << MyCartInfo.PersonalInfo.FullName << endl;
	cout << " age : " << MyCartInfo.PersonalInfo.age << endl;
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
	cout << "(((())))(((((())))))((())(()))))(())))()))))(((((())))\n";

}


void ReadPersonInfo(StMyCartInfo Person[2])
{
	ReadInfo(Person[0]);
	ReadInfo(Person[1]);
}

void PrintPersonInfo(StMyCartInfo Person[2])
{
	PrintInfo(Person[0]);
	PrintInfo(Person[1]);
}


int main()
{
	StMyCartInfo Person[2];
	
	ReadPersonInfo(Person);
	PrintPersonInfo(Person);
	
	 
	return 0;
}
