// Me and Prof : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(string arrString[], int Length, string Delim)
{
	string S1 = "";

	for (int i = 0; i < Length; i++)
	{
		S1 = S1 + arrString[i] + Delim;
	}

	return S1.substr(0, S1.length() - Delim.length());
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

int main()
{
	vector <string> vString = { "Mohamed","Ali","Zeggaf" };

	string arrString[] = { "Mohamed","Ali","Zeggaf" };

	cout << "\nVector after join : \n";
	cout << JoinString(vString, " ");

	cout << "\n\nArray after join : \n";
	cout << JoinString(arrString, 3, " ");

	system("pause>0");
}
