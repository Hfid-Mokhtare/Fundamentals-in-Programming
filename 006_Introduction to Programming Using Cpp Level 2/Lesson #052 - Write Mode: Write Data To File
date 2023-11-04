#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream MyFile;
	MyFile.open("Mohamed Ali File.txt", ios::out);/*Writ Mode , in this mode the programme delete all data in the file
and write new data*/

// you can chose any name that you want to your file ;
//you can make the file name a direstion for example : c:\user\...\Myfile.txt

	if (MyFile.is_open())
	{
		MyFile << "Hi ! This is the first line in my file\n";
		MyFile << "Hi ! This is the second line in my file\n";
		MyFile << "Hi ! This is the third line in my file\n";

		MyFile.close();

	}



	return 0;
}
