//questão prática

#include <stdio.h>

//struct de disciplina
typedef struct {
	char nome[20];
	float nota;
}Disciplina;

//struct de disciplina
typedef struct {
	char nome[50];
	int matricula;
	Disciplina disciplinas[3];	
}Aluno;

//função da média
float calcularMedia(Aluno aluno){
	float nota1, nota2, nota3, media;
	nota1 = aluno.disciplinas[0].nota;
	nota2 = aluno.disciplinas[1].nota;	
	nota3 = aluno.disciplinas[2].nota;
	media = (nota1 + nota2 + nota3)/3;
	return media;
}

//função maiorNota
float encontrarMaiorNota(Aluno aluno){
	float maior;
	maior = aluno.disciplinas[0].nota;
	for (int i=1; i<3; i++){
		if (aluno.disciplinas[i].nota > maior){
			maior = aluno.disciplinas[i].nota;
		}
	}
	return maior;
}

//função (procedimento) exibir
void exibirAluno(Aluno aluno){
	printf("nome: %s\n", aluno.nome);
	printf("matricula: %d\n", aluno.matricula);
	printf("disciplinas e notas \n");
	for (int i=0; i<3;i++){
		printf("disciplina: %s - nota: %.2f", aluno.disciplinas[i].nome, aluno.disciplinas[i].nota);
	}
	float media = calcularMedia(aluno);
	float maior = encontrarMaiorNota(aluno);
	
	printf("\n");
	printf("media: %.2f", media);
	printf("maior: %.2f", maior);
}

int main(){
	//ler a struct
	Aluno aluno;
	
	//leitura dos dados
	printf("Aluno: ");
	fgets(aluno.nome, 50, stdin);
	
	printf("matricula: ");
	scanf("%d", &aluno.matricula);
	getchar();
	
	//disciplinas
	for(int i=0; i<3; i++){
		printf("disciplina: %d ", i + 1);
		fgets(aluno.disciplinas[i].nome, 20, stdin);
		
		printf("nota: %d ", i + 1);
		scanf("%f", &aluno.disciplinas[i].nota);
		getchar();
	}
	
	//chamar a função exibir
	exibirAluno(aluno);
	
	return 0;
}
