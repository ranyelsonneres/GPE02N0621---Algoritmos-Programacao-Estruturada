//cálculo da média de notas

#include <stdio.h>

int main (){
	float notas[5];
	float soma = 0;
	for(int i=0;i<5;i++){
		printf("Nota %d: ", i +1);
		scanf("%f", &notas[i]);
		soma +=notas[i];
	}
	
	for(int i=0; i<5;i++){
		printf("Nota %d informada: %.2f\n", i + 1, notas[i]);
	}
	
	float media = soma/5;
	
	printf("Soma: %2f\n", soma);
	printf("Media: %.2f\n", media);
	
		
	return 0;
}
