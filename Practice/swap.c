#include <stdio.h>

void swap1(int, int);
void swap2(int*, int*);
int main(){
  int a = 5, b = 6;
  printf("Before swapping: a = %d, b = %d\n", a, b);
  /* After using the incorrect method for swapping */
  swap1(a, b);
  printf("After swap1: a = %d, b = %d\n", a, b);
  /* After using the correct swap method */
  swap2(&a, &b);
  printf("After swap2: a = %d, b = %d\n", a, b);
}

void swap1(int a, int b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}

void swap2(int *a, int *b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
