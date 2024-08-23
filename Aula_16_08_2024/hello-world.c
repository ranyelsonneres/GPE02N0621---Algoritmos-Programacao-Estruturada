#include <stdio.h>
#include <stdlib.h>

int main(){
	//impressão
	//printf("Seja bem-vindo!\n");
	
	int x = 10;
	double y = 12.551;
	char letra = 'a';
	
	printf("%d\n",x);
	printf("%.3f\n",y);	
	printf("%c\n", letra);
	
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num); //leitura de dados
	
	printf("O valor digitado foi: %d\n", num); //impressão
	
	//impressão de caracteres sem espaço
	//char nome[50];
	//printf("Informe seu nome: ");
	//scanf("%s", nome);
	//printf("Nome digitado: %s\n", nome);
	
	//impressão com espaço
	getchar(); //para dar continuidade a leitura do teclado
	char nome[20];
	printf("Informe seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	printf("Nome digitado: %s", nome);
		
	return 0;
}
