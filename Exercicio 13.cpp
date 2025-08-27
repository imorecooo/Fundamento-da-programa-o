#include <stdio.h>
#include <stdlib.h>

int main (void){

	float altura,largura,metros,litro_lata;
	int lata;
	
	printf("Quantos metro de largura a parede tem: ");
	scanf("%f",&largura);
	fflush(stdin);
	
	printf ("Quantos metro de altura a parede tem: ");
	scanf("%f",&altura);
	fflush(stdin);
	
	metros = altura * largura;
	
	litro_lata =  metros * 3;
	
	lata = litro_lata / 3.6;
	
	
	printf("A parede tem %.2f m2\nVai precisar de %.0i latas de tinta",metros,lata);
	
	return 0;

}
