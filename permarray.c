#include <stdio.h>
#include <stdlib.h>

// function to permutate an array of ints
// arr is a pointer to an array
// len is the length of the array pointed to by arr
int permute_array(int* arr, size_t len){
	int i; // index counter
	int j = 0; // index counter for switching
	int temp; // hold temp value for switching

	// loops through the array
	for(i=0; i<len; i++){

		// checks if the number at i is less than or equal to zero
		// if so switches the vaule with the value at j
		if(arr[i] <= 0){
			// switches the number at i with the number at j
			temp = arr[j]; 
			arr[j] = arr[i];
			arr[i] = temp;
			j++;
		}
	}

	// Bubble sort
	for(i=0; i<len-1; i++){
		for(j=0; j<len-i-1; j++){ 
			// checks if the number at j is greater than 0
			if(arr[j] > 0){
				// caries out the bubble sorting algoithm on only numbers greater than 0
				if(arr[j] > arr[j+1]){
					// switches the number at j with the next on in the array
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}

	return 0;
}