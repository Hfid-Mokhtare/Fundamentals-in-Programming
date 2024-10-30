//Exemple using break : 
#include <iostream>

using namespace std;



int main()
{
	
	int arr[10] = { 10,44,55,33,20,99,22,88,99,100 };
	int Sherfor = 20;
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (arr[i] == Sherfor)
		{
			break;
		}
		
	}
	
	cout << "we found"<< Sherfor <<"in Position : "<< i+1;
			
	return 0;
}
