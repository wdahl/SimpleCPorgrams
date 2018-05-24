#include <stdio.h>
#include <string.h>
 
// Fuction to out out the octal form of the permssion given
int main(void) {
  char rwx[10]; // char array
  int i = 0; // index counter for rows of hold
  int j; // index counter for colums of hold
  int index = 0; // inex counter for rwx
  int sum = 0; // digit of octal form
  int len = 0; // length of rwx 
  fgets(rwx, 10, stdin); // intializes rws with input
  rwx[strcspn(rwx, "\n")] = 0; // changes any '\n' in rwx to a 0
  char hold[3][3]; // two dimensinal  array to hold the permission

  // loops through the given permission
  for(i=0; rwx[i] != 0; i++){

    // checks if the permsiion contains any invlaid charecters
    if(rwx[i] != 'r' && rwx[i] != 'w' && rwx[i] != 'x' && rwx[i] != '-'){
      printf("invalid permission\n");
      return 0;
    }

    len++; 
  }

  // checks if length of rwx is less than 9 and if so prints invalied permission
  if(len < 9){
    printf("invalid permission\n");
    return 0;
  }

  // intializes hold
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      hold[i][j] = rwx[index];
      index++;
    }
  }

  // loops through holds rows
  for(i = 0; i<3; i++){

    // checks for vaild placment of charecters through the permission 
    if(hold[i][0] == 'r'){
      sum += 4; // adds 4 to get octal digit 
    }

    else if(hold[i][0] != '-'){
      printf("invalid permission\n");
      return 0;
    }

    if(hold[i][1] == 'w'){
      sum += 2; // adds two to get octal digit
    }

    else if(hold[i][1] != '-'){
      printf("invalid permission\n");
      return 0;
    }

    if(hold[i][2] == 'x'){
      sum++; // adds one to get octal digit
    }

    else if(hold[i][2] != '-'){
      printf("invalid permission\n");
      return 0;
    }

    printf("%d", sum);
    sum = 0;
  }

  printf("\n");
  return 0;
}

