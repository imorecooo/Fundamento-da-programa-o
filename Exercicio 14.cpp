#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float salario_bruto,ir,inss,sindicato,desconto,salario_liquido;
	
	printf("Salario bruto: ");
	scanf("%f",&salario_bruto);
	fflush(stdin);
	
	ir = salario_bruto * 0.15;
	inss = salario_bruto * 0.11;
	sindicato = salario_bruto * 0.03;
	desconto = ir + inss + sindicato;
	salario_liquido = salario_bruto - desconto;
	
	
	printf("\nDescontos\nIR R$ %.2f\nINSS R$ %.2f\nSindicatoR$ %.2f\nTotal de descontos R$ %.2f\nSalario Liquido R$ %.2f\n ",ir,sindicato,inss,desconto,salario_liquido);
	
	return 0;
	
	
}