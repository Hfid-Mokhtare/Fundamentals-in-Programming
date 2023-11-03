// Me : 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

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

sClient FileClientInfo(vector <string> vString)
{
	sClient Client;
	Client.AccountNumber = vString[0];
	Client.PinCode = vString[1];
	Client.Name = vString[2];
	Client.Phone = vString[3];
	Client.AccountBalance = stoi(vString[4]);

	return Client;
}

void PrintClientRecord(sClient Client)
{

	cout << "\nAccount Number  :" << Client.AccountNumber;
							   
	cout << "\nPinCode         :" << Client.PinCode;
							   
	cout << "\nName            :" << Client.Name;
							   
	cout << "\nPhone           :" << Client.Phone;
							   
	cout << "\nAccount Balance :" << Client.AccountBalance;
}

int main()
{

	string LineRecord = "A1234#//#22433627#//#Mohamed Ali Zeggaf#//#0622705149#//#5000.000000";

	cout << "\nLine Record is : \n\n";
	cout << LineRecord;

	vector <string> vString;
	vString = SplitWords(LineRecord, "#//#");

	sClient Client;
	Client = FileClientInfo(vString);

	cout << "\n\nThe following is the extracted client record : \n";
	PrintClientRecord(Client);

	system("pause>0");

	return 0;
}

===============================================================================

// Prof : 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

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

sClient ConvertLinetoRecord(string stLine, string Seperator = "#//#")
{
	sClient Client;
	vector <string> vString;

	vString = SplitWords(stLine, "#//#");
	
	Client.AccountNumber = vString[0];
	Client.PinCode = vString[1];
	Client.Name = vString[2];
	Client.Phone = vString[3];
	Client.AccountBalance = stod(vString[4]); // casting string to double

	return Client;
}

void PrintClientRecord(sClient Client)
{

	cout << "\nAccount Number  :" << Client.AccountNumber;
							   
	cout << "\nPinCode         :" << Client.PinCode;
							   
	cout << "\nName            :" << Client.Name;
							   
	cout << "\nPhone           :" << Client.Phone;
							   
	cout << "\nAccount Balance :" << Client.AccountBalance;
}

int main()
{

	string stLine = "A1234#//#22433627#//#Mohamed Ali Zeggaf#//#0622705149#//#5000.000000";
	cout << "\nLine Record is : \n\n";
	cout << stLine;

	sClient Client = ConvertLinetoRecord(stLine);

	cout << "\n\nThe following is the extracted client record : \n";
	PrintClientRecord(Client);

	system("pause>0");

	return 0;
}
