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
	StAdress Adress;
	StContacteInfo ContacteInfo;
	StPersonalInfo PersonalInfo;
};

void ReadInfo(StMyCartInfo &MyCartInfo)
{
	cout << "enter your FullName : ";getline(cin, MyCartInfo.PersonalInfo.FullName);
	cout << " enter your age : "; cin >> MyCartInfo.PersonalInfo.age;
	cout << "enter your Gender (M/F) : "; cin >> MyCartInfo.PersonalInfo.Gender;
	cout << "enter your Married (1/0) : "; cin >> MyCartInfo.PersonalInfo.Married;
	cout << "enter your MonthSalary : "; cin >> MyCartInfo.PersonalInfo.MonthSalary;
	cout << "enter your Country : "; cin >> MyCartInfo.Adress.Country;
	cout << "enter your City : "; cin >> MyCartInfo.Adress.City;
	cout << "enter your street : "; cin >> MyCartInfo.Adress.street;
	cout << "enter your Facebook_account : "; cin >> MyCartInfo.ContacteInfo.facebook_acounte;
	cout << "enter your tweeter_account : "; cin >> MyCartInfo.ContacteInfo.tweeter_acounte;
	cout << "enter your email : "; cin >> MyCartInfo.ContacteInfo.amail;
	cout << "enter your phone : "; cin >> MyCartInfo.ContacteInfo.phone;
	
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
	cout << " Country : " << MyCartInfo.Adress.Country << endl;
	cout << " City : " << MyCartInfo.Adress.City << endl;
	cout << " street : " << MyCartInfo.Adress.street << endl;
	cout << " Facebook_account : " << MyCartInfo.ContacteInfo.facebook_acounte << endl;
	cout << " tweeter_account : " << MyCartInfo.ContacteInfo.tweeter_acounte << endl;
	cout << " email : " << MyCartInfo.ContacteInfo.amail << endl;
	cout << " phone : " << MyCartInfo.ContacteInfo.phone << endl;
	cout << "(((())))(((((())))))((())(()))))(())))()))))(((((())))\n";

}

int main()
{
	StMyCartInfo Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);
	

	StMyCartInfo Person2Info;
	ReadInfo(Person2Info);
	PrintInfo(Person2Info);



	return 0;
}
