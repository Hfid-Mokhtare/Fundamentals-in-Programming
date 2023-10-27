// Me and Prof : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string S1 = "";
	cout << "please enter your string : " << endl;
	getline(cin, S1);
	return S1;
}

vector <string> SplitWords(string S1, string Delim)
{ 
	vector <string> vString;

	short Pos = 0;
	string sWord; // define a string variable

	// use find() function to get the position of the delimiters
	while ((Pos = S1.find(Delim)) != std::string::npos)
	{

		sWord = S1.substr(0, Pos); // store the word
		if(sWord != "")
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

int main()
{
	
	vector <string> vString;

	vString = SplitWords(ReadString(), " ");

	cout << "\nTokens : " << vString.size() << endl;

	for (string & Word : vString)
	{
		cout << Word << endl;
	}

	system("pause>0");
}
