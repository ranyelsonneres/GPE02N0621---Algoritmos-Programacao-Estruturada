//Aula 30_08_2024

//Exemplo

#include <stdio.h>

int main(){
	int num1, num2, num3, comp;
	
	num1 = 30;
	num2 = 15;
	num3 = 25;
	
	//igualdade
	//comp = (num1 == num2);
	
	//diferente
	//comp = num1 != num2;
	
	//maior "ou" igual
	//comp = num1 >= num2;
	
	//menor ou igual
	//comp = num1 <= num2;
	
	
	//operadores lógicos
	//E 
	//comp = (num1 >= num2) && (num2 > num3);
	
	//OU
	//comp = (num1 == num2) || (num2 <= num3);
	
	//NÃO
	comp = !(num1 == num2);
	
	printf("resultado: %d", comp);
	//return 0 (falso) ou 1 (verdadeiro);
	
	return 0;
	
}
