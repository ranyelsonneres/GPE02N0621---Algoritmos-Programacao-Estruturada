//Ex1
#include <stdio.h>


int main(){
	int a, b, c, delta;
	
	printf("Valor a: ");
	scanf("%d", &a);
	
	printf("Valor b: ");
	scanf("%d", &b);
	
	printf("Valor c: ");
	scanf("%d", &c);
	
	delta = b*b - 4 * a * c;
	
	printf("Delta: %d", delta);

	return 0;
}
