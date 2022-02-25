/*
Finn Moore
CST 180
Lab #4: Employee Wages
2/1/2022

// input
        Prompt operator for Employee Number, Pay Code, and Hours.
           Store all keyboard input in data objects you declared.
// processing
       Use switch to assign Pay Rate a value based on Pay Code.
           If Pay Code is invalid:
                Assign Pay Rate a value of zero
                Display an error message to operator
           Use if / else to calculate pay based on hours worked:
                0 to 40 hours:     multiply hours times pay rate.
                Over 40 hours:    multiply 40 times pay rate
                                          multiply hours over 40 by 1Â½ pay rate
                                          add regular and overtime pay
 // output
        Set precision to round pay to nearest cent.
            Display results as shown above.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

#define MW 9.87

using namespace std;

void display();
bool code_not_valid(char);
double get_pay(char, int);


int main(){	
	display();
	double finalPay, total;
	bool loop=true;
	char code, repeat;
	int hours, count;
	count=0;
	total=0;
	string number;//declare vars

	while(loop){
        cout << "Input Employee Number: ";
        cin >> number;
		//code
		do {
			cout << "Enter pay code ( M/O/T ): ";
			cin >> code;
		} while(code_not_valid(code));
		//hours
		cout << "Enter hours worked: ";
		cin >> hours;
		
		finalPay=get_pay(code, hours);
		total+=finalPay;
		count++;
		

        //output

		cout << "\nEmployee: " << number << "\nPay Code: " << code << "\nHours: " << hours;
		cout << "\nPayment: $" << fixed << setprecision(2);
		cout << finalPay << endl << endl;
		cout << "Another employee to process (Y/N)? ";
		cin >> repeat;
		if (repeat=='N'||repeat=='n'){
			loop=false;
		}
	}
	cout <<"\nEmployees Processed: " << count << "\nTotal Payroll: $"<<total;

	//termination
	cout << endl << "Normal job termination." << endl;
	return 0;
}

//display name and lab number
void display (){
	cout << "Lab 5\nFinn Moore\n\n";
}
//check if code is valid
bool code_not_valid(char code){
	return code != 'M' && code != 'O' && code!='T';
}
//calculate pay based on code and minimum wage
double get_pay(char code, int hours){
	double pay=0;
	switch (code){
		case 'M':
		pay = MW;
		break;
		case 'O':
		pay = MW+1;
		break;
		case 'T':
		pay=MW+2;
		break;
	}

	if (hours<=40){
		return hours*pay;
	}
	else {
		return 40*pay + (hours-40)*pay*1.5;
	}
	
}
