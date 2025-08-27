#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int quantidade,motor20,motor1,motor5;
	float customotor20,customotor1,customotor5,motor20c,motor1c,motor5c,maquina1,custo;
	
	printf("Quantas máquinas serão vendidas: ");
	scanf("%i",&quantidade);
	fflush (stdin);
	
	motor20 = quantidade * 1 ;
	motor1 = quantidade * 2;
	motor5 = quantidade * 3;
	
	customotor20 = motor20 * 1500;
	customotor1 = motor1 * 300;
	customotor5 = motor5 * 600;

	maquina1 = 1500 + 3 * 600 + 2 * 300;
	
	motor20c = 1500;
	motor1c = 300;
	motor5c = 600;
	
	custo = customotor20 + customotor1 + customotor5;

	printf("\nQuantidade de Motores\nMotor 20cv:%i\nMotor de 1cv: %i\nMotor de 5cv: %i\n",motor20,motor1,motor5);
	
	printf("\nCusto Por Maquina: R$ %.2f\n",maquina1);
	
	printf("\nCusto Por Motor\nMotor 20cv R$ %.2f\nMotor 1cv: R$ %.2f\nMotor 5cv R$ %.2f\n",motor20c,motor1c,motor5c);
	
	printf("\nCusto Total R$ %.2f",custo);
	
	return 0;

}