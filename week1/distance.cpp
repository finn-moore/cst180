// Project Name: Assignment 1 - Distance
// Programmer Name: Finn Moore
// Date Written: 1/16/2022
// Description: This program uses console I/O to calculate
// the distance a car can travel in town vs on highway 
#include <iostream>
using namespace std; 
int main(){

	//Identification

	cout << "\nAssignment 1B\nProgrammed by Finn Moore\n";

	//Declare variables

	double tankVolume, mpgTown, mpgHighway;

	//Input
	//Prompt for tank volume and miles per gallon

	cout << "\nHow many gallons of gas does the tank hold? ";
	cin >> tankVolume;
	cout << "How many miles per gallon does the car use when driven in town? ";
	cin >> mpgTown;
	cout << "How many miles per gallon does the car use when driven on the highway? ";
	cin >> mpgHighway;

	//Processing + output
	//Calculate and output distances the car can travel on one tank of gas

	cout << "\nDistance the car can travel in town: " << tankVolume * mpgTown << " miles";	
	cout << "\nDistance the car can travel on highway: " << tankVolume * mpgHighway << " miles";

	// Termination
	// Indicate normal EOJ:

	cout << "\n\nNormal job termination\n" << endl;
	return 0;
}
