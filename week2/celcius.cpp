/*
Finn Moore
CST 180
Lab 02: Temperature Conversion
1/20/2022

Input: temperature in farenheit
Processing: convert farenheit to celcius using 5/9 (x-32)
Output: temperature in celcius
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	cout << "Lab 02\nFinn Moore\n"; //indentification

	float temp; //declare vars

	//input temp in farenheit
	cout << "\nInsert temperature as Fahrenheit: ";
	cin >> temp;

	//processing + output
	//output temp in celcius

	cout << temp << " Fahrenheit is equivalent to "; 
	cout << fixed << setprecision(1); //round to 1 decimal 
	cout << (temp - 32)*(int)5/9 << " Celcius.\n";

	//termination
	cout << endl << "Normal job termination." << endl; 
	return 0;
}
