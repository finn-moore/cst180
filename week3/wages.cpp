/*
Finn Moore
CST 180
Lab #3: Employee Wages
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
                                          multiply hours over 40 by 1½ pay rate
                                          add regular and overtime pay
 // output
        Set precision to round pay to nearest cent.
            Display results as shown above.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
		
		//open input file and create/open output file for writing	
		ifstream infile;
		ofstream outfile;
		infile.open("payrolldata.txt");
		outfile.open("output.txt");


        const double minWage = 9.87, ftax=0.15, stax=0.05, sstax=0.075, mtax=0.015;
        double pay, finalPay, total;
        char code, repeat;
		int hours, count;
		bool valid=true;
		count=0;
		total=0;
		string number, fname, lname;//declare vars

		while(infile >> fname){
	
		//input line	
		outfile << fname;
        //processing
		pay=0;
        switch (tolower(code)){
			case 'm':
			pay = minWage;
			break;
			case 'o':
			pay = minWage+3;
			break;
			case 't':
			pay=minWage+6;
			break;
			default: 
			pay=0;
			valid=false;
		}

		if (hours<=40){
			finalPay=hours*pay;
		}
		if (hours>80){
			valid=false;
		}
		else {
			finalPay=40*pay + (hours-40)*pay*1.5;
		}
		//apply taxes
		double pretax=finalPay;
		finalPay-=finalPay*ftax;
		finalPay-=finalPay*stax;
		finalPay-=finalPay*sstax;
		finalPay-=finalPay*mtax;
		
        //output
		if (valid){
		outfile << "\n*******************************************";
		outfile << "\nPaycheck info for employee: " << fname << " " << lname;
		outfile << "\nEmployee Code:              " << number;
		outfile << "\nTotal Hours Worked:         " << hours;
		outfile << "\nPayrate:                     $" << fixed << setprecision(2) << pay;
		outfile << "\nEarnings Before Taxes:       $" << setprecision(2) << pretax;
		outfile << "\nEarnings After Taxes:        $" << setprecision(2) << finalPay;
		outfile << "\n*******************************************";
		}
		else {
				outfile << "\n*******************************************";
				outfile << "\nINVALID INPUT";
				outfile << "\n*******************************************";
		}
		}
		infile.close();outfile.close();
        //termination
        return 0;
}
