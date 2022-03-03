/*
Finn Moore
Lab 6B

i: 5 scores
p: find lowest score, calc average of highest 4
o: output average
*/
#include <bits/stdc++.h>
using namespace std;
int getScore();
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int ,int ,int );
int main(){
		cout << "Finn Moore\nLab 6B\n";
		calcAverage(getScore(), getScore(), getScore(), getScore(), getScore());
		return 0;
}
int getScore(){
		int s;
		do{
		cout << "Enter score: ";
		cin >> s;
		}while(s<0||s>100);	
		return s;
}
void calcAverage(int a, int b, int c, int d, int e){
		int l=findLowest(a,b,c,d,e);
		if (a==l){
				cout << "\nAverage Score: " << (b+c+d+e)/4;
		}
		else if (b==l){
				cout << "\nAverage Score: " << (a+c+d+e)/4;
		}
		else if (c==l){
				cout << "\nAverage Score: " << (a+b+d+e)/4;
		}
		else if (d==l){
				cout << "\nAverage Score: " << (b+c+a+e)/4;
		}
		else if (e==l){
				cout << "\nAverage Score: " << (b+c+d+a)/4;
		}
}
int findLowest(int a, int b, int c, int d, int e){
		int l=a;
		if (b<l){
				l=b;
		}
		if (c<l){
				l=c;
		}
		if (d<l){
				l=d;
		}
		if (e<l){
				l=e;
		}
		return l;
}







		
