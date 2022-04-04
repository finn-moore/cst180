/*
Finn Moore
Program 6
in: file of test scores
processing:
	average: add values in array, divide by number of values
	min/max: loop through array, if value >/< min/max, update min/max
	standard dev: loop through array, sum up square differences between
		value and the average, squareroot the inverse of the array size
		multiplied by sum of square differences
	quartile summary: counts number of values in each quartile
out:
	number of data elements
	mean
	maximum data value
	minimum data value
	standard deviation
	summary of quartiles 
*/
#include <bits/stdc++.h>
using namespace std;

int input(int []);
float average(int [], int );
void maxmin(int [], int , int& , int& );
float stdev(int [], int , float );
void quartile(int [], int );
int main(){
	//id
	cout << "Finn Moore Program 6\n";

	//define array
	int arr[500];
	//get input, record # of inputs
	int size=input(arr);
	//average value of array
	float avg=average(arr,size);
	//define min and max to max int and min int 
	int min=INT_MAX; int max=INT_MIN;
	//update max and min with values from array
   	maxmin(arr, size, max, min);
	//calculate standared deviation of array
	float stdev1=stdev(arr, size, avg);
	//output values
	cout <<  "Number of data elements in data set: " << size;
	cout << "\nMean (average): " << avg << "\nMaximum data value: ";
	cout << max << "\nMinimum data value: " << min;
	cout << "\nStandard deviation: " << stdev; 
	cout << "\nNumber of Values per quartile: \n";
	//call quartile function to output # values in each quartile
	quartile(arr, size);
	cout << endl;
	return 0;
}
//counts and outputs number of values in all four quartiles
void quartile(int arr[], int size){
	//init sums for each quartile
	int q1=0;int q2=0;
	int q3=0;int q4=0;
	//loop thru array
	for (int i=0;i<size;i++){
		//check quartile for each value, inc sum
		if (arr[i]<25){
			q1++;
		}
		else if (arr[i]<50){
			q2++;
		}
		else if (arr[i]<75){
			q3++;
		}
		else {
			q4++;
		}
	}
	//output number of values in each quartile
	cout << "Quartile 1: " << q1 << "\nQuartile 2: " << q2;
	cout << "\nQuartile 3: " << q3 << "\nQuartile 4: " << q4;
}
//calculates the standard deviation of an array
float stdev(int arr[], int size, float avg){
	float sum=0;
	//loop thru array and sum up square differences
	for (int i=0;i<size;i++){
		sum=sum+(arr[i]-avg)*(arr[i]-avg);
	}
	//multiply by inverse of size, square root and return
	return sqrt((1.0/size)*sum);
}
//calculates min and max values of array
void maxmin(int arr[], int size, int &max, int &min){
	//loop thru array
	for (int i=0;i<size;i++){
		//update max is value is >
		if (arr[i]>max){
			max=arr[i];
		}
		//update min if value is <
		else if (arr[i]<min){
			min=arr[i];
		}
	}
}
//compute average of integer array
float average(int arr[], int size){
	int sum=0;
	//loop thru array, add values to sum
	for (int i=0;i<size;i++){
		sum+=arr[i];
	}
	//divide sum by size and return
	return (float)sum/size;
}
//build array of values from data file
int input(int arr[]){
	int i=0;
    ifstream ifile;
	ifile.open("array_pgmdata.txt");
	//check for failure
	if (!ifile)
	{
		cout << "File open failure!";
	}
	//put inputs from file into array
	else {
		while (ifile >> arr[i]){
			i++;
		}
	}
	ifile.close();
	//return number of input values in array
	return i+1;
}


