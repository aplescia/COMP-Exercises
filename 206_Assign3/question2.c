//make-believe shell v1.0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char prompt[50] = "Welcome to your custom shell";
	char input[100];
	char s[2] = " ";
	char *token;
	
	
	while(1){

		
		printf("%s", prompt);
		fgets(input, 99, stdin);
		input[strlen(input) - 1] = '\0';
		
		//printf("%s", input);
		
		if (strcmp(input, "QUIT") == 0){
			break;
		}
		else if (strcmp(input, "SET PROMPT") == 0){
			token = strtok(input, s);
			printf(token);
		}else{
			system(input);
			continue;
			}
		}
	}














