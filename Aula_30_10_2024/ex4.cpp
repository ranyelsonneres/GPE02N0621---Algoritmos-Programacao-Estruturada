//ex4 - struct com fun��o (sem retorno)

#include <stdio.h>

//struct
struct Produto {
	char nome[50];
};

//fun��o
void exibirProduto(struct Produto produto){
	printf("Nome: %s", produto.nome);
}

//fun��o principal
int main(){
	struct Produto p1;
	
	printf("Nome: ");
	fgets(p1.nome, 50, stdin); //leitura dos dados
	
	exibirProduto(p1); //chamando a fun��o
	
	return 0;
}

