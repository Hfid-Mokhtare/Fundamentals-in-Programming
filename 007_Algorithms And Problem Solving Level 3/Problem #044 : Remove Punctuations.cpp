// Me and Prof : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string RemovePunctuationsFromString(string S1)
{
	string S2 = "";

	for (int i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}

	return S2;
}

int main()
{
	string S1 = "Welcome to Morocco, Morocco is a nice country; its amazing !";
	

	cout << "\nOriginal String : \n" << S1;

	cout << "\n\nPunctuations Removed : \n";
	cout << RemovePunctuationsFromString(S1);
	


	system("pause>0");
}
