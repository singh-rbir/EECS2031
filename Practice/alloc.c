#include <stdio.h>
#include <stdlib.h>

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE]; /* storage */
static char * allocp = allocbuf; /* next free positon */

char * alloc(int n){ /* return pointer to n characters */
  if(allocbuf + ALLOCSIZE - allocp >= n){
    allocp += n;
    return allocp - n;
  }
  else{
    return 0;
  }
}

void afree(char *p){
  if(p >= allocbuf && p < allocbuf + ALLOCSIZE){
    allocp = p;
  }
}
