//Me and Prof : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo)
{
	short Pos = S1.find(StringToReplace);

	while (Pos != std::string::npos)
	{
		S1 = S1.replace(Pos, StringToReplace.length(), sRepalceTo);
		Pos = S1.find(StringToReplace);//find next

	}

	return S1;
}

int main()
{
	string S1 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "Jordan";
	string ReplaceTo = "USA";

	cout << "\nOriginal String : \n" << S1;
	cout << "\n\nstring after Replacing : \n";
	cout << ReplaceWordInStringUsingBuiltInFunction(S1,
		StringToReplace, ReplaceTo);


	system("pause>0");
}
