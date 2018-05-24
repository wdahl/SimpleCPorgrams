#include <stdio.h>
#include <stdlib.h>
#define NUMBER_COUNT_MAX 100 // Sets max number count to 100

// Main function to read in a list of integers into a array
// and then print the min value in the list to std out
int main(){
	int numbers[NUMBER_COUNT_MAX]; // Creates a int array of size 100
	int numlen = 0; // holds the number of ints put into the array
	int i = 0; // counter for the array index
	int min; // hold min value

	// loops until make number count in reached or EOF is reached
	// reads the numbers int the array
	while(i<NUMBER_COUNT_MAX && scanf("%d", &numbers[i]) != EOF){
		numlen++; // increases the number counter
		i++; // increases the index
	}

	// Checks if there were no numbers entered
	if(numlen == 0){
		printf("no input numbers\n");
	}

	else{
		min = numbers[0]; // Sets min to first int in array

		// loops throught the array
		for(i=1; i<numlen; i++){

			// checks if current min is greater than ext number in the list
			if(min > numbers[i]){
				min = numbers[i]; // sets min equal to the number in the array at i
			}
		}

		printf("%d\n", min);
	}
}