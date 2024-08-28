//ex7

#include <stdio.h>
#define PI 3.14

int main(){
	
	float raio, circunferencia, p;
	
	printf("Valor do raio: ");
	scanf("%f", &raio);
	
	circunferencia = 2 * PI * raio;
	
	printf("Circunferencia: %.2f", circunferencia);
	
	return 0;
}
