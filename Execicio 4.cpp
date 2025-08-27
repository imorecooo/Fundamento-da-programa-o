#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float fahrenheit,celsius;
	
	printf("Temperatura em graus Celsius: ");
	scanf("%f",&celsius);
	fflush(stdin);
	
	fahrenheit = celsius * 1.8 + 32;
	printf("Temperatura em graus Fahrenheit: %.1f\n",fahrenheit);

	return 0;
}

