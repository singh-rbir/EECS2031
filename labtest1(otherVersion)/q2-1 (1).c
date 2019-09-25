/*Name: Reem Aleithan, Student Number: 216051765*/
#include <stdio.h>

double term(double x, int n);
double series(double x, int m);
/* print the values  z, term(z, 0), term(z, 1), term(z, 2), series(z, 10)), where z ranges from -5 to 5. print it with width 10 and 4 decimal places with one space seperating them....this was confusing for me but i tried*/

int main(){

	double z = -5; 
	while ( z <= 5){
	printf("%10f %1.4f %1.4f %1.4f %1.4f", z, term(z, 0),
	 term(z, 1), term(z, 2), series(z, 10));

	z++;
	}
	return 0;

}

/* q2 (a) */
/* return x^n/x! ... i think... or x^n/n! can't remember*/
double term(double x, int n){
	double  numerator = 0;
	int i = 0;
	double deno = 0.0;
	int j = 1;
	if (n == 0){
	return 1;}
	else{
		while ( i < n){
		numerator = numerator * x;
		i ++;
		}
	
		if(x == 0){
		deno = 1;
		}
		else{
			for( j = 1; j < n; ++j){
			deno *= j;
		}
	}
	return (numerator/deno);
	}

}

/* q2 (b)*/


/* return m calls of term, so for the ith call its term(x, i) */
double series(double x, int m){
	int q = 1;
	double val= 0; 
	while( q <= m){
		val = term(x, q);
	}
	return val;

}


