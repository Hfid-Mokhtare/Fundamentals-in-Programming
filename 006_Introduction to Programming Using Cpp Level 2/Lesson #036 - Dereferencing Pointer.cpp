#include <iostream>
#include <vector>

using namespace std;

int main()
{

	int a = 10;
	int *p = &a;

	cout << "The value of a = " << a << endl;
	cout << "The value of p = " << p << endl;

	//print p = 10
	cout << "The value of p after dereferencing : " << *p << endl;

	*p = 20;

	//print a = 20
	cout << "we change the value of a using the pointer : a = " << a << endl;

	a = 30;

	//print a = 30
	cout << "we change the value of a using the same variable : a = " << a << endl;





	return 0;
}
