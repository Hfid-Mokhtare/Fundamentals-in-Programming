//Me : 

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum entypeChar { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int ReadPositiveNumber(string message) {
    int num = 0;
    do {
        cout << message << endl;
        cin >> num;
    } while (num < 0);
    return num;
}


int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

char GetRandomCharacter(entypeChar typeChar) {
    switch (typeChar) {
    case entypeChar::SmallLetter : 
        return char(RandomNumber(97, 122)) ;
    case entypeChar::CapitalLetter:
        return char(RandomNumber(65, 90)) ;
    case entypeChar::SpecialCharacter:
        return char(RandomNumber(33, 47)) ;
    case entypeChar::Digit:
        return char(RandomNumber(48, 57)) ;        
    }
}

string GenerateWordOfFourLetters(entypeChar charType, short length) {
    string word = "";

    for (int i = 1; i <= length; i++) {
        word += GetRandomCharacter(charType);
    }

    return word;
}

string GenerateKey(short length) {
    string key = "";

    for (int i = 1; i <= length; i++) {

        key += GenerateWordOfFourLetters(entypeChar::CapitalLetter,4);

        if (i < length) {
            key += "-";
        }
    }
    
    return key;
}

void PrintKeysInOrder(int numberOfKeys) {
    for (int i = 1; i <= numberOfKeys; i++) {
        cout << "Key [" << i << "] : " << GenerateKey(4) << endl;;
    
    }
}


int main()
{
   srand((unsigned)time(NULL));
   PrintKeysInOrder(ReadPositiveNumber("Please enter a positive number :"));

    return 0;
}


===============================================================================================

//Prof : 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialC = 3, Digit = 4 };

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}


char GetRandomCharacter(enCharType CharType)
{

	switch (CharType)
	{
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;
	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case enCharType::SpecialC:
		return char(RandomNumber(33, 47));
		break;
	case enCharType::Digit:
		return char(RandomNumber(48, 57));
		break;
	}

}


string GenerateWord(enCharType CharType,short length)
{
	string Word = "";

	for (int i = 1; i <= length; i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	
	return Word;
}

string GenerateKey()
{
	string Key = "";

	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

	return Key;
}

void GenerateKeys(int NumOfKeys)
{
	for (int i = 1; i <= NumOfKeys; i++)
	{
		cout << "Key[" << i << "] : ";
		cout << GenerateKey() << endl;
	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));


	GenerateKeys(ReadPositiveNumber("Please enter the Number Of Keys do you want : "));

	return 0;
}
