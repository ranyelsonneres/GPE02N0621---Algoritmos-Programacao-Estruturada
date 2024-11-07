//ex4

#include <stdio.h>

//funcao somar
int somar(int a, int b){
	return a + b;
}

//funcao subtrair
int subtrair(int a, int b){
	return a - b;
}


int main(){
	int a = 10, b=5;
	
	int (*operacao)(int, int);
	
	operacao = somar;
	printf("soma: %d\n", operacao(a, b));
	
	return 0;
}
