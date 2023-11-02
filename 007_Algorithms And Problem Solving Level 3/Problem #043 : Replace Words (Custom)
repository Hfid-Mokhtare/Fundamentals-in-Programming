// Me : 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string Lower_First_Letter_Of_Each_Word(string S1)
{


	bool isfirstletter = true;

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


string ReplaceWordInStringUsingCustomFunction(string S1, string StringToReplace, string sRepalceTo, bool MatchCase = true)
{

	if (MatchCase == false)
	{
		S1 = Lower_First_Letter_Of_Each_Word(S1);
		StringToReplace = Lower_First_Letter_Of_Each_Word(StringToReplace);
	}

	short Pos = S1.find(StringToReplace);

	while (Pos != std::string::npos)
	{
		S1 = S1.erase(Pos, StringToReplace.length());
		S1.insert(Pos, sRepalceTo);
		Pos = S1.find(StringToReplace);//find next

	}

	return S1;
}

int main()
{
	string S1 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "jordan";
	string ReplaceTo = "USA";

	cout << "\nOriginal String : \n" << S1;
	cout << "\n\nReplace With match case : \n";
	cout << ReplaceWordInStringUsingCustomFunction(S1,
		StringToReplace, ReplaceTo);
	cout << "\n\nReplace With dont match case : \n";
    cout << ReplaceWordInStringUsingCustomFunction(S1,
		StringToReplace, ReplaceTo, false);


	system("pause>0");
}

=================================================================

//Prof : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> SplitWords(string S1, string Delim)
{
	vector <string> vString;

	short Pos = 0;
	string sWord; // define a string variable

	// use find() function to get the position of the delimiters
	while ((Pos = S1.find(Delim)) != std::string::npos)
	{

		sWord = S1.substr(0, Pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}

		S1.erase(0, Pos + Delim.length()); /* erase()until
		Position and move to next word. */
	}


	if (S1 != "")
	{
		vString.push_back(S1);
	}

	return vString;
}

string Lower_All_Letter(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}

string JoinString(vector <string> vString, string Delim)
{
	string S1 = "";

	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}

	return S1.substr(0, S1.length() - Delim.length());
}

string ReplaceWordInStringUsingSplit(string S1, string StringToReplace, string sRepalceTo, bool MatchCase = true)
{

	vector <string> vString = SplitWords(S1, " ");

	if (MatchCase)
	{
		for (string& s : vString)
		{
			if (s == StringToReplace)
				s = sRepalceTo;
		}
		
	}
	else 
	{
		for (string& s : vString)
		{
			if (Lower_All_Letter(s) == Lower_All_Letter(StringToReplace))
				s = sRepalceTo;
		}

	}

	return  JoinString(vString, " ");
}

int main()
{
	string S1 = "Welcome to Morocco , Morocco is a nice country";
	string StringToReplace = "morocco";
	string ReplaceTo = "USA";

	cout << "\nOriginal String : \n" << S1;
	cout << "\n\nReplace With match case : \n";
	cout << ReplaceWordInStringUsingSplit(S1,
		StringToReplace, ReplaceTo);
	cout << "\n\nReplace With dont match case : \n";
    cout << ReplaceWordInStringUsingSplit(S1,
		StringToReplace, ReplaceTo, false);


	system("pause>0");
}
