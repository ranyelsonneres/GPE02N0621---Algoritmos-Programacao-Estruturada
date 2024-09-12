//Ex3

#include <stdio.h>

int main(){
	
	int num1;
    int num2;
    int num3;

    printf("Digite 3 numeros para verificar qual deles eh o maior\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("%d eh o maior numero da lista", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("%d eh o maior numero da lista", num2);
    }else if(num3 > num1 && num3 > num2){
        printf("%d eh o maior numero da lista", num3);
	}else {
		printf("Os numeros sao iguais");
	}
}
