#include <iostream>

using namespace std;

int main()
{

	int x = 10, * p;
	
	//Wrong !
	//p is an address but x is not
	p = a;

	//Correcte !
	//p is an addres so p is &x
	p = &x;

	//Wrong !
	// &x is an address
	//*p is the value stored in &x
	*p = &x;

	//Correcte !
	//*p is the value and so x
	*p = x;

	return 0;
}
