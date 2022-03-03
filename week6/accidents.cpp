/*
Lab 6A
Finn Moore

i: number of accidents for each location
p: find lowest region
o: output lowest region
*/
#include <bits/stdc++.h>
using namespace std;
int getNumAccidents(string);
void findLowest(int, int, int, int, int);
int main(){
		cout << "Lab 6\nFinn Moore\n";
		int n,s,e,w,c;
		n=getNumAccidents("North");
		s=getNumAccidents("South");
		e=getNumAccidents("East");
		w=getNumAccidents("West");
		c=getNumAccidents("Central");
		findLowest(n,s,e,w,c);
}
int getNumAccidents(string s){
		int n;
		do{
				cout << "\nEnter number of accidents in the " << s << " region: ";
				cin >> n;
		}while(n<0);
		return n;
}
void findLowest(int n, int s, int e, int w, int c){
		int lowest=n;
		if (s<lowest){
				lowest=s;
		}
		if (e<lowest){
				lowest=e;
		}
		if (w<lowest){
				lowest=w;
		}
		if (c<lowest){
				lowest=c;
		}
		if (n==lowest){
				cout << "\nThe safest region is the North region with " << n << " accidents.";
		}
		else if (s==lowest){
				cout << "\nThe safest region is the South region with " << s << " accidents.";
		}
		else if (e==lowest){
				cout << "\nThe safest region is the East region with " << e << " accidents.";
		}
		else if (w==lowest){
				cout << "\nThe safest region is the West region with " << w << " accidents.";
		}
		else if (c==lowest){
				cout << "\nThe safest region is the Central region with " << c << " accidents.";
		}
}
