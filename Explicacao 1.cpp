#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	
	// quais as variveis
	int n1,n2,r;
	
	//quais entradas de dados 
	
	printf("Digite o primeiro numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite o segundo numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	r= n1+n2;
	printf("%i + %i = %i\n",n1,n2,r);
	
	return 0;
}