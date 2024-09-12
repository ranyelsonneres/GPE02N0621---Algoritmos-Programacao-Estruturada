//ex6: do-while e switch-case

#include <stdio.h>

int main (){
	
	int op;
	
	do {
		printf("Opcoes\n");
		printf("1 - op1\n");
		printf("2 - op2\n");
		printf("3 - sair\n");
		printf("Escolha uma op: ");
		scanf("%d", &op);
		
		switch (op){
			case 1:
				printf("Op1: Seja bem-vindo!\n");
				break;
			case 2:
				printf("Op2: Volte sempre!\n");
				break;
			case 3:
				printf("Ate mais!\n");
				break;
			default:
				printf("Op invalida. Tente novamente!");
				break;
		}
	} while(op!=3);
	
	
}
