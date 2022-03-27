/*
Finn Moore
Lab 8

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Finn Moore Lab 8 Binary Search\n";
   	int ticket, comparisons=0, left=0, right=10, middle;  
	int lucky[10]={13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	sort(lucky,lucky+10);
	cout << "Enter number: ";
	cin >> ticket; 
	bool found=0;
	while (left <= right && !found){
		middle = (left+right)/2; 
		comparisons+=1;
		if (lucky[middle]==ticket){
			found=1;
			cout << "Winner!\n" << comparisons << " comparisons.\n";
		}
		if (lucky[middle]<ticket){
			left=middle+1;
		}
		else {
			right=middle-1;
		}
	}
	if (!found){
		cout << "No winning ticket.\n";
	}
	return 0;
}


