#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int c, state, tracker;
	int i, j, k;
	int lengths[15];

	// Very important to initailze every value of the array to 0
	for(k = 0; k < 16; ++k){
		lengths[k] = 0;
	}
	printf("%d\n", k);
	

	printf("Enter a string (less than 15 words) to draw a histogram of each word's lengths: ");
	tracker = 0;
	state = OUT;
	while((c = getchar()) != EOF && c != '0'){
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			if(tracker < 16){
				++tracker;
			}
		}
		else if(state == OUT){
			state = IN;
			
		}
		if(state == IN){
			lengths[tracker]++;
		}
	}

	// Printing the histogram
	for(i = 0; i < 15; ++i){
		for(j = 0; j < lengths[i]; ++j){
			if(j == (lengths[i] - 1)){
				printf(" = \n");
			}
			else{
				printf(" = ");
			}
		}
	}
	
}