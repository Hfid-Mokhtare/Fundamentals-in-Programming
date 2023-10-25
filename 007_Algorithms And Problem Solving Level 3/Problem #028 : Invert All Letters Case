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


char Invert_Letter_Case(char Char1)
{
	return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}


string Invert_All_String_Letters_Case(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = Invert_Letter_Case(S1[i]);
	}
	return S1;
}

int main()
{
	string S1 = ReadString();

	cout << "\nChar after inverting All Letters Case : \n";
	S1 = Invert_All_String_Letters_Case(S1);
	cout << S1 << endl;

	system("pause>0");
}
