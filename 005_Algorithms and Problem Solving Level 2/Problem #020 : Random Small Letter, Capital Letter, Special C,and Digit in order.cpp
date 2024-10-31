//Me : 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


enum enCaracter { SmallLetter = 1, CapitalLetter = 2, SpecialC = 3, Digit = 4 };

void PrintRandomNumber()
{
	//int From, int To

	int Number;

	cout << "What Type Of Characters do you want to Print Randomly on the screen ?\n";
	cout << "Small Letter      (1)\n";
	cout << "Capital Letter    (2)\n";
	cout << "Special Character (3)\n";
	cout << "Digit             (4)\n";


	cin >> Number;

	switch (Number)
	{
	case enCaracter::CapitalLetter:
		cout << char(rand() % (90 - 65 + 1) + 65);
		break;
	case enCaracter::SmallLetter:
		cout << char(rand() % (122 - 97 + 1) + 97);
		break;
	case enCaracter::SpecialC:
		cout << char(rand() % (47 - 33 + 1) + 33);
		break;
	case enCaracter::Digit:
		cout << rand() % (10 - 1 + 1) + 1;
		break;
	}
	
}

int main()
{
	srand((unsigned)time(NULL));

	
	PrintRandomNumber();
	

	return 0;
}

==================================================================================================

//Prof : 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int PrintRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialC = 3, Digit = 4 };

char GetRandomCharacter(enCharType CharType)
{
	

	switch (CharType)
	{
	case enCharType::CapitalLetter:
		return char(PrintRandomNumber(65,90));
		break;
	case enCharType::SmallLetter:
		return char(PrintRandomNumber(97,122));
		break;
	case enCharType::SpecialC:
		return char(PrintRandomNumber(33,47));
		break;
	case enCharType::Digit:
		return char(PrintRandomNumber(48,57));
		break;
	}
	
}

int main()
{
	srand((unsigned)time(NULL));

	
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialC) << endl;
	cout << GetRandomCharacter(enCharType::Digit) << endl;

	

	return 0;
}
