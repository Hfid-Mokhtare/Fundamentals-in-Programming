#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector <int> vNumber;

	for (int i = 10; i <= 100; i += 10)
	{
		vNumber.push_back(i);
	}

	for (int& Number : vNumber)
	{
		cout << Number<< endl;
	}
	

	return 0;
}


========================================================================

// Home Work Me and Prof : 
#include <iostream>
#include <vector>

using namespace std;

void PrintVector(vector <int> & vNumber);
void ReadVectorNumber(vector <int> & vNumber);

int main()
{

	vector <int> vNumber;

	ReadVectorNumber(vNumber);

	PrintVector(vNumber);
	

	return 0;
}

void PrintVector(vector <int> & vNumber)
{
	cout << "vectors Number : \n";

	for (int Number : vNumber)
	{
		cout << Number << endl;
	}
}

void ReadVectorNumber(vector <int> & vNumber)
{
	char ReadMore = ' ';
	int Number = 0;

 while (ReadMore == 'Y' || ReadMore == 'y')
        {

		cout << "Please enter a Number : ";
		cin >> Number;
		

		vNumber.push_back(Number);

		cout << "do you want to enter more Numbers (Y/N) ?";
		cin >> ReadMore;
		cout << endl;

	}
}
