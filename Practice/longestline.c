#include <stdio.h>

#define MAXLINE 1000

// THIS code works now

int getLine(char line[], int maxline);
void copy(char from[], char to[]);

int main(){
	int len; 	//current line length
	int max;	//max length so far
	char line[MAXLINE];
	char longest[MAXLINE];
	const char FINISH_MSG[] = " This is the end of the program. ";

	max = 0; 
	//printf("in main now");
	while((len = getLine(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest, line);
		}
	}

	//print the longest line
	if(max > 0)
		printf("Longest line: %s\n", longest);
	printf(FINISH_MSG);


	return 0;

}

int getLine(char s[], int limit){
	int c;
	int length;
	length = 0;

	while((c = getchar()) != EOF && c != '0' && c != '\n' && length < limit ){
		s[length] = c;
		++length;
	}

	if(c == '\n'){
		s[length] = c;
		++length;
	}
	s[length - 1] = '\0';
	return length;
}

void copy(char to[], char from[]){
	int i;
	i = 0; 
	while((to[i] = from[i]) != '\0'){
		++i;
	}
}






