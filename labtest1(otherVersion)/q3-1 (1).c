/*Name: Reem Aleithan, Student Number: 216051675*/

#include <stdio.h>
#include <math.h>
double root1;
double root2;

/* they gave us the three inputs tester(1.0 ... and they said include at least these three*/

int solve(double a, double b, double c, double root1, double root2);
int tester(double a, double b, double c, char * msg);

int main(){
	tester(1.0, 0.0, 4.0, "no solution");
	tester(1.0, 0.0, -4.0, "two solutions");
	tester(1.0, 0.0, 0.0, "one solution"); 
	return 0;
}
/* solve the equation ax^2 + bx + c = 0, salve the solutions in root1 and root2 if there is only one soln just save it in root1, return the number of solutions found*/
int solve(double a, double b, double c, double root1, double root2){

	double  sol = 0;
	double inner;
	sol = -b;
	inner = (b*b) - 4*(a*c);
	
	if (inner < 0.0){
		return 0;
	}

	sol += sqrt(inner)/(2.0*a);

	if (inner == 0.0){
		root1 = sol;
		return 1;	
	}
	else{
		root2 = sol;
		return 2;
	}
}
/* test sovle and print the value of roots 1 and 2 after checking how many there are using solve, also print the message given*/
int tester(double a, double b, double c, char * msg){
	if(solve(a,  b, c, root1, root2)== 0){
	printf("%s", msg);

	}
	if (solve(a, b, c, root1, root2) == 1){
	printf("%s %3f", msg, root1); 

	}
	
	else{
	printf("%s %3f %3f", msg, root1, root2);
	}
	return 0;
}
	
