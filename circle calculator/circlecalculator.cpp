
// Author: Jason Younan 
// Description:
//		This program demonstrates using a C++ Structure called Circle.
//      Using various functions, it prompts the user for a radius and
//      calculates and displays the diameter, area, and circumference.


#include <iostream>
#include <iomanip>
#include <cmath>		      // Needed for the pow function
using namespace std;

struct Circle              // Declare what a Circle structure looks like
{
	double radius;
	double diameter;
	double area;
	double circumference;

	//default constructor
	Circle()
	{
		radius = 0;
		diameter = 0;
		area = 0;
		circumference = 0;
	}
};

//Function prototypes
Circle getCircleData();
void calculateCircleData(Circle& cc);
void displayCircleData(Circle cc);

const double PI = 3.14159; //can use in main and functions



int main()
{
	int cNumber = 1;
	char again = 'N';
	
	do
	{
	cout << "Welcome to the Circle Calculator" << endl;
	cout << "--------------------------------" << endl << endl;


	Circle c;          // Define a Circle structure variable
	cout << "Circle # " << cNumber << endl << endl;  //display the circle number
	cNumber += 1;

	c = getCircleData();
	calculateCircleData(c);
	displayCircleData(c);

	cout << "\ntry again? y or n: ";
	cin >> again;
	} 
	while (again == 'Y' || again == 'y');
	cout << "\nGoodbye!" << endl;


	return 0;
}

//complete the implementation of the following functions

Circle getCircleData()
{
	//This function prompts the user for a Circle's radius.
	//Accept only values greater than 0 for the radius.
	//This function returns a Circle structure variable.

	Circle cTemp;  //define a local Circle variable

	/***Your code goes here***/
	cout << "Enter the circle's radius: ";
	cin >> cTemp.radius;
	while (cTemp.radius < 1)
		{
			cout << "Input is invalid, please enter a number greater than 0: ";
			cin >> cTemp.radius;
		}


	return cTemp;
}

void calculateCircleData(Circle& cc)
{
	//This function takes the Circle reference argument &cc
	//and calculates the rest of the members: 
	//diameter, circumference, and area.

	/***Your code goes here***/
	cc.diameter = (cc.radius * 2);
	cc.circumference = (2 * 3.1416 * cc.radius);
	cc.area = (3.1416 * pow(cc.radius, 2));
}

void displayCircleData(Circle cc)
{
	// This function takes the Circle argument cc and displays
	// all of its members using cout.  Displays the radius, area, and 
	// circumference, all with 2 decimal places.

	/***Your code goes here***/
	cout << setprecision(2) << fixed << "Radius: " << cc.radius << endl;
	cout << setprecision(2) << fixed << "Diameter: " << cc.diameter << endl;
	cout << setprecision(2) << fixed << "Circumference: " << cc.circumference << endl;
	cout << setprecision(2) << fixed <<"Area: " << cc.area << endl;
}

/* 
Welcome to the Circle Calculator
--------------------------------

Circle # 1

Enter the circle's radius: 3
Radius: 3.00
Diameter: 6.00
Circumference: 18.85
Area: 28.27

try again? y or n: y
Welcome to the Circle Calculator
--------------------------------

Circle # 2

Enter the circle's radius: 0
Input is invalid, please enter a number greater than 0: 4.5
Radius: 4.50
Diameter: 9.00
Circumference: 28.27
Area: 63.62

try again? y or n: y
Welcome to the Circle Calculator
--------------------------------

Circle # 3

Enter the circle's radius: -2
Input is invalid, please enter a number greater than 0: 32
Radius: 32.00
Diameter: 64.00
Circumference: 201.06
Area: 3217.00

try again? y or n: n

Goodbye!

E:\C++\circle calculator\circle calculator\Debug\circle calculator.exe (process 18924) exited with code 0.
Press any key to close this window . . .
*/
