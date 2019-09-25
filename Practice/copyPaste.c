#include <stdio.h>

int main(){
	int c;

	printf("\nEnter a string (or 0 to stop): ");
	while((c = getchar()) != EOF && c != '0'){
		putchar(c);
		
	} 
}