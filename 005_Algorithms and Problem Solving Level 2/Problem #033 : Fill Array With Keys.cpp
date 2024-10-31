//Me: 
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

int GetRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}


char GetRandomCharacter(enCharType CharType)
{

	switch (CharType)
	{
	case enCharType::CapitalLetter:
		return char(GetRandomNumber(65, 90));
		break;
	case enCharType::SmallLetter:
		return char(GetRandomNumber(97, 122));
		break;
	case enCharType::SpecialC:
		return char(GetRandomNumber(33, 47));
		break;
	case enCharType::Digit:
		return char(GetRandomNumber(48, 57));
		break;
	}

}


string GenerateWord(enCharType CharType, short length)
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

void GenerateKeysInArr(int Arr[100],int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << "Array[" << i << "] : ";
		cout << GenerateKey() << endl;
	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Arr[100];

	GenerateKeysInArr(Arr, ReadPositiveNumber("Please enter the Number Of Keys do you want : "));

	return 0;
}

==============================================================================================================

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

int GetRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}


char GetRandomCharacter(enCharType CharType)
{

	switch (CharType)
	{
	case enCharType::CapitalLetter:
		return char(GetRandomNumber(65, 90));
		break;
	case enCharType::SmallLetter:
		return char(GetRandomNumber(97, 122));
		break;
	case enCharType::SpecialC:
		return char(GetRandomNumber(33, 47));
		break;
	case enCharType::Digit:
		return char(GetRandomNumber(48, 57));
		break;
	}

}


string GenerateWord(enCharType CharType, short length)
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

void FillArrayWithRandomKeys(string Arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
		Arr[i] = GenerateKey();

}

void PrintArray(string Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array[" << i << "] : ";
		cout << Arr[i] << " \n";

	}
	cout << endl;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	string Arr[100];
	int arrLength = ReadPositiveNumber("How many Keys do you want to Generate : ");

	FillArrayWithRandomKeys(Arr, arrLength);
	PrintArray(Arr, arrLength);

	return 0;
}
