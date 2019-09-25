/*Name: Reem Aleithan, Student Number: 216051765*/

#include <stdio.h>
#define MAXNAME 100
#define MAXDATE 100

char* student(char name[MAXNAME], int stdnumber, char bdate[MAXDATE]);

/*student: make a student s[], return student's info*/

char* student(char name[MAXNAME], int stdnumber, char bdate[MAXDATE]){
	char s;
	s = "{name: " ,  name[MAXNAME] , ", number: " , stdnumber , ", date: "
	     ,  bdate[MAXDATE] , "}"; 
	return s;
}
