#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector <int> Number = { 1,2,3,4,5 };

	cout << "Initial Vector : ";

	for (const int& i : Number) {
		cout << i << " ";
	}

	cout << endl;

	cout << "\nUpdated Vector : ";

	for (int& i : Number) {
		i = 20;
		cout << i << " ";
	}

	cout << endl;

	Number.at(0) = 20;
	Number.at(2) = 40;
	Number[4] = 60;


	cout << "\nUpdated Vector : ";

	for (const int& i : Number) {
		cout << i << " ";
	}

	cout << endl;


	
	return 0;
}
