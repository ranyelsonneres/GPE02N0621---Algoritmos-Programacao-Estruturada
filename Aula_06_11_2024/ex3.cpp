#include <stdio.h>

//ponteiro para funções

//conteudo != endereço

//funcao somar
int somar(int a, int b){
	return a + b;
}

//funcao subtrair
int subtrair(int a, int b){
	return a - b;
}

//void - recebe o ponteiro
void calcular(int x, int y, int (*operacao)(int, int)){
	int resultado = operacao(x, y);
	printf("resultado: %d\n", resultado);
}



int main(){
	int a = 10, b=5;
	
	calcular(a, b, somar);
	calcular(a, b, subtrair)
	
	
	return 0;
}
