//ex6

#include <stdio.h>

int main(){
	
	int lado1, lado2, lado3;
	
	printf("Lado 1: ");
	scanf("%d", &lado1);
	
	printf("Lado 2: ");
	scanf("%d", &lado2);
	
	printf("Lado 3: ");
	scanf("%d", &lado3);
	
	if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
		printf("Triangulo: ");
		
		if(lado1 == lado2 && lado2 == lado3){
			printf("Equilatero");
		}else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
			printf("Isosceles");
		}else {
			printf("Escaleno");
		}
	}
	else{
		printf("Nao eh um triangulo");
	}
	
	return 0;
	
}
