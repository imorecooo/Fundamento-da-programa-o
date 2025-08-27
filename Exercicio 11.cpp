#include <stdio.h>
#include <stdlib.h>

int main (void){
		
	float horas,desconto,porcetagem;
		
	printf("Quantas horas trabalhadas no mes: ");
	scanf("%f",&horas);
	fflush(stdin);
		
	horas = horas * 25;	
	porcetagem = horas * 0.08;
	desconto = horas - porcetagem; 
	
	
	printf("devera ser pago: %.2f reais para o encanador. \nTotal do imposto: %.2f reais.",desconto,porcetagem);
	
	}