//Ex1 - switch-case (menu)

#include <stdio.h>

int main(){
	
	int op;
	int num1, num2, resultado;
	
	printf("Operacao: \n");
	printf("1 - adicao\n");
	printf("2 - subtracao\n");
	printf("Escolha sua op (1 ou 2): ");
	scanf("%d", &op);
	
	printf("Num1: ");
	scanf("%d", &num1);
	
	printf("Num2: ");
	scanf("%d", &num2);
	
	//switch-case
	switch (op) {
		case 1:
			resultado = num1 + num2;
			printf("Resultado: %d\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("Resultado: %d\n", resultado);			
			break;
		default:
			printf("Opcao invalida!\n");
			break;
	}
	
	return 0;
}
