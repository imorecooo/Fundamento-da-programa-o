#include <stdio.h>
#include <stdlib.h>

	int main (void){
	
	float metro,cm;
	
	printf("Metros: ");
	scanf("%f",&metro);
	
	cm = metro * 100;
	
	printf("Tenho %.f Metros e convetendo tenho %.0f Cm",metro,cm);
		
	return 0;
	
	}
