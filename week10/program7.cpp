/*
Finn Moore
Program 7

input: string

processing:
	findlength: function for finding length
		loop thru string and inc a counter
	
	convertcaps: function for converting the sentence to all caps
		loop thru string, subtract 32 from lowercase letters to convert to caps
	
	countletters: function for counting the number of alphabetical chars
		loop thru string, inc counter for each char in alphabetical ascii range

	countvowels: function for counting the number of each vowel in the sentence
		i solved this by creating an array to store values for a e i o u, and total
		loop thru array 
			for each char matching the ascii codes for the vowel, inc the appropriate index of the array 
	
	countwords: function for counting the number of words in a string
		inc counter for each space followed by a non-space char 
		and if the last non-space char is followed by a null (null is apparently considered = to the space)

	reverse string: function for reveresing a string
		pseudocode:
			loop from i equals 0 to len-1
				set copy string index len – i – 1 to original string index i 

output: 
	cout values from each function.
	if value is an array of sorts, use loops accordingly
*/
#include <bits/stdc++.h>
using namespace std;

int FindLength(char []);
void ConvertCaps(char [], char []);
int CountLetters(char []);
int* CountVowels(char []);
int CountWords(char []);
void ReverseString(char [], char[], int);

int main(){
	//id
	cout << "Finn Moore Program 7\n";
	
	//declare array to store sentence
	char sentence[80];
	
	//promt operator to enter sentence
	cout << "Enter sentence: ";
	cin.getline(sentence, 80);

	//output information
	cout << "====== Analysis ======\n";
	//store length for reverse fn
	int len=FindLength(sentence);
	cout << "Length: " << len << endl;

   	cout << "In capitals: ";  
	//define array to store caps sentence
	char caps[80]; int i=0;
	ConvertCaps(sentence, caps);
	//loop through array, output each char
	for (i=0;i<len;i++){
		cout << caps[i];
	}
	cout << endl;

	int letters=CountLetters(sentence); 
	cout << "# Letters: " << letters << endl;
	cout << "# of each vowel: A:"; 

	//catch pointer
	int* c;
	c=CountVowels(sentence);

	//print # each vowel
	cout << *c << " E:" << *(c+1) << " I:" << *(c+2) << " O:" << *(c+3) << " U:" << *(c+4) << endl; 

	//print consonants (letters - # vowels)
	cout << "# Consonants: " << letters - *(c+5) << endl;

	cout << "# Words: " << CountWords(sentence) << endl;

	//declare empty string
	char copy[80];
	ReverseString(sentence, copy, len); 
	cout << "Reversed: "; 
	//loop thru array, output reversed string
	for (i=0;i<len;i++){
		cout << copy[i];
	}
	cout << endl;

	cout << "=====================\n";

	return 0;
}

//copy the sentence in reverse order
void ReverseString(char s[], char cp[], int len){
	for (int i=0;i<len;i++){
		cp[len-i-1]=s[i];
	}
}
//count the number of words in a sentence
int CountWords(char s[]){
	//define index and counter
	int i=0, c=0;
	//loop until null
	while (s[i]!='\0'){
		//if there is space followed by non-space, inc counter
		if (s[i]==' ' && s[i+1]!=' '){
			c++;
		}
		else if (s[i]!=' ' && s[i+1]=='\0'){
			c++;
		}
		i++;
	}
	return c;
}

//return the length of the sentence
int FindLength(char s[]){
	//define counter
	int i=0;
	//loop until null and count chars
	while (s[i]!='\0'){
		i++;
	}
	return i;
}

//convert sentence to all capitals
void ConvertCaps(char s[], char r[]){
	//define index and array
	int i=0;
	//loop until null
	while (s[i]!='\0'){
		//if char is lower case letter, turn to upper by subtracting 32
		if (s[i]>96 && s[i]<123){	
			r[i]=s[i]-32;
		}
		else {
			r[i]=s[i];
		}
		//inc index
		i++;
	}
}

//determine the number of letters in the sentence
int CountLetters(char s[]){
	//define counter and index
	int c=0, i=0;
	//loop until null
	while (s[i]!='\0'){
		//if ascii value of char is in range of alphabet
		if ((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123)){
			//inc counter
			c++;
		}
		//inc index
		i++;
	}
	return c;
}

//determine number of each vowel
int* CountVowels(char s[]){
	//array for a, e, i, o, u and total number of vowels 
	static int c[6];
	//index
	int i=0;
	//loop until null
	while (s[i]!='\0'){
		//if a
		if (s[i]==65 || s[i]==97){
			//inc counter for a
			c[0]++;
			c[5]++;
		}
		//else if e
		else if (s[i]==69 || s[i]==101){
			//inc counter for e
			c[1]++;
			c[5]++;
		}
		//etc	
		else if (s[i]==73 || s[i]==105){
			c[2]++;
			c[5]++;
		}	
		else if (s[i]==79 || s[i]==111){
			c[3]++;
			c[5]++;
		}	
		else if (s[i]==85 || s[i]==119){
			c[4]++;
			c[5]++;
		}
		//inc index	
		i++;
	}
	return c;
}			
