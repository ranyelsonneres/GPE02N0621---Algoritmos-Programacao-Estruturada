//exemplo 3 - struct com vetor
#include <stdio.h>

struct Aluno {
	char nome[100];
	float nota;
};

int main(){
	
	//problema armazenar dois alunos sem criar variaveis adicionais
	//solução: vetor
	
	//chamar a struct
	struct Aluno alunos[2]; //transformar em um vetor
	
	//leitura dos dados
	for (int i=0; i<2; i++){
		printf("Cadastro: %d\n", i+1);
		printf("Nome: ");
		fgets(alunos[i].nome, 100, stdin);
		printf("Nota: ");
		scanf("%f", &alunos[i].nota);
		getchar();
		printf("\n");	
	}
	
	//impressão dos dados
	printf("\nDados cadastrados\n");
	for (int i=0; i<2; i++){
		printf("Aluno %d:\n", i+1);
		printf("Nome: %s", alunos[i].nome);
		printf("Nota: %.2f\n", alunos[i].nota);
	}
	
	return 0;
}
