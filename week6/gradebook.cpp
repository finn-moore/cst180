/*
Finn Moore
CST 180
Program #5 - Grade book

Input:
        file (each line):
                name, test scores, assignment scores, attendance
Processing:
        Loop until end of file
                average homework score
                average hw + tests
                determine if passing based on average + attendance
Output:
        name, scores, final average, letter grade, pass or fail
*/
#include <bits/stdc++.h>
using namespace std;
void header();
float average(int, int, int, int, int, int);
bool pass(float, int);
int main(){
    ifstream ifile ("grades.txt");
	if (!ifile){
			cout << "File open failure!";
			return 0;
	}
	header();
	string fname;
	while(ifile >> fname){
		string lname;
		int t1, t2, a1, a2, a3, a4, at;
		ifile >> lname >> t1 >> t2 >> a1 >> a2;
		ifile >> a3 >> a4 >> at;
		cout << "*************************************";
		cout << "\n" << fname << " " << lname << "\nClasses Attended: ";
		cout << at << "\nTest scores: ";
		cout << t1 << "%, " << t2 << "%\n" << "Assignment scores: ";
		cout << a1 << "%, " << a2 << "%, " << a3 << "%, " << a4 << "%\n";
		float avg = average(t1, t2, a1, a2, a3, a4);
		cout << "Final average: " << fixed << setprecision(2) << avg;
		string grade;
		if (avg >= 92.5){
			grade = "A";	
		}
		else if (avg >= 89.5){
			grade = "A-";
		}
		else if (avg >= 86.5){
			grade = "B+";
		}
		else if (avg >= 82.5){
			grade = "B";
		}
		else if (avg >= 79.5){
			grade = "B-";
		}
		else if (avg >= 76.5){
			grade = "C+";
		}
		else if (avg >= 72.5){
			grade = "C";
		}
		else if (avg >= 69.5){
			grade = "C-";
		}
		else if (avg >= 66.5){
			grade = "D+";
		}
		else if (avg >= 62.5){
			grade = "D";
		}
		else if (avg >= 59.5){
			grade = "D-";
		}
		else if (avg < 59.5){
			grade = "F";
		}
		cout << "\nGrade: " << grade << "\nPass or fail: "; 
		if (pass(avg, at)){
			cout << "Pass\n";
		}
		else if (at<20&&avg>=60){
			cout << "Fail due to attendance\n";
		}
		else {
			cout << "Fail\n";
		}
	}
	cout << "*************************************\n";
}
//displays header
void header(){
	cout << "Finn Moore\nProgram 5\n\n";
}
//computes average of grades
float average(int t1, int t2, int a1, int a2, int a3, int a4){
	return (t1+t2+a1+a2+a3+a4)/3.0;
}
//checks if student passes
bool pass(float avg, int at){
	if (avg>=60&&at>=20){
		return true;
	}
	return false;
}
