#include <stdio.h>
#include <ctype.h>

int main()
  {
    int c;
    long value;

    value = 0;
    c = getchar();
    while( isdigit( c ) ) {
      value = value*10 + c - '0';
      c = getchar();
    }
    ungetch( c );
    printf( "Value=%ld\n", value );
  }
