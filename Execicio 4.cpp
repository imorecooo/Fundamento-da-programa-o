#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float celsius,fahrenheit;
	
	printf("Temperatura em graus celsius: ");
	scanf("%f",&celsius);
	fflush(stdin);
	
	fahrenheit = (celsius * 1.8) + 32;
	
	printf("Temperatura em graus fahrenheit: %.2f\n",fahrenheit);
	
	return 0;
}