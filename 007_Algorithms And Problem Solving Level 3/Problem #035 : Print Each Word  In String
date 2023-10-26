//Me :
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

void Print_Each_Word_In_String(string S1)
{


	bool isFirstLetter = true;

	cout << "\nYour string Word are : \n\n";

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
			cout << S1[i];
		else
			cout << endl;

		isFirstLetter = (S1[i+1] != ' ' ? true : false);
	}
}

int main()
{
	string S1 = ReadString();
	Print_Each_Word_In_String(S1);

	system("pause>0");
}

=====================================================

//Prof :
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

void Print_Each_Word_In_String(string S1)
{

	string Delim = " "; // delimiter

	cout << "\nYour string Word are : \n\n";
	short Pos = 0;
	string sWord; // define a string variable

	// use find() function to get the position of the delimiters
	while ((Pos = S1.find(Delim)) != std::string::npos)
	{

		sWord = S1.substr(0, Pos); // store the word
		if(sWord != "")
		{
			cout << sWord << endl;
		}

		S1.erase(0, Pos + Delim.length()); /* erase()until
		Position and move to next word. */
	}

	if (S1 != "")
	{
		cout << S1 << endl; // it Print last word of the string
	}
}

int main()
{
	string S1 = ReadString();
	Print_Each_Word_In_String(S1);

	system("pause>0");
}
