#include <stdio.h>
#include <ctype.h>

int getPhrase(char *buffer){

	int i=0;
	char c; 
	
	while (c != '>'){ //loop till end of phrase
		
                c = getchar(); //get a new character

		// detect if end of file 
		if (c == EOF){
			return -1;
		}
	
                c = toupper(c); // convert to uppercase
		
                // replace \n with single space
                if (isspace(c) > 0){
                        c = ' ';
                }
               
		if (c != '(' && c != ')' && c != '\'' && c != '\"' && c != '-'){ //ignore these characters
	
                	if (i==0){ // if beginning of phrase
                        	buffer[i]='<';
				// store character if not space or special character
                        	if (c != ' ' && c != '.' && c != ',' && c != ';' && c != ':' && c != '?' && c != '!'){
					i++;
					buffer[i]=c;
					i++;
				}
                        }

			// if end of phrase
                	else if (c == '.' || c == ',' || c == ';' || c == ':' || c == '?' || c == '!'){
                        	if (i != 0){ // not the beginning of a phrase
					c='>';
                        		buffer[i]=c;
                        		buffer[i+1]='\0'; // add null terminator
				}
                 	}	

			else { // store regular character 
				buffer[i]=c; 
               		        i++;
			}
		}
	}
	return 0;
}
