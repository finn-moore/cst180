// Project Name: Lab 5a - Speed with functions
// Programmer Name: Finn Moore
// Date Written: 2/17/2022
// Description: Calculates speed

#include <iostream> // Header file to enable console I/O
using namespace std;

double mph(double, double);
// Begin main Function Definition
int main( )
{
// Initialization
// Declare data objects:

double miles, hours, speed; // Objects are data type double

// Display identification on screen:

cout << "Lab 5a" << endl;
cout << "Programmed by Finn Moore" << endl << endl;

// Input
// Prompt for rectangle dimensions, and store
// keyboard responses in respective data objects:

cout << "How many miles were traveled?" << endl;
cin >> miles;
cout << "How many hours did this take?" << endl;
cin >> hours;

// Processing
// Calculate area of rectangle and
// assign result to area data object:

speed = mph(miles, hours);
// Output
// Display results in a complete sentence:

cout << "The speed of travel is " << speed << " miles per hour" << endl;

// Termination
// Indicate normal EOJ:

cout << endl << "Normal job termination" << endl;
return 0;

}
// End of main function

double  mph(double miles, double hours){
		return miles/hours;
}
