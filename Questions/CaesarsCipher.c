
//Simple Caesar's Cipher Program//
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//the three "keys" to be used
	int key1;
	int key2;
	int key3;
	char input[100];
	printf("%s", "Please enter no more than 100 characters.\n");
	//gets the input from the user
	fgets(input, 100, stdin);
	printf("%s\n", "Please enter your value for key1, key2, and key3");
	//gets the key values
	scanf("%d" "%d" "%d", &key1, &key2, &key3);
	size_t x = strlen(input) - 1;
	//printf("Your input size is : %d\n", x);

	/* three loops to iterate at every first second and third character, respectively*/
	for (int i = 0; i < x; i = i+3){
		if (input[i] == ' '){
		}
		//avoids anything but letters, and used in each loop
		else if ( (input[i]>='a'&& input[i]<='z') || (input[i]>='A' && input[i]<='Z')){
		input[i] = input[i] + key1;
		}		
	}
	for (int k = 1; k < x; k = k + 3){
		if (input[k] == ' '){
				}
				else if ( (input[k]>='a'&& input[k]<='z') || (input[k]>='A' && input[k]<='Z')){
				input[k] = input[k] + key2;
				}		
		}
	for (int j = 2; j < x; j = j + 3){
			if (input[j] == ' '){
					}
					else if ( (input[j]>='a'&& input[j]<='z') || (input[j]>='A' && input[j]<='Z')){
					input[j] = input[j] + key3;
					}		
	}
		printf("Cipher: %s", input);
		printf("%s\n", "Done.");
	}