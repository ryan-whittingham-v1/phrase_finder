#include<stdio.h>
#include<string.h>

struct phrase {
        int phraseCount;
        char phraseText[201];
        int length;
};


void phraseStore(struct phrase *dic, char *temp, int phraseNum){

	strcpy(dic[phraseNum].phraseText, temp);
	dic[phraseNum].phraseCount += 1;

}
