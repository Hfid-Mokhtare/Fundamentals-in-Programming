#include <iostream>
using namespace std;

double MySum(double a, double b)
{
	return a + b;
}

int MySum(int a, int b)
{
	return a + b ;
}

int MySum(int a, int b, int c)
{
	return a + b + c;
}

int MySum(int a, int b, int c, int d)
{
	return a + b + c + d;
}

int main()
{
	
	cout << MySum(2.3, 3.3) << endl;


	return 0;
}
