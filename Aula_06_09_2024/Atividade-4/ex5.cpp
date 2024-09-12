//Ex5

#include <stdio.h>

int main(){
	
	int ano;

    printf("Digite um ano para verificar se ele eh bissexto: ");
    scanf("%d", &ano);

	if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
		printf("Ano bissexto");
	}else {
		printf("Ano nao bissexto");
	}
	
}
