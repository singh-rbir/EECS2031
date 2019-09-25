#include <stdio.h>

typedef char *String;
typedef struct tnode *Treeptr;
typedef struck tnode Treenode;


/* EXAMPLES OF STRUCTS */
struct point{
 int x;
 int y;
} a, b, c;

struct rect{
  struct point p1;
  struct point p2;
};

struct key{
  char *word;
  int count;
} keytab[100];

struct tnode{
  char *word;
  int count;
  struct tnode *left;
  struct tnode *right;
}

int main(){
  struct point maxpt = {320, 320};
  struct point d;
  d.x = 100; d.y = 200;

  printf("maxpt: (%d, %d)\n", maxpt.x, maxpt.y);
  printf("point d: (%d, %d)\n", d.x, d.y);

  struct point *pp = &d;
  printf("d(x, y) = (%d, %d)\n", (*pp).x, (*pp).y);

}

char *strdup(char *s){
  char *p;
  p = (char *)(malloc(strlen(s) + 1));
  if(p != null)
    strcpy(p, s);
  return p;
}
