//Me :
#include <iostream>
#include <string>

using namespace std;

char ReadCharacter()
{
	char Char1 = ' ';
	cout << "please enter your character : " << endl;
	cin >> Char1;
	return Char1;
}

char Invert_Character_Case(char Char1)
{

	if (int(Char1) >= 65 && int(Char1) <= 90)
	{
		Char1 = tolower(Char1);
	}
	else
	{
		Char1 = toupper(Char1);
	}

	return Char1;
}

int main()
{
	char Char1 = ReadCharacter();

	cout << "\nChar after inverting case : \n";
	cout << Invert_Character_Case(Char1);

	system("pause>0");
}

========================================================

//Prof :
#include <iostream>
#include <string>

using namespace std;

char ReadCharacter()
{
	char Char1 = ' ';
	cout << "please enter your character : " << endl;
	cin >> Char1;

	return Char1;
}

char Invert_Letter_Case(char Char1)
{
	return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}

int main()
{
	char Char1 = ReadCharacter();

	cout << "\nChar after inverting case : \n";
	Char1 = Invert_Letter_Case(Char1);

	cout << Char1 << endl;

	system("pause>0");
}
