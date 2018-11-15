struct phrase {
	int phraseCount;
	char phraseText[201];
	int length;
};

int getPhrase(char *);
int phraseCompare(struct phrase *, char *, int);
void phraseSort(struct phrase *, int);
void phrasePrint(struct phrase *, int);
void phraseStore(struct phrase *, char *, int);

