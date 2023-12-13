// Me and Prof :

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

//A001#//#1234#//#Jepan#//#0987654364#//#5000
//A002#//#1234#//#China#//#0987654364#//#4000
//A003#//#1234#//#Hindia#//#0987654364#//#3000
//A004#//#1234#//#America#//#0987654364#//#2000
//A005#//#1234#//#Rusia#//#0987654364#//#1000

const string ClientsFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0;
	bool MarkForDelete = false;
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

string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + Separator;
	stClientRecord += Client.PinCode + Separator;
	stClientRecord += Client.Name + Separator;
	stClientRecord += Client.Phone + Separator;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;

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

sClient ChangeClientRecord(string AccountNumber)
{
	sClient Client;

	Client.AccountNumber = AccountNumber;

	cout << "\n\nEnter PinCode ?";
	getline(cin >> ws, Client.PinCode);

	cout << "Enter Name ?";
	getline(cin, Client.Name);

	cout << "Enter Phone ?";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance ?";
	cin >> Client.AccountBalance;

	return Client;
	
}

vector <sClient> SaveCleintsDataToFile(string FileName, vector <sClient> vClients)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out); // overwrite

	string DataLine;

	if (MyFile.is_open())
	{
		for (sClient C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				//we only write records that are not marked for delete. 
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}
		}

		MyFile.close();
	}
	return vClients;
}

bool FindClientUsingAccountNumber(string AccountNumber, sClient& Client, vector <sClient> vClients)
{

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

bool UpdateClientByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{
	sClient Client;
	char Answer = 'n';

	if (FindClientUsingAccountNumber(AccountNumber, Client, vClients))
	{
		PrintClientCard(Client);

		cout << "\n\nAre you sure you want to Update this client? y/n ? ";
		cin >> Answer;

		if (Answer == 'Y' || Answer == 'y')
		{

			for (sClient& C : vClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;
				}
			}

			SaveCleintsDataToFile(ClientsFileName, vClients);

			cout << "\n\nClient Updated Successfully.";
			return true;

		}
		//return true;

	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";;
		return false;
	}

}

int main()
{
	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	UpdateClientByAccountNumber(AccountNumber, vClients);

	system("pause>0");
	return 0;
}


