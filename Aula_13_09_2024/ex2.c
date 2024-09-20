#include <stdio.h>

int main() {
    int num, i = 1;

    // Solicita ao usuário um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Exibe a tabuada de multiplicação do número de 1 a 10 usando "while"
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i); // Exibe a multiplicação
        i++; // Incrementa i
    }

    return 0;
}
