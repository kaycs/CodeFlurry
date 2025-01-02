#include <stdio.h>

int main() {
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial = 1;
  int i = 0 ;
  int sol;
  for (i=0; i < 10; i++){
   /*sol = factorial * array[i];*/
   factorial += array[i];
  }  
  /* calculate the factorial using a for loop  here*/

  printf("10! is %d.\n", sol);
}