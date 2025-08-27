#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n1,n2,soma;
	float n3;
	
	printf("Digite o primeiro numero: ");
	scanf("%i",&n1);
	fflush(stdin);

	printf("Digite o segundo numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	printf("Digite o terceiro numero: ");
	scanf("%f",&n3);
	fflush(stdin);
	
	
	soma = n1 * 2 + n2/2 ;
	printf("O produto do dobro do primeiro com metade do segundo = %i\n",soma);
	
	soma = n1 * 3 + n3;
	printf("A soma do triplo do primeiro com o terceiro = %i\n",soma);
	
	soma = n3 * n3 * n3;
	printf("O terceiro elevado ao cubo = %i",soma);


	return 0;
}