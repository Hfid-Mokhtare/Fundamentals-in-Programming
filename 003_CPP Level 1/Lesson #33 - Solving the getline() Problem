// Befor using < cin.ignore(1,'\n') > 

#include <iostream>
#include <string>

using namespace std;


int main()
{

	int Number;
	string Name;
	string Country;

	cout << " Please enter Employee Number : \n";
	cin >> Number;

	/*if you need to  read a lot of input usin <getline(cin , varible)> function
	soo it beter to use <getline(cin >> ws, varible)> this help to remove all white spases
	and you do not need to using ignore() function enay more */
	
	
	cout << "Please enter Name : \n";
	getline(cin, Name);

	cout << " Please enter Country : \n";
	cin >> Country;

	cout << " Number : " << Number << ", Name : " << Name << ", Country : " << Country << endl;


  return 0;
}

*********************************************************************************

// After using < cin.ignore(1,'\n') > 

#include <iostream>
#include <string>

using namespace std;


int main()
{

	int Number;
	string Name;
	string Country;

	cout << " Please enter Employee Number : \n";
	cin >> Number;

	cout << "Please enter Name : \n";
	cin.ignore(1, '\n');
	getline(cin, Name);

	cout << " Please enter Country : \n";
	cin >> Country;

	cout << " Number : " << Number << ", Name : " << Name << ", Country : " << Country << endl;


  return 0;
}

