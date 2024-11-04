//ex4 - struct com função (sem retorno)

#include <stdio.h>

//struct
struct Produto {
	char nome[50];
};

//procedimento
void exibirProduto(struct Produto produto){
	printf("Nome: %s", produto.nome);
}

//função principal
int main(){
	struct Produto p1;
	
	printf("Nome: ");
	fgets(p1.nome, 50, stdin); //leitura dos dados
	
	exibirProduto(p1); //chamando a função
	
	return 0;
}

