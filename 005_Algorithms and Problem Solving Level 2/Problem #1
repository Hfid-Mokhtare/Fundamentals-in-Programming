//Me :
#include <iostream>
using namespace std;

void Heder()
{
	cout << "\n\n			Multiplication Table From 1 to 10\n\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	for (int i = 1; i <= 83; i++)
	{
		cout << "_";
	}
	cout << endl;
}

void TableMenue(int i)
{
		if (i == 10)
			cout << i << "  |   ";
		else
			cout << i << "   |   ";
}

void BadyOfTabel()
{
	for (int i = 1; i <= 10; i++)
	{
		TableMenue(i);
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
		
	}
}

int main()
{
	Heder();
	
	BadyOfTabel();
	
	return 0;
}

==================================================================
//Prof :
#include <iostream>
using namespace std;

void PrintTableHeder()
{
	cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	for (int i = 1; i <= 83; i++)
	{
		cout << "_";
	}
	cout << endl;
} 

string ClumSperator(int i)
{
	if (i == 10)
		return "  |  ";
	else
		return  "   |  ";
}

void PrintMultiplicationTable()
{
	PrintTableHeder();

	for (int i = 1; i <= 10; i++)
	{
		cout <<" "<< i << ClumSperator(i) ;
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;

	}
}

int main()
{
	PrintMultiplicationTable();

	return 0;
}

