/*
Finn Moore
Lab 8

i: n/a
p: two arrays are declared and sorted using bubble and selection sort
	bubble sort: goes through array swapping based on whether the elemnt is >< the adjacent element
	selection sort: finds the min of the array and swaps it with the bottom elemen of array
	both sorts use two for loops
o: sorted array, number of exchanges 
*/
#include <bits/stdc++.h>
using namespace std;

//prototypes
int bubble(int array[]);
int selection(int array[]);

int main(){
	//identification
	cout << "Finn Moore Lab 8 Sorting\n";
	//declare arrays
	int arr1[]={67,90,102,4,16,32,18,23,2,112,78,43,26,13,37,22,96};	
	int arr2[]={67,90,102,4,16,32,18,23,2,112,78,43,26,13,37,22,96};	
	int count;
	//catch exchanges value, perform sort
	count=bubble(arr1);
	//output sorted array and exchanges
	cout << "Bubble sorted array: ";
	for (int i=0;i<17;i++){
		cout << arr1[i] << " ";
	}
	cout << "\nExchanges: " << count;
	//same as above but for selection sort function
	count=selection(arr2);
	cout << "\nSelection sorted array: ";
	for (int i=0;i<17;i++){
		cout << arr2[i] << " ";
	}
	cout << "\nExchanges: " << count << endl;

	return 0;
}

//sorts an array using selection sort and return the number of exchanges it took to sort 
int selection(int array[]){
	int size=17, count=0;
	//inc through array 
	for (int i=0;i<size-1;i++){
		//set min index to i by default
		int min=i;
		//loop through rest of array and set min to index of min value
		for (int j=i+1;j<size;j++){
			if (array[j]<array[min]){
				min=j;
			}
		}
		//swap min element with bottom element  
		int temp = array[i];
		array[i]=array[min];
		array[min]=temp;
		//inc exchanges value
		count++;
	}
	return count;
}
//sorts an array using bubble sort and returns the number of exchanges needed
int bubble(int array[]){
	int size=17, count=0;
	//inc thru array
	for (int j=0;j<size-1;j++){
		//go through rest of array swapping if necessary
		for(int i=0;i<size-1;i++){
			if(array[i]>array[i+1]){
				//inc exchanges
				count++;
				//swap adjacent values 
				int temp = array[i+1];
				array[i+1]=array[i];
				array[i]=temp;
			}
		}
	}
	return count;
}

