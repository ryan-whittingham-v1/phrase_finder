main: main.o getPhrase.o phrasePrint.o phraseStore.o phraseCompare.o phraseSort.o
	gcc -o main main.o getPhrase.o phrasePrint.o phraseStore.o phraseCompare.o phraseSort.o
main.o: main.c prgm4.h
	gcc -c main.c
getPhrase.o: getPhrase.c
	gcc -c getPhrase.c
phrasePrint.o: phrasePrint.c prgm4.h
	gcc -c phrasePrint.c
phraseStore.o: phraseStore.c prgm4.h
	gcc -c phraseStore.c
phraseCompare.o: phraseCompare.c prgm4.h
	gcc -c phraseCompare.c
phraseSort.o: phraseSort.c prgm4.h
	gcc -c phraseSort.c
