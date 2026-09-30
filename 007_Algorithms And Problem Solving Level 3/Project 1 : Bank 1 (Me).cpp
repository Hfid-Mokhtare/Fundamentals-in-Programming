// Me :
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0;
	bool MarkForDelet = false;
};

void PrintMainMenueScreen();
int ReadPositiveNumber(string);

vector <string> SplitWords(string, string);
void ShowClientList(vector <sClient>);
sClient ConvertLinetoRecord(string, string);
vector<sClient> LoadClientDataFromFile(string);
void PrintClientsRecord(sClient);
void PrintAllClientsData(vector <sClient>);

void SpisialMenue(string);

void AddClients(vector <sClient>);
void AddNewClients(vector <sClient>);
string ConvertRecordToLine(sClient, string);
sClient ReadNewClient(vector <sClient>);
void AddDataLineToFile(string, string);
bool IsClientExiste(string, vector <sClient>);

void DeleteClient(vector <sClient>);
bool DeleteClientByAccountNumber(string, vector <sClient>&);//&
bool MarkClientForDeleteByAccountNumber(string, vector <sClient>&);//&
bool FindClientUsingAccountNumber(string, sClient&, vector <sClient>);//&
vector <sClient> SaveCleintsDataToFile(string, vector <sClient>);
void PrintClientCard(sClient);
string ReadClientAccountNumber();

void UpdateClient(vector <sClient>);
bool UpdateClientByAccountNumber(string, vector <sClient>&);
sClient ChangeClientRecord(string);

void FindClient(vector <sClient>);

void Exit();

int main()
{
	short Choise = 0;
	
	do
	{
		system("cls");
		vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);
		PrintMainMenueScreen();
		Choise = ReadPositiveNumber("Choose what do you want to do : [1 to 6] ?");

		switch (Choise)
		{
		case 1:
			ShowClientList(vClients);
			break;
		case 2:
			AddClients(vClients);
			break;
		case 3:
			DeleteClient(vClients);
			break;
		case 4:;
			UpdateClient(vClients);
			break;
		case 5:;
			FindClient(vClients);
			break;
		case 6:
			Exit();
			break;
			
		}
	} while (Choise != 6);

	return 0;
}

void PrintMainMenueScreen()
{
	cout << "==================================================\n";
	cout << right << setw(35) << "Main Menue Screen\n";
	cout << "==================================================\n";
	cout << "\t[1] Show Client List.\n";
	cout << "\t[2] Add New Client.\n";
	cout << "\t[3] Delete Client.\n";
	cout << "\t[4] Update Client Info.\n";
	cout << "\t[5] Find Client.\n";
	cout << "\t[6] Exit.\n";
	cout << "==================================================\n";
}

int ReadPositiveNumber(string Message)
{
	short Number = 0;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 1 || Number>6);

	return Number;
}

void ShowClientList(vector <sClient> vClients)
{
	
	system("cls");
	PrintAllClientsData(vClients);
	cout << "\n\nPress any Key to go back to Main Menue...";
	system("pause>0");
}

void AddClients(vector <sClient> vClients)
{
	char AddMore = 'Y';
	do
	{
		SpisialMenue("Add New Clients Screen");
		AddNewClients(vClients);
		cout << "\nClient Added Successfully,do you want to add more clients ?(Y/N)";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');

	cout << "Press any Key to go back to Main Menue...";
	system("pause>0");
}

void SpisialMenue(string Message)
{
	system("cls");
	cout << "--------------------------------------------\n";
	cout << "\t" << Message << endl;
	cout << "--------------------------------------------\n";
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

void AddNewClients(vector <sClient> vClients)
{
	sClient Client;
	Client = ReadNewClient(vClients);
	AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));

}

void AddDataLineToFile(string FileName, string stDataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);

	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;

		MyFile.close();
	}
}

