//Me : 
#include <iostream>
#include <string>

using namespace std;

string ReadPassword(string Message)
{
	string Password = "";

	cout << Message;
	cin >> Password;

	return Password;
}

void PrintAllWordsFromAAAtoZZZ(string Password)
{

	cout << "\n";
	string word = "";
	int counter = 1;

	for (int _1 = 65; _1 <=90; _1++)
	{
		for (int _2 = 65; _2 <= 90; _2++)
		{
			for (int _3 = 65; _3 <= 90; _3++)
			{
				word = word + char(_1);
				word = word + char(_2);
				word = word + char(_3);

				cout << "trial [" << counter << "] : " << word << endl;

				if (word == Password)
				{
					cout << "\nPassword is : "<< word;
					cout << "\nFound after " << counter << " Trial(s)\n";
					exit (0);
				}

				counter++;
				word = "";
			}
		}
		cout << "\n----------------------------\n";
	}


}

int main()
{
	PrintAllWordsFromAAAtoZZZ(ReadPassword("Please Enter a Password to check : "));

	return 0;
}

=============================================================================================

//Prof : 
#include <iostream>
#include <string>

using namespace std;

string ReadPassword()
{
	string Password = "";

	cout << "Please enter a 3-Letter Password (all capital) : \n";
	cin >> Password;

	return Password;
}

bool GuessPassword(string OriginalPassword)
{
	string word = "";
	int counter = 0;

	cout << "\n";
	for (int _1 = 65; _1 <=90; _1++)
	{
		for (int _2 = 65; _2 <= 90; _2++)
		{
			for (int _3 = 65; _3 <= 90; _3++)
			{
				counter++;

				word = word + char(_1);
				word = word + char(_2);
				word = word + char(_3);

				cout << "trial [" << counter << "] : " << word << endl;

				if (word == OriginalPassword)
				{
					cout << "\nPassword is : " << word << "\n";
					cout << "Found after " << counter << " Trial(s)\n";
					return true;
				}

				
				word = "";
			}
		}
		
	}

	return false;

}

int main()
{
	GuessPassword(ReadPassword());

	return 0;
}
