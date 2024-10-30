//Problem #21 : Circle Area Along the Circumference
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Read_Circumference()
{
	float Circumference;
	cout << "please enter the Circumference L : "; cin >> Circumference;
	return Circumference;
}

float Calcule_of_Circle_Area_By_Circumference(float Circumference)
{
	const float PI = 3.141592653589793238;
	float Area = pow(Circumference, 2) / (4 * PI);
	return Area;
}

void PrintCircleArea(float Area)
{
	cout << "\nCircleArea Area = " << Area << endl;
}

int main()
{
	
	PrintCircleArea(Calcule_of_Circle_Area_By_Circumference(Read_Circumference()));

	return 0;
}

=======================================================================================

//Problem #22 : Circle Area Inscribed in an Isosceles Triangle
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void Read_Numbers(double &Side_A, double &Base_B)
{

	cout << "please enter the triangle Side A : "; cin >> Side_A;
	cout << "please enter the triangle Base B : "; cin >> Base_B;
	
}

double Calcule_of_Circle_Area_Inscribed_In_Isosceles_Triangle(double Side_A, double Base_B)
{
	const double PI = 3.141592653589793238;
	double Area = PI * (pow(Base_B, 2) / 4) * ((2 * Side_A - Base_B) / (2 * Side_A + Base_B));
	return Area;
}

void PrintCircleArea(double Area)
{
	cout << "\nCircleArea Area = " << Area << endl;
}

int main()
{
	double Side_A, Base_B;
	Read_Numbers(Side_A, Base_B);
	PrintCircleArea(Calcule_of_Circle_Area_Inscribed_In_Isosceles_Triangle(Side_A, Base_B));

	return 0;
}

=======================================================================================

//Problem #23 : Circle Area Described Around an Arbitrary Tuiangle
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void Read_Numbers(double &Side_A, double &Side_B,double &Side_C)
{
	cout << "please enter the triangle Side A : "; cin >> Side_A;
	cout << "please enter the triangle Side B : "; cin >> Side_B;
	cout << "please enter the triangle Side C : "; cin >> Side_C;
}

double Calcule_of_Circle_Area_Described_Around_ATriangle(double Side_A, double Side_B, double Side_C)
{
	const double PI = 3.141592653589793238;
	double P = (Side_A + Side_B + Side_C) / 2;
	double T = (Side_A * Side_B * Side_C) / (4 * sqrt(P * (P - Side_A) * (P - Side_B) * (P - Side_C)));
	double Area = PI * pow(T, 2);
	return Area;
}

void PrintCircleArea(double Area)
{
	cout << "\nCircleArea Area = " << Area << endl;
}

int main()
{
	double Side_A, Side_B, Side_C;
	Read_Numbers(Side_A, Side_B, Side_C);
	PrintCircleArea(Calcule_of_Circle_Area_Described_Around_ATriangle(Side_A, Side_B, Side_C));

	return 0;
}

=======================================================================================

//Problem #24 : Validate Age Between 18 and 45
#include <iostream>
#include <string>

using namespace std;

short ReadAge()
{
	short Age = 0;
	cout << " Please enter your Age : "; cin >> Age;
	return Age;
}


bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is aValide Age ";
	else
		cout << Age << " is Invalide Age ";
}

int main()
{
	
	PrintResult(ReadAge());

	return 0;
}

=======================================================================================

//Problem #25 : Read Untill Age Between 18 and 45
#include <iostream>
#include <string>

using namespace std;


short ReadAge()
{
	short Age = 0;
	cout << " Please enter Age between 18 and 45 : "; cin >> Age;
	return Age;
}


bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
	int Age = 0;

	do 
	{
		Age = ReadAge();

	} while (!ValidateNumberInRange(Age, From, To));

	return Age;
}

void PrintResult(int Age)
{
		cout << Age << " is aValide Age ";
}

int main()
{
	
	PrintResult(ReadUntilAgeBetween(18, 45));

	return 0;
}
