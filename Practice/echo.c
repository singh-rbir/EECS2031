#include <stdio.h>

int main(int argc, char *argv[]){
  while(--argc > 0){
    printf("(*++argv)[0]: %c\t \t ", (*++argv)[0]); // prints the first char of the next word
    printf("*++argv[0]: %c\n", *++argv[0]); // goes about printing the next char of the same word

    //printf("%s%s\n", *++argv, (argc > 1) ? " " : "");
  }

  return 0;

  /* CONCLUSION OF THE ABOVE (and below) EXHAUSTIVE CODING:
  if char *argv[5] has a defined size inside those braces, then you cannot
  increment like (*++argv)[0], you have to use *(argv + 1)[0] in order to move to the
  next word and get it's first character. BUT, if the size is not defined like
  (char *argv[]) then you can use (*++argv)[0] to move to the next words and
  get their first chars. Meanwhile, for traversing inside a particular string
  remains the same in both cases, and is done by *++argv[0], i.e. no braces needed
  becuase the [0] binds much stronger than ++.


  // /* Lets try to do the same with chars now... */
  // char *arr[5]; /* int i; */
  // printf("");
  //
  // arr[0] = "hello";
  // arr[1] = "world";
  // arr[2] = "sup";
  //
  // printf("*arr[0]: %c\n", *arr[0]); /* prints first character of first word */
  // printf("*++arr[0]: %c\n", *++arr[0]); /* prints next char of first word */
  // printf("*(arr + 1)[0]: %c\n", *(arr + 1)[0]); /* prints first char of next word */


}
