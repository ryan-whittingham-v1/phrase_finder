#include<stdio.h>
#include<ctype.h>
#include<string.h>

struct phrase {
	int phraseCount;
	char phraseText[201];
};

int getPhrase(char *);
int phraseCompare(struct phrase *, char *, int);

int main(){

	struct phrase dictionary[1000];
	
	int c =0, i=0, k=0, r=0;
	int ret = 0;
	char tempPhrase[201];

	/////////////////  Loop through file  /////////////////
	while (1==1){
		
		//////////// get a phrase  ///////////
		c=getPhrase(tempPhrase);
		/////////////////////////////////////
		
		//////////  if end of file detected  /////////////
		if (c == -1){
			break;
		}
		//////////////////////////////////////////////
		
		///////////  compare phrase to existing phrases  /////////
		r=phraseCompare(dictionary, tempPhrase, i);
		/////////////////////////////////////////////////////////
	
		if (r != 0){ // not a duplicate
					
		//////  store new phrase into the dictionary  /////////
		strcpy(dictionary[i].phraseText, tempPhrase);
		dictionary[i].phraseCount += 1;	
		i++; //increment dicitonary index
		/////////////////////////////////////////////////////////
		}
	}	

	/////////   print phrases  ////////
	while(k < i){
	printf("phrase count = %i phrase = %s\n", dictionary[k].phraseCount, dictionary[k].phraseText);
	k++;	
	}
	////////////////////////////////////


	return 0;
}	
