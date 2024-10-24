//ex2 - distância entre dois pontos

#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2) {
    float x = x2 - x1;
    float y = y2 - y1;
    return sqrt(x * x + y * y);
}

int main() {
    float x1, y1, x2, y2;
	
	x1 = 2;
	y1 = 3;
	x2 = 4;
	y2 = 3;

    float distancia = calcularDistancia(x1, y1, x2, y2);

    printf("Distancia: %.2f\n", distancia);
    return 0;
}
