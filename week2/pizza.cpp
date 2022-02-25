/*
Finn Moore
CST 180
Programming Assignment #2: Don's Pizza
1/20/2022

Input: diameter of pizza
Processing: calculate area of pizza, number of slices, cost of pizza
Output: number of slices, cost of pizza
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	cout << "Programming Assignment #2\nFinn Moore\n\n"; //indentification

	const float pi = 3.14159265;
	const float price = 0.105;
	float diameter, area; //declare vars
	
	//input diameter
	cout << "Input diameter of pizza in inches: ";
	cin >> diameter;

	//processing
	area = pi*pow(diameter/2,2); //calculate area 
	
	//output
	//number of slices
	cout << "Number of slices: " << fixed << setprecision(1); 
	cout << area/14.125;

	//cost of pizza
	cout << "\nCost of pizza: $" << setprecision(2);
	cout << area*price << endl; 

	//termination
	cout << endl << "Normal job termination." << endl; 
	return 0;
}
