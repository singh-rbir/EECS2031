#include <stdio.h>

#define MAXVAL 20
//void setA(void);
//void setArr(void);

int a = 20;
int arr[MAXVAL];

int getA(){
  a = 10;
  printf("%s\n", "Accessed getA");
  return a;
}

void setArr(){
  int i = 0, count = 0;
  while(i < MAXVAL){
    arr[i++] = ++count;
  }
}

/*
int main(){
  setA();
  setArr();
  printf("%d\n", a);
  printf("%d\n", arr[MAXVAL - 1]);
  return 0;
}
*/
