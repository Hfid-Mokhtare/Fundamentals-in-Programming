#include <iostream>

using namespace std;

int main()
{
	int Arr[4] = { 10,20,30,40 };
	int* ptr = Arr;
	ptr = Arr;

	//ptr is equivalent to &Arr[0];
	// ptr + 1 is equivalent to &Arr[1];
	// ptr + 1 is equivalent to &Arr[2];
	// ptr + 1 is equivalent to &Arr[3];
	
	cout << "Address Are : \n";

	cout << (ptr) << endl;
	cout << (ptr + 1) << endl;
	cout << (ptr + 2) << endl;
	cout << (ptr + 3) << endl;

	cout << "\nThe value of etche addres is : \n";

	cout << *(ptr) << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;



	return 0;
}

=================================================================

//the same problem but whith using for loop
#include <iostream>

using namespace std;

int main()
{
	int Arr[4] = { 10,20,30,40 };
	int* ptr;
	ptr = Arr;
	

	//ptr is equivalent to &Arr[0];
	// ptr + 1 is equivalent to &Arr[1];
	// ptr + 1 is equivalent to &Arr[2];
	// ptr + 1 is equivalent to &Arr[3];
	
	
	cout << "Address Are : \n";
	for (int i = 0; i < 4; i++)
	{
		 
		cout << (ptr + i) << endl;
		
	}

	ptr = Arr;

	cout << "\nThe value of etche address is : \n";
	for (int i = 0; i < 4; i++)
	{
		cout << *(ptr + i) << endl;
	}

	return 0;
}

=======================================================

//the same problem but whith using Range loop

#include <iostream>

using namespace std;

int main()
{
	int Arr[4] = { 10,20,30,40 };
	
	cout << "Address Are : \n";
	for (int &address : Arr)
	{
		 
		cout << &address << endl;
		
	}

	cout << "\nThe value of etche address is : \n";
	for (int& values : Arr)
	{

		cout << values << endl;

	}

	return 0;
}


