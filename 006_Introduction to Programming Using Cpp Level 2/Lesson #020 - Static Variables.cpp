#include <iostream>
using namespace std;

void MyFunc()
{
	int Number = 1;

	cout << "Number Value = " << Number << endl;
	Number++;
}

void MyFuncstatic()
{
	static int Number = 1;

	cout << "Number Value = " << Number << endl;
	Number++;
}



int main()
{
	cout << "Withe out using static variable : \n";

	MyFunc(); //1
	MyFunc(); //1
	MyFunc(); //1

	cout << "\n Withe using static variable : \n";

	MyFuncstatic(); //1
	MyFuncstatic(); //2
	MyFuncstatic(); //3


	return 0;
}
