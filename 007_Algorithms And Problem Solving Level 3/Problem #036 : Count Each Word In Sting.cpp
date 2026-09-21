// Me and Prof : 
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

int Count_Each_Word_In_String(string S1)
{

	string Delim = " "; // delimiter

	cout << "\nYour string Word are : \n\n";
	short Pos = 0;
	string sWord; // define a string variable
	int Counter = 0; // counte number of words in the string

	// use find() function to get the position of the delimiters
	while ((Pos = S1.find(Delim)) != std::string::npos)
	{

		sWord = S1.substr(0, Pos); // store the word
		if(sWord != "")
		{
			Counter++;
		}

		S1.erase(0, Pos + Delim.length()); /* erase()until
		Position and move to next word. */
	}


	if (S1 != "")
	{
		 Counter++; // it counts the last word of the string
	}

	return Counter;
}

int main()
{
	string S1 = ReadString();
	cout << Count_Each_Word_In_String(S1);

	system("pause>0");
}
