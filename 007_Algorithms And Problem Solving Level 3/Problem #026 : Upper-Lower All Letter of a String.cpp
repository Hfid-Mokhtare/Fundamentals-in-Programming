//Me and Prof : 

#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1 = "";
	cout << "please enter your string : " << endl;
	getline(cin, S1);
	return S1;
}

string Upper_All_Letter_Of_String(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{

		S1[i] = toupper(S1[i]);

	}
	return S1;
}

string Lower_All_Letter_Of_String(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{
			S1[i] = tolower(S1[i]);
	}
	return S1;
}


int main()
{
	string S1 = ReadString();

	cout << "\nstring after Lower : \n";
	S1 = Upper_All_Letter_Of_String(S1);
	cout << S1 << endl;

	cout << "\nstring after Upper: \n";
	S1 = Lower_All_Letter_Of_String(S1);
	cout << S1 << endl;

	system("pause>0");
}
