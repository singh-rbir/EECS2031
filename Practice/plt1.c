#include <stdio.h>

#define MAX 100

void printName(char s[], long n, char d[]); 

int main(){
	printName("Raj", 12345678, "Nov 13, 1998");
}

void printName(char name[], long stdNum, char dob[]){
	printf("{\"name\" : \"%s\", \"number\" : \"%ld\", \"date\" : \"%s\"}", name, stdNum, dob);
}
