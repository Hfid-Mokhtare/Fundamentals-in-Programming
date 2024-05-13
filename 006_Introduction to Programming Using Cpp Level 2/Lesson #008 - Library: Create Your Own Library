//this code is the main code
#include<iostream> 
#include "MyLib.h";

using namespace std; 


int main() 
{ 
	
	output::PrintName(input::ReadName());
	return 0; 
} 

//this code is for the librery
#pragma once

#include<iostream> 
#include<string> 

using namespace std;

namespace input
{
	string ReadName()
	{
		string Name;
		cout << "Please enter your name:" << endl;
		getline(cin, Name);
		return Name;
	}
}
namespace output
{
	void PrintName(string Name)
	{
		cout << "Your name is :" << Name << endl;

	}
}
