#include <stdio.h>
#include <stdlib.h>
#define NUMBER_COUNT_MAX 100

size_t read_numbers(int numbers[], size_t n) {
  unsigned int i = 0;

  /* note that in Linux you can signal end of file/stream by key combination ctrl-d */
  // loops until the NUMBER_COUNT_MAX is reached
  // and until the end of the array of numbers entered by the user is reached.
  // returns the total number of numbers in the array.
  while (i < n && scanf("%d", &numbers[i]) != EOF) {
    i++;
  }

  return i;
}

int main(int argc, char *argv[]) {
  int numbers[NUMBER_COUNT_MAX];
  size_t numberlen;
  int i, sum;

  numberlen = read_numbers(numbers, NUMBER_COUNT_MAX);
  for (sum = 0, i = 0; i < numberlen; sum += numbers[i], i++);
  printf("read %d integers, total: %d\n", numberlen, sum);

  return 0;
}
