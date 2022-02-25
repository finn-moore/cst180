// Project Name: Assignment 1A - Volume
// Programmer Name: Finn Moore
// Date Written: 1/13/2022
// Description: Calculates the volume of a rectanglular prism

#include <iostream> // Header file to enable console I/O
using namespace std;

// Begin main Function Definition
int main( )
{
// Initialization
// Declare data objects:

double length, width, depth, volume; // Objects are data type double

// Display identification on screen:

cout << "Assignment 1A" << endl;
cout << "Programmed by Finn Moore" << endl << endl;

// Input
// Prompt for rectangle dimensions, and store
// keyboard responses in respective data objects:

cout << "What is the length of the rectangular prism?" << endl;
cin >> length;
cout << "What is the width of the rectangular prism?" << endl;
cin >> width;
cout << "What is the depth of the rectangular prism?" << endl;
cin >> depth;


// Processing
// Calculate area of rectangle and
// assign result to area data object:

volume = length * width * depth;

// Output
// Display results in a complete sentence:

cout << "The volume of the rectangular prism with dimensions " << length;
cout << " by " << width << " by " << depth << " is " << volume << "." << endl;

// Termination
// Indicate normal EOJ:

cout << endl << "Normal job termination" << endl;
return 0;

}
// End of main function
