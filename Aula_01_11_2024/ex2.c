#include <stdio.h>

struct Livro{
	char titulo[40];
	char autor[50];
	int anoPublicacao;
};

int main(){
	
	//typedef
	typedef struct Livro Livro;
	
	Livro livro1, livro2;
	
	printf("Cadastro 1");
	printf("Titulo: ");
	fgets(livro1.titulo, 40, stdin);
		
	return 0;
}
