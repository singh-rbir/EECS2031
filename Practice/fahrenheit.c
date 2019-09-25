#include <stdio.h>

#define LOWER 0 //lower limit of the table
#define UPPER 300
#define STEP 20

//print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 
int main(){
	float fahr, celsius; 
	int lower, upper, step;

	fahr = LOWER;
	printf("%3s \t %10.1s\n\n", "F", "C");
	while(fahr <= UPPER){
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f \t %10.1f\n", fahr, celsius);
		fahr += STEP;
	}

	/*
	char* scanned;
	printf("Enter a number: ");
	scanf("%c", scanned);
	printf("\nThis is the number you typed: %d", *scanned);
	*/
}