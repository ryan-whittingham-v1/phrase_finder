#include<stdio.h>
#include<ctype.h>
#include<string.h>

struct phrase {
        int phraseCount;
        char phraseText[201];
        int length;
};

void phrasePrint(struct phrase *dic, int totalPhraseNum){
	
	int k =0;	
	while(k < totalPhraseNum){
        	printf("%05i %s\n", dic[k].phraseCount, dic[k].phraseText);
        k++;
        }
}
