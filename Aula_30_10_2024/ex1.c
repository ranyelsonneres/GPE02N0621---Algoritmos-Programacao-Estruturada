#include <stdio.h>

struct Usuario{ //nome
	int idReporter; //variaveis
	char nome[100];
};

int main(){
	struct Usuario usuario;//chamar a struct
	
	printf("Cadastro\n");
	
	printf("Matricula: \n");
	scanf("%d", &usuario.idReporter);
	getchar();
	printf("Nome: ");
	fgets(usuario.nome, 100, stdin);
	printf("\n");
	
	
	//imprime os dados
	printf("Id reporter: %d", usuario.idReporter);
	printf("Nome: %s", usuario.nome);
	
	return 0;
}
