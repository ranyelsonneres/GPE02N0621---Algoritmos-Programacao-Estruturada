#include <stdio.h>

int main() {
    int num, soma = 0;

    // Solicita o primeiro número fora do loop
    printf("Digite um número (0 para sair): ");
    scanf("%d", &num);

    // Loop while que continua enquanto o número for diferente de 0
    while (num != 0) {
        soma += num; // Soma o número inserido

        // Solicita o próximo número dentro do loop
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);
    }

    // Exibe a soma total
    printf("A soma é: %d\n", soma);

    return 0;
}
