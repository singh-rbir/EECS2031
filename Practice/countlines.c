#include <stdio.h>

// Counts blanks, tabs and newlines in input
int main(){
	int c;
	long lines = 0;
	while((c = getchar()) != EOF && c != '0'){
		if(c == '\n' || c == ' ' || c == '\t'){
			lines++;
		}
	}
	printf("\nThe number of blanks/tabs/lines: %ld\n", lines);
}