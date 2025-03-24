#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;
const string ClientsFileName = "Clients.txt";

void ShowMainMenue();
void ShowTransactionsMenue();

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0;
	bool MarkForDelet = false;
};

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

	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
		return false;
	}

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

bool ClientExistsByAccountNumber(string AccountNumber, string FileName)
{
	vector <sClient> vClient;
	fstream MyFile;
	MyFile.open(FileName, ios::in); //read Mode

	if (MyFile.is_open())
	{
		string Line;
		sClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLinetoRecord(Line);
			if (Client.AccountNumber == AccountNumber)
			{
				MyFile.close();
				return true;
			}
			vClient.push_back(Client);
		}

		MyFile.close();

	}
	return false;
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

sClient ReadNewClient()
{
	sClient Client;
	cout << "Enter Account Number ?";

	//usage of std::ws will extract all the white space character
	getline(cin >> ws, Client.AccountNumber);

	while (ClientExistsByAccountNumber(Client.AccountNumber, ClientsFileName))
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

void AddNewClient()
{
	sClient Client;
	Client = ReadNewClient();
	AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));

}

void AddNewClients()
{
	char AddMore = 'Y';
	do
	{
		cout << "Adding New Client:\n\n";

		AddNewClient();
		cout << "\nClient Added Successfully,do you want to add more clients ?(Y/N)";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');

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

void PrintTransClientsRecord(sClient Client)
{
	cout << "|" << left << setw(20) << Client.AccountNumber;
	cout << "|" << left << setw(30) << Client.Name;
	cout << "|" << left << setw(20) << Client.AccountBalance;
	cout << "|";
}

void GoBackToMainMenue()
{
	cout << "\n\nPress any Key to go back to Main Menue...";
	system("pause>0");
	ShowMainMenue();
}

void GoBackToTransMenue()
{
	cout << "\n\nPress any Key to go back to Transaction Menue...";
	system("pause>0");
	ShowTransactionsMenue();
}

enum enMainMenueOption
{
	eListClients = 1, eAddNewClient = 2,
	eDeleteClient = 3, eUpdateClient = 4,
	eFindClient = 5, eShowTransactionsMenue=6,
	eExit = 7
};

enum enTransactionsMenueOption
{
	eDeposit = 1, eWithdraw = 2,
	eShowTotalBalances = 3, eShowMainMenue = 4
};

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

string ReadClientAccountNumber()
{
	string AccountNumber = "";
	cout << "\nPlease enter Account Number :";
	cin >> AccountNumber;
	return AccountNumber;
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

bool DepositBalanceToClientByAccountNumber(string AccountNumber, double Amount, vector <sClient>& vClients)
{
	
	char Answer = 'n';
	
	cout << "\n\nAre you sure you want perform this transaction? y/n ? ";
	cin >> Answer;

	if (Answer == 'Y' || Answer == 'y')
	{
		for (sClient& C : vClients)
		{
			if (C.AccountNumber == AccountNumber)
			{
				C.AccountBalance += Amount;
				SaveCleintsDataToFile(ClientsFileName, vClients);
				cout << "\n\nDone Successfully. New balance is: " << C.AccountBalance;

				return true;
			}
		}
	}

	return false;
}



void ShowAllClientsScreen()
{
	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);

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

void ShowUpdateClientsScreen()
{
	cout << "\n--------------------------------------------\n";
	cout << "\tUpdate Client Info Screen";
	cout << "\n--------------------------------------------\n";

	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();
	UpdateClientByAccountNumber(AccountNumber, vClients);

}

void ShowDeleteClientsScreen()
{
	cout << "\n--------------------------------------------\n";
	cout << "\tDelete Clients Screen";
	cout << "\n--------------------------------------------\n";

	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();
	DeleteClientByAccountNumber(AccountNumber, vClients);
}

void ShowAddNewClientsScreen()
{
	cout << "\n--------------------------------------------\n";
	cout << "\tAdd New Clients Screen";
	cout << "\n--------------------------------------------\n";

	AddNewClients();
}

void ShowFindClientsScreen()
{
	cout << "\n--------------------------------------------\n";
	cout << "\tFind Clients Screen";
	cout << "\n--------------------------------------------\n";

	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);
	sClient Client;
	string AccountNumber = ReadClientAccountNumber();
	if (FindClientUsingAccountNumber(AccountNumber, Client, vClients))
		PrintClientCard(Client);
	else
		cout << "\nClient with Account Number[" << AccountNumber << "] is Not found!";
}

void ShowEndScreen()
{
	cout << "\n--------------------------------------------\n";
	cout << "\tProgram Ends :-)";
	cout << "\n--------------------------------------------\n";
}


void ShowDepositScreen()
{
	cout << "\n--------------------------------------------\n";
	cout << "\tDeposit Screen";
	cout << "\n--------------------------------------------\n";

	sClient Client;

	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	while(!FindClientUsingAccountNumber(AccountNumber, Client, vClients))
	{
		cout << "\nClient with [" << AccountNumber << "] does not exist";
		AccountNumber = ReadClientAccountNumber();
	}

	PrintClientCard(Client);

	double Amount = 0;
	cout << "\n\nPlease enter deposit amount ? ";
	cin >> Amount;

	DepositBalanceToClientByAccountNumber(AccountNumber, Amount, vClients);
}

void ShowWithdrawScreen()
{
	cout << "\n--------------------------------------------\n";
	cout << "\Withdraw Screen";
	cout << "\n--------------------------------------------\n";

	sClient Client;

	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	while (!FindClientUsingAccountNumber(AccountNumber, Client, vClients))
	{
		cout << "\nClient with [" << AccountNumber << "] does not exist";
		AccountNumber = ReadClientAccountNumber();
	}

	PrintClientCard(Client);

	double Amount = 0;
	cout << "\n\nPlease enter Withdraw amount ? ";
	cin >> Amount;

	while (Amount > Client.AccountBalance)
	{
		cout << "Amount Exceeds the balance, you can withdrow up to : "
			<< Client.AccountBalance << endl;
		cout << "\n\nPlease enter deposit amount ? ";
		cin >> Amount;
	}

	DepositBalanceToClientByAccountNumber(AccountNumber, Amount * -1, vClients);

}

void ShowTotalBalancesScreen()
{
	vector <sClient> vClients = LoadClientDataFromFile(ClientsFileName);
	

	cout << "\n+------------------------------------------------------------------------+\n";

	cout << "|\t\t\tBalances List (" << vClients.size() << ") Client(s)\t\t\t |" << endl;
	cout << "+--------------------+------------------------------+--------------------+\n";
	cout << "|" << left << setw(20) << " Account Number";
	cout << "|" << left << setw(30) << " Client Name";
	cout << "|" << left << setw(20) << " Balance";
	cout << "|" << endl;
	cout << "+--------------------+------------------------------+--------------------+\n";

	double TotalBalances = 0;

	if (vClients.size() == 0)
		cout << "\t\tNo Clients Available In the System!";
	else
		for (sClient Client : vClients)
		{
			PrintTransClientsRecord(Client);
			TotalBalances += Client.AccountBalance;

			cout << endl;
		}
	cout << "+--------------------+------------------------------+--------------------+\n";
	cout << "\t\t\t\Total Balances =" << TotalBalances << endl;
}


short ReadMainMenueOption()
{
	short Choice = 0;
	cout << "Choose what do you want to do : [1 to 7] ?";
	cin >> Choice;

	return Choice;
}

short ReadTransactionsMenueOption()
{
	short Choice = 0;
	cout << "Choose what do you want to do : [1 to 4] ?";
	cin >> Choice;

	return Choice;
}


void PerformTransactionMenueOption(enTransactionsMenueOption TransactionMenueOption)
{

	switch (TransactionMenueOption)
	{
	case enTransactionsMenueOption::eDeposit:
		system("cls");
		ShowDepositScreen();
		GoBackToTransMenue();
		break;

	case enTransactionsMenueOption::eWithdraw:
		system("cls");
		ShowWithdrawScreen();
		GoBackToTransMenue();
		break;

	case enTransactionsMenueOption::eShowTotalBalances:
		system("cls");
		ShowTotalBalancesScreen();
		GoBackToTransMenue();
		break;

	case enTransactionsMenueOption::eShowMainMenue:
		
		ShowMainMenue();
		break;
	}

}

void ShowTransactionsMenue()
{
	system("cls");
	cout << "==================================================\n";
	cout << right << setw(35) << "Transaction Menue Screen\n";
	cout << "==================================================\n";
	cout << "\t[1] Deposit.\n";
	cout << "\t[2] Withdraw.\n";
	cout << "\t[3] Total Balances.\n";
	cout << "\t[4] Main Menue.\n";
	cout << "==================================================\n";
	PerformTransactionMenueOption((enTransactionsMenueOption)ReadTransactionsMenueOption());
}

void PerformMainMenueOption(enMainMenueOption MainMenueOption)
{
	switch (MainMenueOption)
	{
	case enMainMenueOption::eListClients:
		system("cls");
		ShowAllClientsScreen();
		GoBackToMainMenue();
		break;

	case enMainMenueOption::eAddNewClient:
		system("cls");
		ShowAddNewClientsScreen();
		GoBackToMainMenue();
		break;

	case enMainMenueOption::eDeleteClient:
		system("cls");
		ShowDeleteClientsScreen();
		GoBackToMainMenue();
		break;

	case enMainMenueOption::eUpdateClient:
		system("cls");
		ShowUpdateClientsScreen();
		GoBackToMainMenue();	
		break;

	case enMainMenueOption::eFindClient:
		system("cls");
		ShowFindClientsScreen();
		GoBackToMainMenue();
		break;

	case enMainMenueOption::eShowTransactionsMenue:
		system("cls");
		ShowTransactionsMenue();
		break;

	case enMainMenueOption::eExit:
		system("cls");
		ShowEndScreen();
		
		break;
	}
}

void ShowMainMenue()
{
	system("cls");
	cout << "==================================================\n";
	cout << right << setw(35) << "Main Menue Screen\n";
	cout << "==================================================\n";
	cout << "\t[1] Show Client List.\n";
	cout << "\t[2] Add New Client.\n";
	cout << "\t[3] Delete Client.\n";
	cout << "\t[4] Update Client Info.\n";
	cout << "\t[5] Find Client.\n";
	cout << "\t[6] Transactions.\n";
	cout << "\t[7] Exit.\n";
	cout << "==================================================\n";
	PerformMainMenueOption((enMainMenueOption)ReadMainMenueOption());
}

int main()
{
	ShowMainMenue();
	system("pause>0");

	return 0;
}
