#include<stdio.h>
#include<string.h>
#include"prgm4.h"

int phraseCompare(struct phrase *dic, char *temp, int totalPhraseNum){

	int ret =0;
	int i = 0;
	
	// loop through phrases
	while (i <= totalPhraseNum){
		
		// compare temp phrase with phrases in dictionary
		ret = strcmp(temp, dic[i].phraseText);
		
		if (ret == 0){ // if a duplicate
			dic[i].phraseCount += 1; 
			return 0;
		}
	
		else { //increment index to check next phrase
			i++;
		}
		
	
	}
	return -1; // not a duplicate
}
