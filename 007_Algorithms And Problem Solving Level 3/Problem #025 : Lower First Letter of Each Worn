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

string Lower_First_Letter_Of_Each_Word(string S1)
{
	

	bool isfirstletter = true;

	cout << "\nstring after conversion : \n";

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isfirstletter)
		{
			S1[i] = tolower(S1[i]);
		}

		isfirstletter = (S1[i] == ' ' ? true : false);
	}

	return S1;
}


int main()
{
	string S1 = ReadString();
	cout << "\nString after conversion:\n";

	S1 = Lower_First_Letter_Of_Each_Word(S1);
	cout << S1 << endl;

	system("pause>0");
}
