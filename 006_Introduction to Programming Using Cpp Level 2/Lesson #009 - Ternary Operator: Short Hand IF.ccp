// i use local librarys tha i made them my selfe
#include "iolib.h"  
#include "omathlib.h"
#include "checkmathlib.h"


int main()
{
	int Number;
	Number = io::ReadNumber("Please enter a Number : ");

	(Number == 0) ? cout << "zero" : 
		(checkmath::IsPositiveNumber(Number) == true) ?
		cout << Number << " : is a positive Number \n" :
		cout << Number << " : is a negative Number \n";

	return 0;
}
