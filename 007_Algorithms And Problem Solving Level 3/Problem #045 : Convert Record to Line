// Me : 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct stClientInfo 
{

	string AccountNumber = "";
	int PinCode = 0;
	string Name = "";
	string Phone = "";
	int AccountBalance = 0;

};

stClientInfo ReadClientInfo()
{
	stClientInfo ClientInfo;

	cout << "Enter Account Number ?";
	cin >> ClientInfo.AccountNumber;

	cout << "Enter PinCode ?";
	cin >> ClientInfo.PinCode;

	cout << "Enter Name ?";
	cin.ignore(1, '\n');
	getline(cin, ClientInfo.Name);

	cout << "Enter Phone ?";
	cin >> ClientInfo.Phone;

	cout << "Enter Account Balance ?";
	cin >> ClientInfo.AccountBalance;

	return ClientInfo;
}

vector<string> PushInfoInVector(stClientInfo ClientInfo)
{
	vector <string> vClientInfo;

	vClientInfo.push_back(ClientInfo.AccountNumber);
	vClientInfo.push_back(to_string(ClientInfo.PinCode));
	vClientInfo.push_back(ClientInfo.Name);
	vClientInfo.push_back(ClientInfo.Phone);
	vClientInfo.push_back(to_string(ClientInfo.AccountBalance));

	return vClientInfo;
}

string JoinString(vector <string> vString, string Delim)
{
	string S1 = "";

	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}

	return S1.substr(0, S1.length() - Delim.length());
}



int main()
{

	stClientInfo ClientInfo;

	ClientInfo = ReadClientInfo();
	vector <string> vClientInfo = PushInfoInVector(ClientInfo);

	cout << "\nClient Record for Saving is : \n";
	cout << JoinString(vClientInfo, "#//#");

	system("pause>0");
}

=======================================================================

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

sClient ReadNewClient()
{
	sClient Client;

	cout << "Enter Account Number ?";
	getline(cin, Client.AccountNumber);

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

string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.Phone + Seperator;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;

}

int main()
{
	cout << "\nPlease Enter Client Data: \n\n";

	sClient Client;
	Client = ReadNewClient();

	cout << "\n\nClient Record for Saving is : \n";
	cout << ConvertRecordToLine(Client);

	system("pause>0");

	return 0;
}
