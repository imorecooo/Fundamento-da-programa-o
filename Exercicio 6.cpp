#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float raio,diametro;
	
	printf("Qual diamentro do circulo: ");
	scanf("%f",&diametro);
	fflush(stdin);
	
	raio = diametro/2;
	raio = raio * raio;
	raio = 3.14 * raio;
	
	printf("Soma do circulo e: %.2f",raio);
	
	return 0;
	
}

