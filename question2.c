//make-believe shell v1.0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char prompt[50] = "Welcome to your custom shell";
	char input[20];
	char s[2] = " ";
	char *token;
	

	while(1){

		
		printf("%s", prompt);
		scanf("%s", input);
		//printf("%s", input);
		if (strcmp(input, "ls") == 0){
			system("ls");
			continue;
		}
		else if (strcmp(input, "QUIT") == 0){
			break;
		}
		else{
			token = strtok(input, s);
			if (strcmp(token, "SET") == 0){
				while(token != NULL){
				printf("%s\n", token);
				token = strtok(NULL, s);
				if (strcmp(token, "PROMPT" == 0)){
					token = strtok(NULL, s);
					strcpy(prompt, token);
					continue;
				}

			}


			}
			




		}


}
}









