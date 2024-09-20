#include <stdio.h>

int main() {
    int num, somaPares = 0, somaImpares = 0;

    // Solicita o primeiro número ao usuário
    printf("Digite um número positivo (negativo para sair): ");
    scanf("%d", &num);

    // Laço while para processar números até que um negativo seja digitado
    while (num >= 0) {
        if (num % 2 == 0) {
            somaPares += num; // Acumula números pares
        } else {
            somaImpares += num; // Acumula números ímpares
        }

        // Solicita o próximo número
        printf("Digite um número positivo (negativo para sair): ");
        scanf("%d", &num);
    }

    // Exibe as somas acumuladas
    printf("Soma dos números pares: %d\n", somaPares);
    printf("Soma dos números ímpares: %d\n", somaImpares);

    return 0;
}
