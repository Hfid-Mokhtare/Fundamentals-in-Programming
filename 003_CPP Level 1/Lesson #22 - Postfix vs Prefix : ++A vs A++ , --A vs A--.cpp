
//Example :
 
#include <iostream>
using namespace std;


int main()
{
	int A = 10;
	int B = A++; //B will take the old value of A, then Awill increase by 1 

	cout << " B = " << B << endl;
	cout << " A = " << A << endl;

	B = ++A;// A will increase by 1, then B will take the new value 
	cout << " B = " << B << endl;
	cout << " A = " << A << endl;


	return 0;
}

//Result :
// B = 10
// A = 11
// B = 12
// A = 12
