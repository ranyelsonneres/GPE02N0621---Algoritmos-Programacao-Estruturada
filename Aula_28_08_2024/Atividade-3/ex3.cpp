//ex3

#include <stdio.h>
#include <math.h>

int main(){
	int base, expoente, resultado;
	
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &expoente);
	
	resultado = pow(base, expoente);
	
	printf("Resultado: %d", resultado);
	
	
	
	return 0;
}
