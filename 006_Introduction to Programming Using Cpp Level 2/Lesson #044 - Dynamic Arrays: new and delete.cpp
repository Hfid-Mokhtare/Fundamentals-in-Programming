#include <iostream>

using namespace std;


int main()
{
	int num;
	cout << "Please enter totale number of student ?\n";
	cin >> num;

	float* ptr;

	//memory allocation of num number of floats 
	ptr = new float[num];

	cout << "enter student grades : \n";

	for (int i = 0; i < num; ++i) {
		cout << "student " << i + 1 << ": ";
		cin >> *(ptr + i);
	}

	cout << "\nDisplaying grades of students : \n";
	for (int i = 0; i < num; ++i) {
		cout << "student " << i + 1 << ": " << *(ptr + i) << endl;
	}

	//ptr memory is released
	delete[] ptr;
	
	return 0;
}
