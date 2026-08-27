#include <iostream>

using namespace std;


int main()
{
	void* ptr;

	float A = 10;
	int B = 20;

	ptr = &A;
	cout << ptr << endl;

	//You have to do casting to an void pointer to get his value by using this statement : 
	//static_cast < variable T* > ( pointer name );

	cout << *(static_cast<float*>(ptr)) << endl;

	cout<< endl;

	ptr = &B;
	cout << ptr << endl;
	cout << *(static_cast<int*>(ptr)) << endl;
	

	
	return 0;
}
