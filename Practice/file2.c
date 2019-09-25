#include <stdio.h>
#include <stdlib.h>
//#include "file1.c"

/* Just a normal macro */
#define dprint(expr) printf(#expr " = %g\n", expr)

/* file 1 and file 2 are used for trying out the topics of file scope,
 using static variables and functions, and scope of variables outside
 the files.
 To compile both of them and for proper results:
 don't include "file1.c" into file2.c. Nor the vice versa.
 Just do "gcc -Wall file1.c file2.c -o file"
 */

//extern int a;
//extern int getA();
//static int a;
//extern int arr;

int main(){
  //extern int a;
  char * arr = "12345";
  int num = atoi(arr);
  printf("%d\n", num);
  //a = 30;
  //a = getA();
  //printf("%d\n", a);
  return 0;
}
