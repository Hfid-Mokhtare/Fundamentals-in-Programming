// Me : 
 #include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0;
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
		vString.push_back(S1); // it adds last word of the string.
	}

	return vString;
}

sClient ConvertLinetoRecord(string stLine, string Seperator = "#//#")
{
	sClient Client;
	vector <string> vClientData;

	vClientData = SplitWords(stLine, Seperator);

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]); // casting string to double

	return Client;
}

vector<sClient> LoadClientDataFromFile(string FileName)
{
	vector <sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in); //Read mode

	if (MyFile.is_open())
	{

		string Line = "";
		sClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLinetoRecord(Line);

			vClients.push_back(Client);
		}

		MyFile.close();

	}
	return vClients;
}

void PrintClientRecord(sClient Client)
{
	cout << "\nThe Following are Clent details :\n";

	cout << "\nAccount Number  :" << Client.AccountNumber;
	cout << "\nPinCode         :" << Client.PinCode;
	cout << "\nName            :" << Client.Name;
	cout << "\nPhone           :" << Client.Phone;
	cout << "\nAccount Balance :" << Client.AccountBalance;
}

void PrintClientInfo(vector <sClient> vClients, string ShercheFor)
{

	for (sClient Client : vClients)
	{
		if (Client.AccountNumber == ShercheFor)
		{
			PrintClientRecord(Client);
		}
		
	}

	cout << "\nClient With Account Number (" << ShercheFor << ") Not Found !\n";
}

int main()
{

	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);

	string ShercheFor = "";
	cout << "Please enter Acount Number :";
	cin >> ShercheFor;

	PrintClientInfo(vClients, ShercheFor);

	system("pause>0");
	return 0;
}

==============================================================================

// Prof : 
 #include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0;
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
		vString.push_back(S1); // it adds last word of the string.
	}

	return vString;
}

sClient ConvertLinetoRecord(string stLine, string Seperator = "#//#")
{
	sClient Client;
	vector <string> vClientData;

	vClientData = SplitWords(stLine, Seperator);

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]); // casting string to double

	return Client;
}

vector<sClient> LoadClientDataFromFile(string FileName)
{
	vector <sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in); //Read mode

	if (MyFile.is_open())
	{

		string Line = "";
		sClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLinetoRecord(Line);

			vClients.push_back(Client);
		}

		MyFile.close();

	}
	return vClients;
}

string ReadClientAccountNumber()
{
	string AccountNumber = "";
	cout << "\nPlease enter Account Number :";
	cin >> AccountNumber;
	return AccountNumber;
}

void PrintClientCard(sClient Client)
{
	cout << "\nThe Following are Client details :\n";

	cout << "\nAccount Number  :" << Client.AccountNumber;
	cout << "\nPinCode         :" << Client.PinCode;
	cout << "\nName            :" << Client.Name;
	cout << "\nPhone           :" << Client.Phone;
	cout << "\nAccount Balance :" << Client.AccountBalance;
}

bool FindClientUsingAccountNumber(string AccountNumber, sClient & Client)
{

	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);

	for (sClient C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}

	return false;
}

int main()
{
	sClient Client;
	string AccountNumber = ReadClientAccountNumber();
	
	if (FindClientUsingAccountNumber(AccountNumber, Client))
		PrintClientCard(Client);
	else
		cout << "\nClient With Account Number (" << AccountNumber << ") is Not Found !\n";
	

	system("pause>0");
	return 0;
}



