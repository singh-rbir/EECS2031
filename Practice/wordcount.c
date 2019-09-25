#include <stdio.h>

#define IN 1	// inside a word
#define OUT 0	// outside a word


int main(){
	int c;
	int words = 0;

	int state = OUT;
	while((c = getchar()) != EOF && c != '0'){
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
		}
		else if(state == OUT){
			++words;
			state = IN;
		}
	}
	printf("Number of words: %d\n", words);

	int digits[10], i;
	for (i = 0; i < 10; i++){
		printf("Number %d\n", i);
	}
}