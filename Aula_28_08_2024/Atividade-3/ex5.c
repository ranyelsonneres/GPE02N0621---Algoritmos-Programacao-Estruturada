//Ex.5

#include <stdio.h>


int main(){
	char nomeCompleto[50];
    int idade;

    printf("Digite o seu nome: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    printf("Agora, digite a sua idade: ");
    scanf("%d", &idade);

    printf("Ola %s, seja bem-vindo ao curso de Algoritmos e Programacao Estruturada. Voce tem %d anos de idade!", nomeCompleto, idade);
	
	return 0;
}
