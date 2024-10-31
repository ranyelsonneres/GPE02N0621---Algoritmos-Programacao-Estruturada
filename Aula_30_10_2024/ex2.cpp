//exemplo 2 - structs aninhadas

#include <stdio.h>

struct Endereco{
	char cidade[40];
	char estado[4];
};

struct Cliente{
	char nome[100];
	char cpf[13];
	//endereço
	struct Endereco endereco;
};

int main(){
	//chamar a struct
	struct Cliente cliente;
	
	printf("Cadastro de cliente\n");
	printf("Nome: ");
	fgets(cliente.nome, 100, stdin);
	printf("CPF: ");
	fgets(cliente.cpf, 13, stdin);
	
	//Cliente -> Estado
	printf("Cidade: ");
	fgets(cliente.endereco.cidade, 40, stdin);
	printf("Estado: ");
	fgets(cliente.endereco.estado, 4, stdin);
	
	//impressão
	printf("Dados do cliente: \n");
	printf("Nome: %s", cliente.nome);
	printf("CPF: %s", cliente.cpf);
	printf("Cidade: %s", cliente.endereco.cidade);
	printf("Estado: %s", cliente.endereco.estado);
	
	return 0;
}
