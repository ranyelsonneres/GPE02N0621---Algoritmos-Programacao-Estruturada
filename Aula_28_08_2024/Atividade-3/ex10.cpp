//ex10

#include <stdio.h>

int main(){
	
	float valor1, valor2, valor3;
	float peso1, peso2, peso3;
	float media_ponderada;
	
	printf("V1: ");
	scanf("%f",&valor1);
	printf("P1: ");
	scanf("%f", &peso1);
	
	printf("V2: ");
	scanf("%f",&valor2);
	printf("P2: ");
	scanf("%f", &peso2);
	
	printf("V3: ");
	scanf("%f",&valor3);
	printf("P3: ");
	scanf("%f", &peso3);
	
	media_ponderada = (valor1*peso1) + (valor2*peso2) + (valor3*peso3) / (peso1 + peso2 + peso3);
	
	printf("Media: %.2f", media_ponderada);
	
	return 0;
}
