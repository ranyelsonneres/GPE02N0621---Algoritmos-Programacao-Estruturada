//Exemplo 3

//Dado o valor da nota de um aluno, 
//monte a express�o "if" e "else" 
//que verifica se ele precisar� fazer 
//a prova de substitui��o. 
//O aluno dever� fazer a substitui��o se sua nota
//for maior ou igual 30 e menor do que 60.


#include <stdio.h>

int main(){
	int nota;
	nota = 61;
	if (nota >=30 && nota < 60){
		printf("Prova de substituicao");
	}else if (nota == 60){
		printf("Nota igual a 60");	
	}else{
		printf("Nao vai fazer a prova");
	}
	
	return 0;
}
