#include <stdio.h>
int main() {
    int vetor[5] = {5, 8, 20, 30, 40};
    int valor = 20;  // Valor a ser buscado
    int encontrado = 0;
    //busca linear no vetor
    for (int i = 0; i < 5; i++) {
        if (vetor[i] == valor) {
            printf("Valor %d encontrado na posicao %d.\n", valor, i);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Valor %d nao encontrado no vetor.\n", valor);
    }
    return 0;
}
