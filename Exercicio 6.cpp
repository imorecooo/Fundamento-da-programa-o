#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float raio,area,pi=3.14;
	
	printf("Digite o raio: ");
	scanf("%f",&raio);
	fflush(stdin);
	
	area= pi*raio*raio;
	
	printf("Area do circulo e: %.2f",area);
	
	return 0;
	
}



