//ex4: 3 numeros e calcular a soma deles.


#include <stdio.h>

int main(){
	
	int contador = 0;
	float soma = 0;
	float numero;
	int qtdVezes;
	
	printf("Qtd: ");
	scanf("%d", &qtdVezes);
	
	while (contador < qtdVezes){
		printf("Numero: ");
		scanf("%f", &numero);
		soma+= numero; 
		contador++;
	}
	
	printf("Resultado: %.2f\n", soma/qtdVezes);

	return 0;
}
