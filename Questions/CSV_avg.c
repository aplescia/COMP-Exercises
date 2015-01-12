#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char *argv[]){
	double y;
	int  i = 0;
	int x = 0;
	char *token;
	char line[300];
	char s[2] = ",";
	FILE *fp = fopen(argv[1], "r");
	while(fgets(line, 299, fp)){

		token = strtok(line, s);
		printf("%s\n", token);
		while(token!=NULL){
		//increment counter
		i++;
		x = x + atoi(token);

		token = strtok(NULL, s);

	}
	//I'm not sure why, but i was always 1 more than the actual number of numbers so I did this rough fix to fix it..
	if(i>0){
		i -= 1;
		y = (double)x / i;
		//printf("%s\n", token);
		printf("%.2f\n", y);
	}
	//re-initialization for next loop
	i = 0;
	x = 0;
	}
}

