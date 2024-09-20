#include <stdio.h>

int main() {
    int n, i = 0;
    float num, soma = 0;

    // Solicita ao usuário quantos números ele quer inserir
    printf("Quantos números deseja inserir? ");
    scanf("%d", &n);

    // Loop para ler os números e calcular a soma
    while (i < n) {
        printf("Digite um número: ");
        scanf("%f", &num);
        soma += num; // Soma o número inserido
        i++; // Incrementa o contador
    }

    // Calcula e exibe a média
    printf("A média é: %.2f\n", soma / n);

    return 0;
}
