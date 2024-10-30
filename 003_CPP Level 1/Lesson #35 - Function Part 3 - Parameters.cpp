// Problem #1 && Problem #2 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string ReadName()
{
	string Name;
	cout << " enter you Name : ";
	getline(cin, Name);
	return Name;
}

void PrinteMyName(string Name)
{
	cout << Name << endl;
}

int main()
{
	 PrinteMyName(ReadName());
	
  return 0;
}

==================================================================================

// Problem #14 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void SwapNumbers(int Num1,int Num2)
{
	int Temp;
	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;

	cout << Num1 << endl;
	cout << Num2 << endl;
	
}

void PrinteNum(int Num1, int Num2)
{
	cout << Num1 << endl;
	cout << Num2 << endl << endl;
}




int main()
{
	int num1, num2;
	cout << "please enter the first number : "; cin >> num1;
	cout << "please enter the second number : "; cin >> num2;

	
	 PrinteNum(num1, num2);
	 SwapNumbers(num1, num2);
	
  return 0;
}

==================================================================================

// Problem #15 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Calcule_of_RectangleArea(int Length, int Width)
{
  
	return Length * Width;

}

void PrintRectangleArea( int RectangleArea)
{
	cout << "the Rectangle Area is : "<<RectangleArea;
}




int main()
{
	int Length, Width;
	cout << "please enter the length : "; cin >> Length;
	cout << "please enter the width : "; cin >> Width;

	PrintRectangleArea(Calcule_of_RectangleArea(Length, Width));
	
	
	
  return 0;
}

==================================================================================

// Problem #16 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Calcule_of_RectangleArea(float side,float diagonal)
{
  
	return side * sqrt(pow(diagonal, 2) - pow(side, 2));

}

void PrintRectangleArea( float RectangleArea)
{
	cout << "the Rectangle Area is : "<<RectangleArea;
}


int main()
{
	float diagonal, side;
	cout << "please enter the width : "; cin >> side;
	cout << "please enter the length : "; cin >> diagonal;

	PrintRectangleArea(Calcule_of_RectangleArea( side, diagonal));
	
  return 0;
}

==================================================================================

// Problem #18 :
#include <cmath>
#include <string>

using namespace std;

float Calcule_of_CircleArea(float Radius)
{
	const float Pi = 3.14;
	return  Pi * pow(Radius, 2);

}

void PrintCircleArea( float RectangleArea)
{
	cout << "the Circle Area is : "<<RectangleArea;
}

int main()
{
	float Radius;
	
	cout << "please enter the Radius : "; cin >> Radius;

	PrintCircleArea(Calcule_of_CircleArea(Radius));
	
	
	
  return 0;
}

==================================================================================

// Problem #19 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Calcule_of_CircleArea(float Diameter)
{
	const float Pi = 3.14;
	return ceil(Pi * pow(Diameter, 2) / 4);

}

void PrintCircleArea( float CircleArea)
{
	cout << "the Circle Area is : "<<CircleArea;
}

int main()
{
	float Diameter;
	
	cout << "please enter the Diameter : "; cin >> Diameter;

	PrintCircleArea(Calcule_of_CircleArea(Diameter));
	
	
	
  return 0;
}

==================================================================================

// Problem #20 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Calcule_of_CircleArea(float Square_rib)
{
	const float Pi = 3.14;
	return ceil(Pi * pow(Square_rib, 2) / 4);

}

void PrintCircleArea( float RectangleArea)
{
	cout << "the Rectangle Area is : "<<RectangleArea;
}

int main()
{
	float Square_rib;
	
	cout << "please enter the Radius : "; cin >> Square_rib;

	PrintCircleArea(Calcule_of_CircleArea(Square_rib));
	
  return 0;
}
==================================================================================

// Problem #21 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Calcule_of_CircleArea(float Circumference)
{
	const float Pi = 3.14;
	return floor(pow(Circumference, 2) / (4 * Pi));

}

void PrintCircleArea( float RectangleArea)
{
	cout << "the Rectangle Area is : "<<RectangleArea;
}

int main()
{
	float Circumference;
	
	cout << "please enter the Radius : "; cin >> Circumference;

	PrintCircleArea(Calcule_of_CircleArea(Circumference));
	
	
	
  return 0;
}

==================================================================================

// Problem #22 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Calcule_of_CircleArea(float  Rib1,float Rib2)
{
	const float Pi = 3.14;
	return floor(Pi * (pow(Rib2, 2) / 4) * ((2 * Rib1 - Rib2) / (2 * Rib1 + Rib2)));

}

