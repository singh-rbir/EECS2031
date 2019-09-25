#include <stdio.h>

// convert integer to characters in char s[]
void itoa(int n, char s[]){
	int i, sign;
	if((sign = n) < 0){
		n = -n;	
	}	
	i = 0; 
	do{
		s[i++] = n % 10 + '0';
		n /= 10;	
	}while(n > 0);
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	// reverse the string here
}

int main(){
	char s[5];
	itoa(12345, s);
	printf("%s", s); 
}
