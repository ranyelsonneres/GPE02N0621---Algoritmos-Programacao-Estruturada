//ex2

#include <stdio.h>

int main(){
	float num1, num2;
	float soma, sub, mult, div;
	
	printf("Num 1: ");
	scanf("%f", &num1);
	
	printf("Num 2: ");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	
	printf("Soma: %2.f", soma);
	printf("Sub: %2.f", sub);	
	printf("Div: %2.f", div);
	printf("Mult: %2.f", mult);	
	return 0;
}
