/*
Finn Moore
Palindrome Lab

i: a word less than an arbitrary # of characters
p: 
	use strlen to get length of word
	copy array in reversed order by using length - index - 1
	use strcmp to compare reversed word to forward word
o: output whether string is palindrome
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	//id
	cout << "Finn Moore Palindrome Lab\n";
	//declare array
    char word[50];
	//prompt
	cout << "Enter a word < 50 characters: ";
	//input word
	cin >> word;
	//store length in var using strlen
	int length = strlen(word);
	//declare array to copy word 
	char revword[length];
	//loop through word
	for (int i=0;i<length;i++){
		//change letter to upper
		word[i]=toupper(word[i]);
		//store letters in reverse order
		revword[length-i-1]=word[i];
	}
	//strcmp to check if strings are the same
	if (strcmp(word, revword)==0){
		cout << "Word is a palindrome.";
	}
	else {
		cout << "Word is not a palindrom.";
	}
	cout << endl;
		
	return 0;
}


