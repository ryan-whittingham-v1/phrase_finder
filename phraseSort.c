#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct phrase {
        int phraseCount;
        char phraseText[201];
        int length;
};

void phraseSort(struct phrase *dic, int totalPhraseNum){

	int i, j; 
	struct phrase temp[1];
	
	for (i=0; i<totalPhraseNum-1; i++){
		for(j=i+1; j<totalPhraseNum; j++){
			if(dic[i].length > dic[j].length){
				
				////////////  sort text //////////////
				temp[0]=dic[i];
				dic[i]=dic[j];
				dic[j]=temp[0];
				///////////////////////////////////////
			
			}
		}
	}

}
