#include <stdio.h>
#include <stdlib.h>
#define NUM_MAX 100

// main function to read numbers into an array
// and permute them
int main(){
	int i = 0; // inex counter
	int numbers[NUM_MAX]; // array of size 100 to hold entered numbers
	size_t len = 0; // length of entered numbers

	// reades entered numbers in an array until EOF is reached or a count of 100
	while(i<NUM_MAX && scanf("%d", &numbers[i]) != EOF){
		len++;
		i++;
	}

	// Checks if length = 0 and prints message to std out
	if(len == 0){
		printf("no input numbers\n");
	}

	// calls permute_array with numbers array and len
	else{
		permute_array(numbers, len);

		// loops through and prints the now permuted array
		for(i=0; i<len; i++){
			printf("%d ", numbers[i]);
		}

		printf("\n");
	}

	return 0;
}