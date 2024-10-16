#include <stdio.h>

int main() {
    int vetor[] = {5, 10, 15, 20, 30, 40, 50}; 
    int inicio = 0, fim = 6;  // indices inicial e final do vetor
    int valor, meio, encontrado = 0;

    // Recebe o valor a ser buscado
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    // Busca binária
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;  // calcula a posição do meio

        if (vetor[meio] == valor) {  //valor encontrado
            printf("Valor %d encontrado na posicao %d.\n", valor, meio);
            encontrado = 1;
            break;
        } else if (vetor[meio] < valor) {  // busca na metade direita
            inicio = meio + 1;
        } else {  // busca na metade esquerda
            fim = meio - 1;
        }
    }

    if (!encontrado) {
        printf("Valor %d nao encontrado no vetor.\n", valor);
    }

    return 0;
}
