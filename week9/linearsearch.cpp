/*
Finn Moore
Lab 8

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Finn Moore Lab 8\n";
   	int ticket, comparisons=0;  
	int lucky[]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
	cout << "Enter number: ";
	cin >> ticket; 
	for (int i=0;i<10;i++){
		if (lucky[i]==ticket){
			comparisons=i+1;
			cout << "Winner!\n" << comparisons << " comparisons.\n";
		}
	}
	if (!comparisons){
		cout << "No winning ticket.\n";
	}
	return 0;
}


