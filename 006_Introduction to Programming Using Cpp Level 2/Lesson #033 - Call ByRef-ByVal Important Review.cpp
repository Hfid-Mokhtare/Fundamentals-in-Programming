#include <iostream>


using namespace std;

//defrante addresses
void MyFunction1(int x)
{
	x++;
	cout << "the address of a After calling MyFunction() is : " << &x << endl ;
}

//same addresses
void MyFunction2(int &x)
{
	x++;
	cout << "the address of a After calling MyFunction() is : " << &x << endl;
}


int main()
{
	int a = 10;
	cout << "befor calling MyFunction1() :  a = " << a << endl;
	cout << "the address of a befor calling MyFunction() is : " << &a << endl << endl;

	MyFunction1(a);
	cout << "After calling MyFunction1() whithout & :  a = " << a << endl << endl;
	

	MyFunction2(a);
	cout << "After calling MyFunction2() whithe &:  a = " << a << endl << endl;
	
	

	return 0;
}
