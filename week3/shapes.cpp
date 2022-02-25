/*
Finn Moore
CST 180
Program #3: Shapes
2/1/2022

display menu
input: shape number and dimensions
system: select shape with if, calculate area
output: area and explanation
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
        cout << "Programming Assignment 3\nFinn Moore\n\n"; //indentification

        const double pi = 3.14159265;
		int number; //declare vars
		double area;
		bool quit=false;

        //input 
		cout << "Chessnut Hill Geometry Calculator";
		while (!quit){ //loop questions until option 5 is pressed
				//input choice
				cout << "\n\n\t1. Calculate the Area of a Circle\n\t2. Calculate the Area of a Rectagle";
				cout << "\n\t3. Calculate the Area of a Triangle\n\t4. Calculate the Area of a Square\n\t5. Quit\n\n\tEnter your choice (1-5): ";
				cin >> number;

				//processing/further input/output
				if (number==1){
					double r;
					cout << "\n\tInput Radius of Circle: ";
					cin >> r;
					area=pi*r*r;
					cout << "\n\tFor a circle with a radius of "<<r<<" inches, you multiply pi (3.14) by the radius \n\tsquared. The area is "<<area<<". The formula is area = pi*r^2\n";
				}
				else if (number==2){
					double length, width;
					cout << "\n\tInput length of Rectangle: ";
					cin >> length;
					cout << "\tInput width of Rectangle: ";
					cin >> width;
					area = length*width;
					cout << "\n\tFor a rectangle with a length of "<<length<<" inches and a width of "<<width<<" \n\tinches, you multiply the length and width. The area is "<<area<<". The formula is area = length*width";
				}
				else if (number==3){
					double base, height;
					cout << "\n\tInput base of Triangle: ";
					cin >> base;
					cout << "\tInput height of Triangle: ";
					cin >> height;
					area = base*height*0.5;
					cout << "\t\n\tFor a triangle with a base of "<<base<<" inches and a height of "<<height<<" \n\tinches, you multiply one half times the base and height. The area is "<<area<<". \n\tThe formula is area = 1/2(base*height)";
				}
				else if (number==4){
					double side;
					cout << "\n\tInput side of Square: ";
					cin >> side;
					area = side*side;
					cout << "\n\tFor a square with a side of "<<side<<" inches, you square the side. The area is "<<area<<". The formula is area = side^2";
				}
				else if (number==5){
					quit=true;
					cout << "\nExiting.";
				}
				else {
					quit=true;
					cout << "\nInvalid input, exiting.";
				}
		}
        //termination
        cout << endl << "Normal job termination." << endl;
        return 0;
}
