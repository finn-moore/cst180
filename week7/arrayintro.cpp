//Project Name:  Lab 7b Arrays
//Programmer Name:  Finn Moore
//Description:  add program description

#include <iostream>
using namespace std;

//Function Prototypes
int roundDoubleToInt (double);
void sortArray(int[], int);
void display();

const int SIZE = 100;  //used to limit array size

int main()
{
	//Declare data objects
	int arr[101];
	int count=0;
	int score;
	int total=0;
	//Definition of function display.
	//Display name and lab number.
	display();

	//Input data
	//Loops until user enters -1
	cout <<"Enter test scores." << endl;  //this is a priming read

	do //until user enters a negative value
	{
		cin >> score;
		do  //error checking for values over 100
		{
			if (score > 100){
			cout << "\nError: Enter number <= 100\n";
			
			cin >> score;
			}
        	//add code here for error checking
		
        } while (score > 100);

		if (score >= 0)	
		{	
			arr[count]=score;
            //process valid entry
            //store in array
            //accumulate total
			total+=score;
            //keep count of the number of values entered into array
			count++;
		}
		
	} while (count < 100 && score >= 0);


	//Calculate average score
	double avg=(double)total/count;
	//Sort scores highest to lowest with bubble sort.
	//Pass array to sort routine for processing
	sortArray(arr, count);
	//Output array in descending order and averages, totals, etc
	cout << "\nArray in descending order: \n";
	for(int i=0;i<count;i++){
		cout << arr[i] << endl;
	}
	cout << "Total: " << total << endl;
	cout << "Average: " << roundDoubleToInt(avg) << endl;
    system("pause");
    
	return 0;
}


//sort scores descending 
void sortArray(int nums[], int count)
{
	int hold, a, b;						// a and b are subscripts.
	for(a = 0; a < count-1; a++)		//Start first loop with 0.
	{
		for(b = a + 1; b < count; b++)	//Start second loop with 1.
		{
			if(nums[a] < nums[b])		//Compare nums[0] to numbs[1].
			{
				hold = nums[a];			//If first is bigger,
				nums[a] = nums[b];		//swap the two
				nums[b] = hold;
			}
		}
	}
}


//display program information
void display()
{
	cout <<"Array Lab." << endl;
	cout <<"Programmed by Finn Moore" <<endl;
}


//round a double to closest integer
int roundDoubleToInt(double d)
{
	int result;

	if (d > 0) result = (int)(d + 0.5);    //result = dresult + 0.5
	else result = (int)(d - 0.5);          //result = deresult - 0.5

	return result;
}

