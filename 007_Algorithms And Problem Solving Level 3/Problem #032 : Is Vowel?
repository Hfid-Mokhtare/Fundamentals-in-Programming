//Me :
#include <iostream>
#include <string>

using namespace std;

char ReadCharacter()
{
	char Char1 = ' ';
	cout << "\nplease enter your character : " << endl;
	cin >> Char1;
	return Char1;
}

bool IsVowel(char Char1)
{ 

	Char1 = tolower(Char1);

	if (Char1 == 'a')
	{

		return true;
	}
	else if (Char1 == 'e')
	{
		return true;
	}
	else if (Char1 == 'i')
	{
		return true;
	}
	else if (Char1 == 'o')
	{
		return true;
	}
	else if (Char1 == 'u')
	{
		return true;
	}
	else
		return false;

}

int main()
{
	char Char1 = ReadCharacter();

	if(IsVowel(Char1))
		cout << "\nYes Letter \'" << Char1 << "\' is a vowel\n";
	else
		cout << "\nNo Letter \'" << Char1 << "\' is Not a vowel\n";

	system("pause>0");
}

=======================================================

//Prof : 
#include <iostream>
#include <string>

using namespace std;

char ReadCharacter()
{
	char Char1 = ' ';
	cout << "\nplease enter your character : " << endl;
	cin >> Char1;
	return Char1;
}

bool IsVowel(char Char1)
{ 

	Char1 = tolower(Char1);

	return ((Char1 == 'a') || (Char1 == 'e') || (Char1 == 'i') || (Char1 == 'o') || (Char1 == 'u'));
	
}

int main()
{
	char Char1 = ReadCharacter();

	if(IsVowel(Char1))
		cout << "\nYes Letter \'" << Char1 << "\' is a vowel\n";
	else
		cout << "\nNo Letter \'" << Char1 << "\' is Not a vowel\n";

	system("pause>0");
}

