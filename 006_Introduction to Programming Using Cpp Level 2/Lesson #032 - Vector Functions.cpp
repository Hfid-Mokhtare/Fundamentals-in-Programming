#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vNumber;

	vNumber.push_back(10);
	vNumber.push_back(20);
	vNumber.push_back(30);
	vNumber.push_back(40);
	vNumber.push_back(50);


	//check if the vector is empty or not
	if (!vNumber.empty())
	{
		//get the first element entered in the vector. in this case is 10
		cout << "First element : " << vNumber.front() << endl;

		//get the last element entered in the vector. in this case is 50
		cout << "Last element : " << vNumber.back() << endl;
	}

	//check if the vector is empty
	cout << "Is empty : " << vNumber.empty() << endl;

	//get the capacity of the vector
	cout << "Capacity : " << vNumber.capacity() << endl;

	//get the size of the vector
	cout << "Size : " << vNumber.size() << endl;


	return 0;
}


