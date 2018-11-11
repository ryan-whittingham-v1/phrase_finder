#include<stdio.h>

int main(){


	struct phrase {
		int phraseCount;
		char phraseText[201];
	};
	
	struct phrase dictionary[1000];
	
	int i=0, j=0, c=1;

	while (c != EOF){
		c = getchar();
		dictionary[j].phraseText[i]=c;
		i++;	
	}
	
	dictionary[j].phraseText[i-1]='\0';

	printf("%s", dictionary[j].phraseText); 
	
	return 0;
}	
