#include <stdio.h>

//encontrar o menor numero

//função com retorno
int menorNumero(int a, int b){ //função: menor
	if (a < b) {
		return a;
	} else if (b < a){
		return b;
	} else {
		return 0;
	}
}

int main(){ //função principal
	int num1, num2, num3, num4;
	
	num1 = 20;
	num2 = 20;
	
	num3 = 10;
	num4 = 4;
	
	int resultado = menorNumero(num3, num4);
	
	
	if (resultado == 0){
		printf("Iguais");
	} else {
		printf("Menor: %d\n", resultado);
	}
	
	return 0;
}
