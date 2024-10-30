#include <iostream>

using namespace std;

using namespace std;

int ReadNum()
{
	int Num;
	cout << "enter the number : ";
	cin >> Num;

	return Num;
}

int SumNumbers()
{
	int Num;
	int Sum = 0;
	

	for (int i = 1; i <= 5; i++)
	{
		Num = ReadNum();

		if (Num > 50)
		{
			cout << "the number is greater than 50 and won't be calculated\n";
			continue;
		}

		Sum = Sum + Num;
	}
	

	return Sum;

}

int main()
{

	cout << SumNumbers();

	return 0;
}
