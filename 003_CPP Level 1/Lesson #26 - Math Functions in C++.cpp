//problem #16 :

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	float A, B;

	cout << " enter the side : "; cin >> A;
	cout << " enter the diagonal : "; cin >> B;

	cout <<  " the rectangle area is : "<< A * sqrt(pow(B, 2) - pow(A, 2)) <<endl;

	return 0;
}

============================================================================================

//problem #18 :

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	const float Pi = 3.14;
	float Radius;

	cout << " enter the side : "; cin >> Radius;
	

	cout <<  "the Circle area is : "<< ceil(Pi * pow(Radius,2) ) <<endl;

	return 0;
}

============================================================================================

//problem #19 :

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	const float Pi = 3.14;
	float Diameter;
	cout << " please enter the diameter : "; 
	cin >> Diameter;



	cout << ceil(Pi * pow(Diameter, 2) / 4) << endl;


	return 0;
}


============================================================================================

//problem #20 :

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	const float Pi = 3.14;
	float Square_rib;

	cout << " please enter the Square rib : ";
	cin >> Square_rib;

	cout << ceil(Pi * pow(Square_rib, 2) / 4) << endl;


	return 0;
}

============================================================================================

//problem #21 :

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	const float Pi = 3.14;
	float Circumference;

	cout << "please enter the Circumference : "; 
	cin >> Circumference;


	cout << floor(pow(Circumference, 2) / (4 * Pi)) << endl;


	return 0;
}

============================================================================================

//problem #22 :

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	const float Pi = 3.14;
	float Rib1, Rib2;
	cout << "please enter the triangle rib A : "; cin >> Rib1;
	cout << "please enter the triangle rib B : "; cin >> Rib2;

	cout <<floor( Pi * (pow(Rib2, 2) / 4) * ((2 * Rib1 - Rib2) / (2 * Rib1 + Rib2))) << endl;

	return 0;
}

============================================================================================

//problem #23 :

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	const float Pi = 3.14;
	float Rib1, Rib2, Rib3;

	cout << "please enter the triangle rib A : "; cin >> Rib1;
	cout << "please enter the triangle rib B : "; cin >> Rib2;
	cout << "please enter the triangle rib C : "; cin >> Rib3;

	float P = (Rib1 + Rib2 + Rib3) / 2;


	cout << round(Pi * pow(((Rib1 * Rib2 * Rib3) / (4 * sqrt(P * (P - Rib1) * (P - Rib2) * (P - Rib3)))), 2)) << endl;


	return 0;
}

============================================================================================

// problem #31 :

#include <iostream>
#include <cmath> 

using namespace std;


int main()
{
	float num;
	cout << "please enter a number : "; 
 	cin >> num;

	cout << round(pow(num, 2)) << endl;
	cout << round(pow(num, 3)) << endl;
	cout << round(pow(num, 4)) << endl;

	return 0;
}

============================================================================================

// problem #32 :

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float num;
	short power;
	cout << "please enter a number : "; cin >> num;
	cout << "please enter a power : "; cin >> power;

	cout << round(pow(num, power)) << endl;

	return 0;
}

============================================================================================

// problem #42 :

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	short Days, Hours, Minutes, Seconds;
	unsigned int Task_duration_in_seconds;

	cout << "please enter the number of days : "; cin >> Days;
	cout << "please enter the number of hours : "; cin >> Hours;
	cout << "please enter the number of minutes : "; cin >> Minutes;
	cout << "please enter the number of seconds : "; cin >> Seconds;

	Task_duration_in_seconds = Seconds + (Minutes * 60) + (Hours * 60 * 60) + (Days * 24 * 60 * 60);

	cout << round(Task_duration_in_seconds) << " Seconds\n";

	return 0;
}

============================================================================================

// problem #43 :

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	short Days, Hours, Minutes, Seconds;
	int Task_duration_in_seconds;
	int Remainder = 0;

	cout << "please enter the Task duration in seconds : "; cin >> Task_duration_in_seconds;

	Days = Task_duration_in_seconds / (24 * 60 * 60);
	Remainder = Task_duration_in_seconds % (Days * 24 * 60 * 60);

	Hours = Remainder / (60 * 60);
	Remainder = Remainder % (Hours * 60 * 60);

	Minutes = Remainder / (60);
	Remainder = Remainder % (Minutes * 60);

	Seconds = Remainder;

	cout << floor(Days) << ":" << floor(Hours) << ":" << floor(Minutes) << ":" << floor(Seconds) << endl;

	return 0;
}



