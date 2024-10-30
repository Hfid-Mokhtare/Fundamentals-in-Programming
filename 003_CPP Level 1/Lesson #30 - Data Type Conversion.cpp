#include <iostream>
#include <string>

using namespace std;


int main() {
	
	string st1 = "43.22";
	int N1 = 20;
	double N2 = 33.5;
	float N3 = 55.23;

	cout << "st1 = " << st1 << endl;
	cout << "N1 = " << N1 << endl;
	cout << "N2 = " << N2 << endl;
	cout << "N3 = " << N3 << endl;


	cout << "string \"st1\" to doubel : " << stod(st1) << endl;
	cout << "string \"st1\" to float : " << stof(st1) << endl;
	cout << "string \"st1\" to int : " << stoi(st1) << endl;

	cout << "integer \"N1\" to string : " << to_string(N1) << endl;

	cout << "double \"N2\" to string : " << to_string(N2) << endl;;

	cout << "float \"N3\" to string : " << to_string(N3) << endl;
	cout << "float \"N3\" to int : " << int(N3) << endl;






	return 0;
}
