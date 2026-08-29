#include <iostream>
#include <string>

using namespace std;

int main()
{

	string S1 = "My Name is Mohammed Ali Zeggaf";

	//Print the length of the string 
	cout << S1.length() << endl;

	//Returns the letter at position 3
	cout << S1.at(3) << endl;

	//adds I'm 18 years old to the end of string
	S1.append(" I'm 18 years old");
	cout << S1 << endl;

	//inserts Hello ! at position 0
	S1.insert(0, "Hello ! ");
	cout << S1 << endl;

	// to delet a word use function < erase() >
	//S1.erase(<position to starte from>, < length to delete >);
	

	//Print all the next 13 letters from position 10
	cout << S1.substr(19, 12)<<endl;
	
	//Adds one character to the end of the string
	S1.push_back('|');
	cout << S1 << endl;

	//Removes one character from the end of the string
	S1.pop_back();
	cout << S1 << endl;

	//Finds Mohammes Ali int the string 
	cout << S1.find("Mohammed Ali") << endl;
	//Finds mohammes ali int the string 
	cout << S1.find("mohammed ali") << endl;

	if (S1.find("mohammed ali") == S1.npos)
	{
		cout << "mohammed ali is not found \n";
	}

	//clears all string letters
	S1.clear();
	cout << S1 << endl;

	//get the end of string 
	cout << S1.end();

	//get the begining of string 
	cout << S1.begin();


	
	
	return 0;
}
