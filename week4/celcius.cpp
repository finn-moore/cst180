/*
Finn Moore
Lab 04b

input: nothing
system: loop from 0 to 100 by 10,
		calculate celcius using 5/9(x-32)
output: output farenheit and celcius each iteration of loop
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	cout << "Finn Moore\nLab 04b\n\nFarenheit              Celcius\n------------------------------------\n";
	for (int i=0;i<101;i+=10){
		cout << "  " << setw(3) << i << "                  " << fixed << setprecision(1) << setw(5) << (5.0/9)*(i-32) << "\n";	
	}
	return 0;
}

