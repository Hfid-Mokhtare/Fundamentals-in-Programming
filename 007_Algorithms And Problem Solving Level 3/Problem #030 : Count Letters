// Me  and Prof : 
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1 = "";
	cout << "\nplease enter your string : " << endl;
	getline(cin, S1);
	return S1;
}

char ReadCharacter()
{
	char Char1 = ' ';
	cout << "\nplease enter your character : " << endl;
	cin >> Char1;
	return Char1;
}

short CountCharacter(string S1, char Char1)
{ 
	
	short Counter = 0; 

	for (short i = 0; i < S1.length(); i++)
	{ 
		if (S1[i] == Char1)
			Counter++;
	} 
	return Counter; 
}

int main()
{
	string S1 = ReadString();
	char Char1 = ReadCharacter();

	cout << "\nLetter \'" << Char1 << "\' Count = " << CountCharacter(S1, Char1);

	system("pause>0");
}
