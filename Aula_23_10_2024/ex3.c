//ex3 - calcular a área do circulo

#include <stdio.h>
#include <math.h>

float calcularRaio(float diametro) { //função 1
    float resultado = diametro / 2; 
	return resultado;
}


float calcularArea(float diametro) { //função 2
    float pi = 3.14;
	float raio = calcularRaio(diametro);
	float resultado = pi * raio * raio;
    return resultado;
}

int main() {
    float diametro;

	diametro = 10;
	
    float area = calcularArea(diametro);

    printf("Area: %.2f\n", area);

    return 0;
}