void PrintCircleArea( float RectangleArea)
{
	cout << "the Rectangle Area is : "<<RectangleArea;
}

int main()
{
	float  Rib1, Rib2;
	
	cout << "please enter the triangle rib A : "; cin >> Rib1;
	cout << "please enter the triangle rib B : "; cin >> Rib2;

	PrintCircleArea(Calcule_of_CircleArea(Rib1, Rib2));
	
	
	
  return 0;
}
==================================================================================

// Problem #23 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Calcule_of_CircleArea(float  Rib1,float Rib2, float Rib3)
{
	const float Pi = 3.14;
	float P = (Rib1 + Rib2 + Rib3) / 2;
	return round(Pi * pow(((Rib1 * Rib2 * Rib3) / (4 * sqrt(P * (P - Rib1) * (P - Rib2) * (P - Rib3)))), 2));

}

void PrintCircleArea( float RectangleArea)
{
	cout << "the Rectangle Area is : "<<RectangleArea;
}

int main()
{
	float  Rib1, Rib2, Rib3;
	
	cout << "please enter the triangle rib A : "; cin >> Rib1;
	cout << "please enter the triangle rib B : "; cin >> Rib2;
	cout << "please enter the triangle rib C : "; cin >> Rib3;

	PrintCircleArea(Calcule_of_CircleArea(Rib1, Rib2, Rib3));
	
	
	
  return 0;
}

==================================================================================

// Problem #31 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int  ReadNum()
{
	
	float Num;
	cout << "please enter a number : "; cin >> Num;
	return Num;
}
void PrintPowerResulte(int Num)
{
	cout << round(pow(Num, 2)) << endl;
	cout << round(pow(Num, 3)) << endl;
	cout << round(pow(Num, 4)) << endl;
}

int main()
{
	
	PrintPowerResulte(ReadNum());
	
  return 0;
}

==================================================================================

// Problem #32 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


float Calcule_of_Power(float num, short power)
{
	return pow(num, power);
}


void PrintPowerResulte(float result)
{
	cout <<endl<< result;
}

int main()
{
	float num;
	short power;
	cout << "please enter a number : "; cin >> num;
	cout << "please enter a power : "; cin >> power;

	PrintPowerResulte(Calcule_of_Power(num, power));
	
  return 0;
}

==================================================================================

// Problem #42 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


float Calcule_of_Task_duration_in_seconds(float Days, float Hours, float Minutes, float Seconds)
{
	return  Seconds + (Minutes * 60) + (Hours * 60 * 60) + (Days * 24 * 60 * 60);
}


void PrintTask_duration(float result)
{
	cout <<endl<< result;
}

int main()
{
	float Days, Hours, Minutes, Seconds;
	unsigned int Task_duration_in_seconds;

	cout << "please enter the number of days : "; cin >> Days;
	cout << "please enter the number of hours : "; cin >> Hours;
	cout << "please enter the number of minutes : "; cin >> Minutes;
	cout << "please enter the number of seconds : "; cin >> Seconds;
	

	PrintTask_duration(Calcule_of_Task_duration_in_seconds(Days, Hours, Minutes, Seconds));
	
  return 0;
}

==================================================================================

// Problem #43 :
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float  ReadTask_duration_in_seconds()
{
	float Task_duration_in_seconds;
	cout << "please enter the Task duration in seconds : "; cin >> Task_duration_in_seconds;
	return Task_duration_in_seconds;
}

string Calcule_of_Task_duration(int Task_duration_in_seconds)
{
	int Days, Hours, Minutes, Seconds;
	int Remainder = 0;

	Days = Task_duration_in_seconds / (24 * 60 * 60);
	Remainder = Task_duration_in_seconds % (Days * 24 * 60 * 60);

	Hours = Remainder / (60 * 60);
	Remainder = Remainder % (Hours * 60 * 60);

	Minutes = Remainder / (60);
	Remainder = Remainder % (Minutes * 60);

	Seconds = Remainder;

	string SDays = to_string(round(Days)), SHours = to_string(round(Hours)), SMinutes = to_string(round(Minutes)), SSeconds = to_string(round(Seconds));

	string Task_duration = SDays + ":" + SHours + ":" + SMinutes + ":" + SSeconds;
	
	return Task_duration;

}


void PrintTask_duration(string Task_duration)
{
	cout <<endl<< Task_duration;
}

int main()
{
	
	

	PrintTask_duration(Calcule_of_Task_duration(ReadTask_duration_in_seconds()));
	
  return 0;
}
