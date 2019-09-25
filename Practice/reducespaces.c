#include <stdio.h>

// Counts blanks, tabs and newlines in input

// this code took me quite some time to figure it out. It might look simple at first to begin with
// but its certainly a bit more that what meets the mind at first

int main(){
	int c;
	
	while((c = getchar()) != EOF && c != '0'){
		if(c == ' '){
			while((c = getchar()) == ' '){
				
			} 
			putchar(' ');
			putchar(c);
			
		}
		else{
			putchar(c);
		}
	}
}

