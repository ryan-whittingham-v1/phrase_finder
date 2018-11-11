#include <stdio.h>
#include <ctype.h>

int getPhrase(char *buffer){

	int i=0, c=1; 
	
	while (c != '>'){

                /////////////  get a character  ////////////////
                c = getchar();
                ////////////////////////////////////////////////
		

		//////////// quit if end of file  ////////////////
		if (c == EOF){
			return -1;
		}
		/////////////////////////////////////////////

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
                        buffer[i]='<';
                        if(c != ' '){
                                i++;
                                buffer[i]=c;
                                i++;
                        }
                }
                //////////////////////////////////////////////////

                ///////////////////  end of phrase  //////////////
                else if (c == '.' || c == ',' || c== ';' || c == ':' || c == '?' || c == '!'){
                        c='>';
                        buffer[i]=c;
                        buffer[i+1]='\0';
                 }

                ////////////  ignore specific punctuation  ////////
                else if (c == '(' || c == ')' || c == '\'' || c == '\"' || c == '-'){
                        //do nothing    
                }
                ////////////////////////////////////////////////

                else{
                        buffer[i]=c;
                        i++;
                }
                //////////////////////////////////////////////////
	}
	return 0;
}
