#include <stdio.h>
#include <stdlib.h>

int main (void){
		
	float hora,valor_hora,salario;
		
	printf("Quantos voce ganha por hora R$ ");
	scanf("%f",&valor_hora);
	fflush(stdin);
	
	printf("Quantas horas voce trabalha no mes: ");
	scanf("%f",&hora);
	fflush(stdin);
	
	salario = valor_hora * hora;
	printf("Voce vai receber R$ %.2f",salario);
	
	return 0;
		
	}
