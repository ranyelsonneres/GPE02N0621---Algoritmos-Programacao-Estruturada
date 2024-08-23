#include <stdio.h>
#include <stdlib.h>

#define IMPOSTO 0.15 //CONSTANTE TAXA DE IMPOSTO

int main (){
	//constantes
	//#define
	//const
	const int salario_base = 2000;
	float salario_final;
	
	//IMPOSTO = 0.10
	//salario_base = 1000;
	
	salario_final = salario_base - (salario_base * IMPOSTO);
	
	printf("Salario base: %d\n", salario_base);
	printf("Taxa de imposto: %.2f\n", IMPOSTO);
	printf("Salario final: %.2f\n", salario_final);

	return 0;
}
