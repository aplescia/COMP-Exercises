//Hash Function


#include <stdio.h>
#include <Math.h>

//global variable for sentence to make the program easier to read and debug
char sentence[100];

//returns an unsigned long long 
unsigned long long int hash(int key){
	int sum;
	int i = 0;
	while (sentence[i] != '\0'){
		sum = sum+sentence[i];
		i++;
	}
	sum = sum - 10;
	//printf("%d\n", sum);
	//supports a much wider range of values than int does, but does have limitations at a certain point
	unsigned long long hashNumber = pow(sum, key);
	//printf("%d\n", hashNumber);
	return hashNumber;

}








int main(int argc, char *argv[]) {
	char prompt[200] = "Please enter a sentence. Keep it less than 100 characters: ";
	int key;
	printf("%s", prompt);
	//scanf("\nd", &sentence);
	fgets(sentence, 100, stdin);
	//printf("%s", sentence);
	printf("%s", "Please enter a key: ");
	scanf("%d", &key);
	//prints the value of hash(key)
	printf("%llu\n", hash(key));
	printf("%s\n", "Done.");
	
	
	
}