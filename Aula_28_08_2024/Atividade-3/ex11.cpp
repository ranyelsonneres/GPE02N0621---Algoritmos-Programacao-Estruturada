//ex11

#include <stdio.h>

int main(){
	
	float valor1, valor2, valor3;
	float alfa;
	float ewma1, ewma2, ewma_final;
	
	printf("Valor 1: ");
	scanf("%f", &valor1);
	
	printf("Valor 2: ");
	scanf("%f", &valor2);
	
	printf("Valor 3: ");
	scanf("%f", &valor3);
	
	printf("Coeficiente: ");
	scanf("%f", &alfa);
	
	ewma1 = valor1;
	
	ewma2 = alfa * valor2 + (1 - alfa) * ewma1;
	
	ewma_final = alfa * valor3 + (1 - alfa) * ewma2;
	
	printf("EWMA 1: %f\n", ewma1);
	printf("EWMA 1: %f\n", ewma2);	
	printf("EWMA 1: %f", ewma_final);	
	return 0;
}
