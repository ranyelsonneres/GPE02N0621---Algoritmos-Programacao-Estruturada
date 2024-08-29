//Ex9 

#include <stdio.h>
#define PRECO_POR_LITRO 5.79


int main(){
	
	float litros, valor_total;
	
	printf("Qtde litros abastecido: ");
	scanf("%f", &litros);
	
	valor_total = litros * PRECO_POR_LITRO;
	
	printf("Valor total a ser pago: R$ %.2f\n", valor_total);
	
	return 0;
}
