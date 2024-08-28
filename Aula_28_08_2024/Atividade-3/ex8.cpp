//ex8

#include <stdio.h>

int main(){
	const float PRECO_KWH = 0.50;
	
	float consumo, valorConta;
	
	printf("Consumo: ");
	scanf("%f", &consumo);
	
	valorConta = consumo * PRECO_KWH;
	
	printf("Valor final: R$ %.3f", valorConta);
	
	
	
	
	return 0;
}
