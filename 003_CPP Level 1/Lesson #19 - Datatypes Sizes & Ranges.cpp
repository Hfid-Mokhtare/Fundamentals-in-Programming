//Sizes Progrme :

#include <iostream>
using namespace std;


int main()
{
	cout << "The size of bool data type is " << sizeof(bool) << " Byte\n";
	cout << "The size of char data type is " << sizeof(char) << " Byte\n";
	cout << "The size of short data type is " << sizeof(short) << " Byte\n";
	cout << "The size of int data type is " << sizeof(int) << " Byte\n";

	cout << "The size of int long data type is " << sizeof(long) << " Byte\n";
	cout << "The size of int long long data type is " << sizeof(long long) << " Byte\n";

	cout << "The size of float data type is " << sizeof(float) << " Byte\n";
	cout << "The size of double data type is " << sizeof(double) << " Byte\n";



	return 0;
}

//outpute of Sizes Progrme :

The size of bool data type is 1 Byte
The size of char data type is 1 Byte
The size of short data type is 2 Byte
The size of int data type is 4 Byte
The size of int long data type is 4 Byte
The size of int long long data type is 8 Byte
The size of float data type is 4 Byte
The size of double data type is 8 Byte

//Ranges programe :

#include <iostream>
using namespace std;


int main()
{
	cout << " **********************************************************************\n";
	cout << "char Range : (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
	cout << "unsigned char Range : (" << 0 << ", " << UCHAR_MAX << ")\n";

	cout << "short Range : (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
	cout << "unsigned short Range : (" << 0 << ", " << USHRT_MAX << ")\n\n";

	cout << "int Range : (" << INT_MIN << ", " << INT_MAX << ")\n";
	cout << "unsigned int Range : (" << 0 << ", " << UINT_MAX << ")\n";
	cout << "long int Range : (" << LONG_MIN << ", " << LONG_MAX << ")\n";
	cout << "unsigned long int Range : (" << 0 << ", " << ULONG_MAX << ")\n\n";

	cout << "long long int Range : (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
	cout << "unsigned long long int Range : (" << 0 << ", " << ULLONG_MAX << ")\n\n";

	cout << "float Range : (" << FLT_MIN << ", " << FLT_MAX << ")\n";
	cout << "float(nrgative) Range : (" << -FLT_MIN << ", " << -FLT_MAX << ")\n\n";

	cout << "double Range : (" << DBL_MIN << ", " << DBL_MAX << ")\n";
	cout << "double(nrgative) Range : (" << -DBL_MIN << ", " << -DBL_MIN << ")\n";




	return 0;
}

//outpute of Ranges programe :

**********************************************************************
char Range : (-128, 127)
unsigned char Range : (0, 255)
short Range : (-32768, 32767)
unsigned short Range : (0, 65535)

int Range : (-2147483648, 2147483647)
unsigned int Range : (0, 4294967295)
long int Range : (-2147483648, 2147483647)
unsigned long int Range : (0, 4294967295)

long long int Range : (-9223372036854775808, 9223372036854775807)
unsigned long long int Range : (0, 18446744073709551615)

float Range : (1.17549e-38, 3.40282e+38)
float(nrgative) Range : (-1.17549e-38, -3.40282e+38)

double Range : (2.22507e-308, 1.79769e+308)
double(nrgative) Range : (-2.22507e-308, -2.22507e-308)

