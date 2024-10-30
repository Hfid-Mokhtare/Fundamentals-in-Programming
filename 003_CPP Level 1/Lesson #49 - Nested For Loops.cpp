//Q1 : 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (int i = 65; i <= 90; i++)
	{
			cout << "letter "<<char(i)<<":\n";

		for (int j = 65; j <= 90; j++)
		{
			cout << char(i) << char(j) << endl;
		}
		cout << "---------------------\n";
	}
	return 0;
}
//AA
//AB
//AC
//AD
//..
//..
//..
//ZZ

==========================================================================

//Q2 :
#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{

		for (int j = 10; j >= i ; j--)
		{
			cout << "*" ;
		}
		cout << endl;
	}
	return 0;
}
//**********
//*********
//********
//*******
//******
//*****
//****
//***
//**
//*

==========================================================================

//Q3 :
#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (int i = 10; i >= 1; i--)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << j<<" ";
		}
		cout << endl;
	}
	return 0;
}
//12345678910
//123456789
//12345678
//1234567
//123456
//12345
//1234
//123
//12
//1

==========================================================================

//Q4 :
#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{

		for (int j = 1; j <= i ; j++)
		{
			cout << j <<" ";
		}
		cout << endl;
	}
	return 0;
}
//1
//12
//123
//1234
//12345
//123456
//1234567
//12345678
//123456789
//12345678910

==========================================================================

//Q5 :
#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (int i = 65; i <= 70; i++)
	{

		for (int j = 65; j <= i ; j++)
		{
			cout << char(j)<<" " ;
		}
		cout << endl;
	}
	return 0;
}

/*A
  AB
  ABC
  ABCD
  ABCDE
  ABCDEF*/

==========================================================================

//Q6 :
#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{

		for (int j = i; j <= 10; j++)
		{
			cout << j<<" ";
		}
		cout << endl;
	}
	return 0;
}
