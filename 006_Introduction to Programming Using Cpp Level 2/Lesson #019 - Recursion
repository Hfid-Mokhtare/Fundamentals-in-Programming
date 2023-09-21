#include <iostream>
using namespace std;

void PrintNumbers(int N,int M)
{
	if (N <= M)
	{
		cout << N << endl;
		PrintNumbers(N + 1, M);
	}
}



int main()
{
	PrintNumbers(1, 1000);

	return 0;
}

==================================================

#include <iostream>
using namespace std;

void PrintNumbers(int N,int M)
{
	if (M >= N)
	{
		cout << M << endl;
		PrintNumbers(N, M - 1);
	}
}



int main()
{
	PrintNumbers(1, 10);

	return 0;
}

====================================================

#include <iostream>
using namespace std;

int GetPower(int Base, int Power)
{

	if (Power == 0)
		return 1;
	else
	{
		 
		
		return (Base * GetPower(Base, Power - 1));
	}
	
}



int main()
{
	cout << GetPower(2, 3);

	return 0;
}
