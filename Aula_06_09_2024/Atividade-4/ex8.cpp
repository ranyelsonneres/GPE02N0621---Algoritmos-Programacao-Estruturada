//ex8

#include <stdio.h>

int main(){
	
	float salario, imposto;
	
	printf("Salario: ");
	scanf("%f", &salario);
	
	if(salario <= 2000){
		imposto = 0;
		printf("Imposto: isento\n");
	}else if(salario >=2001 && salario <=4000){
		imposto = salario * 0.10;
		printf("Imposto: 10%%\n");
	}else{
		imposto = salario * 0.20;
		printf("Imposto: 20%%\n");
	}
	
	printf("Salario: %.2f\n", salario);
	printf("Imposto: %.2f", imposto);
	
	return 0;
	
}
