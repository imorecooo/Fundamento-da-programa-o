#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nota1, nota2, nota3, nota4,media;

    printf("Digite a nota 1: ");
    scanf("%i", &nota1,);
    fflush(stdin);
    
    printf("Digite a nota 2: ");
	scanf("%i",&nota2);
	fflush(stdin);
	
	printf("Digite a nota 3: ");
	scanf("%i",&nota3);	
	fflush(stdin);
	
	printf("Digite a nota 4: ");
	scanf("%i",&nota4);
	fflush(stdin);
	
	media = (nota1 + nota2 + nota3 + nota4) /4;
	printf("Media Final: %i",media);	
	
    return 0;
}