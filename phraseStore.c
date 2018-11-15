#include<stdio.h>
#include<string.h>
#include"prgm4.h"

void phraseStore(struct phrase *dic, char *temp, int phraseNum){

	strcpy(dic[phraseNum].phraseText, temp);
	dic[phraseNum].phraseCount += 1;

}