sClient ReadNewClient(vector <sClient> vClients)
{
	sClient Client;
	cout << "Add New Client :\n";
	cout << "Enter Account Number ?";
	getline(cin >> ws, Client.AccountNumber);

	if (IsClientExiste(Client.AccountNumber, vClients))
	{
		cout << "Client With [" << Client.AccountNumber << "] alredy exists,\n";
		cout << "Enter another Account Number ?";
		getline(cin >> ws, Client.AccountNumber);
	}
	
	cout << "Enter PinCode ?";
	getline(cin, Client.PinCode);

	cout << "Enter Name ?";
	getline(cin, Client.Name);

	cout << "Enter Phone ?";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance ?";
	cin >> Client.AccountBalance;

	return Client;
}

bool IsClientExiste(string AccountNumber, vector <sClient> vClients)
{

	for (sClient C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			return true;
		}
	}
	return false;
}

vector <string> SplitWords(string S1, string Delim)
{
	vector <string> vString;

	int Pos = 0;
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

string ReadClientAccountNumber()
{
	string AccountNumber = "";
	cout << "\nPlease enter Account Number :";
	cin >> AccountNumber;
	return AccountNumber;
}

void PrintClientCard(sClient Client)
{
	cout << "\nThe Following are Client details :";
	cout << "\n--------------------------------------------";
	cout << "\nAccount Number  :" << Client.AccountNumber;
	cout << "\nPinCode         :" << Client.PinCode;
	cout << "\nName            :" << Client.Name;
	cout << "\nPhone           :" << Client.Phone;
	cout << "\nAccount Balance :" << Client.AccountBalance;
	cout << "\n--------------------------------------------";

}

vector <sClient> SaveCleintsDataToFile(string FileName, vector <sClient> vClients)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out); // overwrite


	string DataLine;

	if (MyFile.is_open())
	{
		for (sClient& C : vClients)
		{
			if (C.MarkForDelet == false)
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

bool DeleteClientByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{
	sClient Client;
	char Answer = 'n';

	if (FindClientUsingAccountNumber(AccountNumber, Client, vClients))
	{
		PrintClientCard(Client);

		cout << "\n\nAre you sure you want delete this client? y/n ? ";
		cin >> Answer;

		if (toupper(Answer) == 'Y')
		{
			MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
			SaveCleintsDataToFile(ClientsFileName, vClients);

			//refrech Clients
			vClients = LoadClientDataFromFile(ClientsFileName);

			cout << "\n\nClient Deleted Successfully.";
			return true;

		}

	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";;
		return false;
	}

}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{

	for (sClient& C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelet = true;
			return true;
		}
	}
	return false;
}

void DeleteClient(vector <sClient> vClients)
{
	system("cls");
	SpisialMenue("Delete Clients Screen");
	string AccountNumber = ReadClientAccountNumber();
	DeleteClientByAccountNumber(AccountNumber, vClients);
	cout << "\n\nPress any Key to go back to Main Menue...";
	system("pause>0");
}

void UpdateClient(vector <sClient> vClients)
{
	system("cls");
	SpisialMenue("Update Client Info Screen");
	string AccountNumber = ReadClientAccountNumber();
	UpdateClientByAccountNumber(AccountNumber, vClients);
	cout << "\n\nPress any Key to go back to Main Menue...";
	system("pause>0");
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

			//refrech Clients
			vClients = LoadClientDataFromFile(ClientsFileName);

			cout << "\n\nClient Updated Successfully.";
			return true;

		}
		//return true;

	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
		return false;
	}

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

void FindClient(vector <sClient> vClients)
{
	sClient Client;
	system("cls");
	SpisialMenue("Find Client Screen");
	string AccountNumber = ReadClientAccountNumber();
	FindClientUsingAccountNumber(AccountNumber, Client, vClients);
	PrintClientCard(Client);
	cout << "\n\nPress any Key to go back to Main Menue...";
	system("pause>0");
}

void Exit()
{
	system("cls");
	SpisialMenue("Program Ends :>)");
	system("pause>0");
	exit(0);
}
