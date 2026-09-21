//Me and Prof : this is the first solution
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

int Count_Small_Letter(string S1)
{
	int counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{

		if (islower(S1[i]))
			counter++;

	}
	return counter;
}

int Count_Capital_Letter(string S1)
{
	int counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
			counter++;
	}
	return counter;
}

int main()
{
	string S1 = ReadString();

	cout << "\nString Length = " << S1.length();
	cout << "\nCapital Letters count = " << Count_Capital_Letter(S1);
	cout << "\nSmall Letters count = " << Count_Small_Letter(S1);

	
	
	system("pause>0");
}

=========================================================================
//the seconde solution : 

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

enum enWhatToCount{ SmallLetters = 0, CapitalLetters = 1,All = 3 };

short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All) 
{ 
	if (WhatToCount == enWhatToCount::All) 
	{ 
		return S1.length();
	} 

	short Counter = 0; 

	for (short i = 0; i < S1.length(); i++)
	{ 
		if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i])) 
			Counter++; 

		if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))      
			Counter++; 
	} 
	return Counter; 
}

int main()
{
	string S1 = ReadString();

	cout << "\n\nMethod 2\n";  
	cout << "\nString Length = " << CountLetters(S1);  
	cout << "\nCapital Letters Count= " << CountLetters(S1, enWhatToCount::CapitalLetters);
	cout << "\nSmall Letters Count= " << CountLetters(S1, enWhatToCount::SmallLetters);

	
	
	system("pause>0");
}
