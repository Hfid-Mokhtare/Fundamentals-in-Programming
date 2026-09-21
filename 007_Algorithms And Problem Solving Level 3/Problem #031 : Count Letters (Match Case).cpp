// Me : 
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

char Invert_Letter_Case(char Char1)
{
	return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}


enum enExacteOrMatchCase { ExacteCase = 0, MatchCase=1 };

short CountCharacter(string S1, char Char1, enExacteOrMatchCase ExacteOrMatchCase)
{ 
	
	short Counter = 0; 

	if (ExacteOrMatchCase == enExacteOrMatchCase::ExacteCase) {
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] == Char1)
				Counter++;
		}
	}
	if (ExacteOrMatchCase == enExacteOrMatchCase::MatchCase) {
		
		char InverChar = Invert_Letter_Case(Char1);

		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] == Char1 || S1[i] == InverChar)
				Counter++;
		}
	}
	
	return Counter; 
}

int main()
{
	string S1 = ReadString();
	char Char1 = ReadCharacter();

	

	cout << "\nLetter \'" << Char1 << "\' Count = " 
		<< CountCharacter(S1, Char1, enExacteOrMatchCase::ExacteCase);

	cout << "\nLetter \'" << Char1 << "' or \'"<< Invert_Letter_Case(Char1) << "\' Count = " 
		<< CountCharacter(S1, Char1, enExacteOrMatchCase::MatchCase);

	

	
	
	system("pause>0");
}
========================================================

/Prof : 

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

char Invert_Letter_Case(char Char1)
{
	return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}

short CountCharacter(string S1, char Char1, bool MachCase = true)
{ 
	
	short Counter = 0; 

	for (short i = 0; i < S1.length(); i++)
	{
		if (MachCase)
		{
			if (S1[i] == Char1)
				Counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Char1))
				Counter++;
		}
	}
	
	return Counter; 
}

int main()
{
	string S1 = ReadString();
	char Char1 = ReadCharacter();

	cout << "\nLetter \'" << Char1 << "\' Count = " 
		<< CountCharacter(S1, Char1);

	cout << "\nLetter \'" << Char1 << "' or \'"<< Invert_Letter_Case(Char1) << "\' Count = " 
		<< CountCharacter(S1, Char1, false);


	system("pause>0");
}
