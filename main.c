#include<stdio.h>
#include<ctype.h>

int main(){


	struct phrase {
		int phraseCount;
		char phraseText[201];
	};
	
	struct phrase dictionary[1000];
	
	int i=0, j=0, c=1, k=0;

	/////////////////    Loop through file  /////////////////
	while (c != EOF){
		
		/////////////  get a character  ////////////////
		c = getchar();
		////////////////////////////////////////////////

		///////   change to uppercase  /////////////////
		c = toupper(c);
		///////////////////////////////////////////////
	
		///////////  Remove extra spaces  ////////////
		if (isspace(c) > 0){
			c = ' ';
		}
		///////////////////////////////////////////////
		
		///////////////   start of phrase  //////////////
		if (i==0){
			dictionary[j].phraseText[i]='<';
			if(c != ' '){
				i++;
				dictionary[j].phraseText[i]=c;
				i++;
			}
		}
		//////////////////////////////////////////////////

		///////////////////  end of phrase  //////////////
		else if (c == '.' || c == ',' || c== ';' || c == ':' || c == '?' || c == '!'){
			c='>';
			dictionary[j].phraseText[i]=c;
			dictionary[j].phraseText[i+1]='\0';
			j++;
			i=0;
		}
		
		////////////  ignore specific punctuation  ////////
		else if (c == '(' || c == ')' || c == '\'' || c == '\"' || c == '-'){
			//do nothing	
		}
		////////////////////////////////////////////////
	
		else{
			dictionary[j].phraseText[i]=c;
			i++;
		}
		//////////////////////////////////////////////////
	}
	//////////////////////////////////////////////////////////
	
	dictionary[j].phraseText[i-1]='\0';

	/////////////////////  print phrases  ///////////////////
	while (k < j){
		printf("Phrase %i = %s\n", k, dictionary[k].phraseText); 
		k++;
	}
	////////////////////////////////////////////////////////

	//////////////////////  compare phrases  ///////////////
	int ret = strcmp(dictionary[0].phraseText, dictionary[1].phraseText);

        if (ret == 0){
                printf("Those phrases are the same.\n");
	}
	///////////////////////////////////////////////////////

	return 0;
}	
