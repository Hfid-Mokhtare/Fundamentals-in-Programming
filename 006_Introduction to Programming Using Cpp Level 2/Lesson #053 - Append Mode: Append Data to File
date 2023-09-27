#include <iostream>
#include <fstream>


using namespace std;

int main()
{


	fstream MyFile;
	MyFile.open("my file.txt"), ios::out | ios::app);//append Mode
	

	if (MyFile.is_open())
	{
		MyFile << "Hi ! This is the first line in my file\n";
		MyFile << "Hi ! This is the second line in my file\n";
		MyFile << "Hi ! This is the third line in my file\n";
		
		

		MyFile.close();

	}

	return 0;
}
