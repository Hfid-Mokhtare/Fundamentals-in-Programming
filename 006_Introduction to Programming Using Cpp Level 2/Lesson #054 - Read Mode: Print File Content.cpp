#include <iostream>
#include <fstream>
#include <string>


using namespace std;

string ReadTheNameOfFile()
{
	string Name = " ";
	cout << "Please enter the file name : \n";
	getline(cin, Name);
	return Name.append(".txt\n");
}

void PrintFileContente(string FileName)
{

	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode


	if (MyFile.is_open())
	{
		string Line;

		while (getline(MyFile, Line))
		{
			
			cout << Line << endl;
		}

		MyFile.close();

	}
}

int main()
{
	

	PrintFileContente(ReadTheNameOfFile());



	return 0;
}
