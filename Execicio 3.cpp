#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float fahrenheit,celsius;
	
	printf("Temperatura em graus Fahrenheit: ");
	scanf("%f",&fahrenheit);
	fflush(stdin);
	
	celsius = 5 * (fahrenheit - 32)/9;
	printf("Temperatura em graus Celsius: %.1f\n",celsius);

	return 0;
}

