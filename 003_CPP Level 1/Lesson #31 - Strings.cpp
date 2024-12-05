// Q1 :  getline(cin, <variable name to input in>)
//there is a nother methode to reade data whitout problem , (i learn this methote in cours number 7 and i note it here to remanber it)

// Usage of std::ws will extract allthe whitespace character
//getline(cin >> ws,<variable name to input in>);

#include <iostream>
#include <string>

using namespace std;


int main() {
	
	string st1, st2, st3;

	cout << "Please enter string1 : ";
	getline(cin, st1);
	cout << "Please enter string2 : ";
	cin >> st2;
	cout << "Please enter string3 : ";
	cin >> st3;

	cout << "**********************************" << endl;
	cout << "the length of string1 is : " << st1.length() << endl;
	cout << "caracters at 2 , 4 , 5 , 7 are : ";
	cout << st1[1] << " " << st1[3] << " " << st1[5] << " " << st1[6] << endl;
	cout << "Concatunating string1 and string2 : ";
	cout << st3 + st2;

	
	

	return 0;
}
