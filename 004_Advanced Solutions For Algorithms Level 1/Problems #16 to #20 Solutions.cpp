//Problem #16 :  Rectagle Area Through Diagonal and Side Area
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void Read_Numbers(float& side, float& diagonal)
{
	cout << "please enter the side : "; cin >> side;
	cout << "please enter the diagonal : "; cin >> diagonal;
}

float Calcule_Rectangle_Area_By_Side_and_Diagonal(float side, float diagonal)
{
	float Area = side * sqrt(pow(diagonal, 2) - pow(side, 2));
	return Area;

}

void Print_Rectangle_Area(float RectangleArea)
{
	cout << "the Rectangle Area is : " << RectangleArea;
}


int main()
{
	float side, diagonal;
	Read_Numbers(side, diagonal);
	Print_Rectangle_Area(Calcule_Rectangle_Area_By_Side_and_Diagonal(side, diagonal));

	return 0;
}

===========================================================================================

//Problem #17 : Triangle Area
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void Read_Numbers(float& Base, float& Height)
{
	cout << "please enter the Base : "; cin >> Base;
	cout << "please enter the Height : "; cin >> Height;
}

float Calcule_Triangle_Area_By_Base_and_Height(float Base, float Height)
{
	float Area = (Base / 2) * Height;
	return Area;
}

void Print_Triangle_Area(float Area)
{
	cout << "the Triangle Area is : " << Area;
}


int main()
{
	float Base, Height;
	Read_Numbers(Base, Height);
	Print_Triangle_Area(Calcule_Triangle_Area_By_Base_and_Height(Base, Height));

	return 0;
}

===========================================================================================

//Problem #18 : Circle Area
#include <iostream> 
#include <cmath>
#include <string>

using namespace std;

float Read_Radius()
{
	float Radius;
	cout << "please enter the Radius R : "; cin >> Radius;
	return Radius;
}

float Calcule_of_Circle_Area_by_Radios(float Radius)
{
	const float PI = 3.141592653589793238;
	float Area = PI * pow(Radius, 2);
	return Area;
}

void PrintCircleArea(float Area)
{
	cout << "Circle Area is : " << Area;
}

int main()
{
	PrintCircleArea(Calcule_of_Circle_Area_by_Radios(Read_Radius()));

	return 0;
}

===========================================================================================

//Problem #19 : Circle Area Through Diameter
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Read_Diameter()
{
	float Diameter;
	cout << "please enter the Diameter D : "; cin >> Diameter;
	return Diameter;
}

float Calcule_of_Circle_Area_by_Diameter(float Diameter)
{
	const float PI = 3.141592653589793238;
	float Area = (PI * pow(Diameter, 2)) / 4;
	return Area;
}

void PrintCircleArea(float Area)
{
	cout << "the CircleArea Area is : " << Area;
}

int main()
{
	
	PrintCircleArea(Calcule_of_Circle_Area_by_Diameter(Read_Diameter()));

	return 0;
}
===========================================================================================

//Problem #20 : Circke Area Inscribed in a Square
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Read_Square_Side()
{
	float Square_Side;
	cout << "please enter the Square Side A : "; cin >> Square_Side;
	return Square_Side;
}

float Calcule_of_Circle_Area_Inscribed_in_Square(float Square_Side)
{
	const float PI = 3.141592653589793238;
	float Area = (PI * pow(Square_Side, 2)) / 4;
	return Area;
}

void PrintCircleArea(float Area)
{
	cout << "\nCircleArea Area = " << Area << endl;
}

int main()
{
	
	PrintCircleArea(Calcule_of_Circle_Area_Inscribed_in_Square(Read_Square_Side()));

	return 0;
}
