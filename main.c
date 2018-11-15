#include<stdio.h>
#include<string.h>
#include"prgm4.h"

void main(){

	struct phrase dictionary[1000];
	int i=0;
	char tempPhrase[201];

	// Loop through file
	while (1==1){
		
		int c=getPhrase(tempPhrase); //get new phrase
		
		if (c == -1){ // stop loop if end of file detected 
			break;
		}
		
		// compare new phrase with existing phrases in dictionary
		int r=phraseCompare(dictionary, tempPhrase, i);
			
		if (r != 0){ // if not a duplicate
					
		// store new phrase into the dictionary
		phraseStore(dictionary, tempPhrase, i);
		
		// store new phrase length
		dictionary[i].length = strlen(dictionary[i].phraseText);
		
		// increment index
		i++;
		}
	}	

	phraseSort(dictionary, i); // sort phrases by size
	phrasePrint(dictionary, i); // print all phrases in dictionary
}	
