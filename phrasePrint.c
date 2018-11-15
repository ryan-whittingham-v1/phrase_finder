#include<stdio.h>
#include"prgm4.h"

void phrasePrint(struct phrase *dic, int totalPhraseNum){
	
	int k=0;	
	while(k < totalPhraseNum){
        	printf("%05i %s\n", dic[k].phraseCount, dic[k].phraseText);
        k++;
        }
}
