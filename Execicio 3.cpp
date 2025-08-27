#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float fahrenheit,celsius;
	
	printf("Temperatura em graus Fahrenheit: ",fahrenheit);
	scanf("%f",&fahrenheit);
	fflush(stdin);
	
	celsius = 5 * (fahrenheit - 32)/9;
	printf("Temperatura em graus Celsius: %.2f\n",celsius);
	
}