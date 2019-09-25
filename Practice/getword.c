#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* METHOD NOT COMPLETE */

  /* DIDNT MAKE SENSE WHEN IT CAME TO THIS POINT AS IT RELIED ON
  GETCH AND UNGETCH FUNCTION. THE RELEVANCE OF THE MATERIAL IS TO BE
  QUESITONED AT THIS TIME */

int main(){
  char *s;
  printf("%s", "Enter a string: ");
  while(scanf("%s", s) == 1){
    printf("%s", s);
    if(s[sizeof(s) - 1] == '\0'){
      printf("\n");
      printf("%s", "Enter a string:");
    }
  }

  return 0;
}
