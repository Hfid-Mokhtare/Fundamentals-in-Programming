// Me : 
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const string ClientsFileName = "Clients.txt";

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

void LoadDataFromFileToVector(vector <string>& vFileContent)
{
	
	fstream MyFile;
	MyFile.open(ClientsFileName, ios::in); //Read mode
	string Line = "";

	if (MyFile.is_open())
	{
		while (getline(MyFile, Line))
		{
			vFileContent.push_back(Line);
		}
	}
}

vector<string> GetLineContent(string S1)
{
	return SplitWords(S1, "#//#");
}

void PrintLineContent(string S1)
{
	vector <string> vLineContent;
	vLineContent = GetLineContent(S1);

	
	cout << "|" << setw(20) << left << vLineContent[0]
		<< "|" << setw(15) << vLineContent[1] << left
		<< "|" << setw(30) << vLineContent[2] << left
		<< "|" << setw(15) << vLineContent[3] << left
		<< "|" << setw(20) << vLineContent[4] << left;
	cout << endl;
}

void PrintClientsRecord(vector <string> vFileContent)
{
	for (int i = 0; i < vFileContent.size(); i++)
	{
		PrintLineContent(vFileContent[i]);
	}
	
}

void ClientTableHader(int NumberOfClients)
{
	cout << setw(45) << "Client List (" << NumberOfClients << ") Client(s)\n" << endl;

	cout << "-------------------------------------------------------------------------------------------------------\n";

	cout << "|" << setw(20) << left << "Account Number" << "|" << setw(15) << left << "PinCode" << "|" << setw(30) << left
		 << "Client Name" << "|" << setw(15) << left << "Phone" << "|" << setw(20) << left << "Account Balance" << endl;

	cout << "-------------------------------------------------------------------------------------------------------\n";

}

void PrintClientsData()
{

	vector <string> vFileContent;

	LoadDataFromFileToVector(vFileContent);
	ClientTableHader(vFileContent.size());
	PrintClientsRecord(vFileContent);
}

int main()
{
	PrintClientsData();
	
	system("pause>0");
	return 0;
}

======================================================================

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

void PrintClientsRecord(sClient Client)
{
	cout << "|" << left << setw(20) << Client.AccountNumber;
	cout << "|" << left << setw(15) << Client.PinCode;
	cout << "|" << left << setw(30) << Client.Name;
	cout << "|" << left << setw(15) << Client.Phone;
	cout << "|" << left << setw(20) << Client.AccountBalance;
	cout << "|";
}

void PrintAllClientsData(vector <sClient> vClients)
{

	cout << "\t\t\t\t\tClient List (" << vClients.size() << ") Client(s)\n" << endl;
	cout << "+--------------------+---------------+------------------------------+---------------+--------------------+\n";
	cout << "|" << left << setw(20) << "Account Number";
	cout << "|" << left << setw(15) << "PinCode";
	cout << "|" << left << setw(30) << "Client Name";
	cout << "|" << setw(15) << left << "Phone";
	cout << "|" << left << setw(20) << "Account Balance";
	cout << "|" << endl;
	cout << "+--------------------+---------------+------------------------------+---------------+--------------------+\n";

	for (sClient Client : vClients)
	{
		PrintClientsRecord(Client);
		cout << endl;
	}

	cout << "+--------------------+---------------+------------------------------+---------------+--------------------+\n";

}

int main()
{

	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);

	PrintAllClientsData(vClients);

	system("pause>0");
	return 0;
}



