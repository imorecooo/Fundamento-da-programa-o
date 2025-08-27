#include <stdio.h>
#include <stdlib.h>

	int main (void){
		
		int n1,n2,soma;
		
		printf("Digite o primeiro numero: ",n1);
		scanf("%i",&n1);
		fflush(stdin);
		
		printf("Digite o segundo numero: ",n2);
		scanf("%i",&n2);
		fflush(stdin);
		
		soma = n1 + n2;
		printf("Soma de %i + %i e = %i",n1,n2,soma);
		
		return 0;
	}