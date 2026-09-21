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
bool IsVowel(char Char1)
{ 

	Char1 = tolower(Char1);

	return ((Char1 == 'a') || (Char1 == 'e') || (Char1 == 'i') || (Char1 == 'o') || (Char1 == 'u'));
	
}

void PrintAllVowelsInString(string S1)
{
	
	for (int i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
			cout << S1[i] << "  ";
	}
	
}

int main()
{
	string S1 = ReadString();
	cout << "\nVowels In String are : ";
	PrintAllVowelsInString(S1);

	system("pause>0");
}
