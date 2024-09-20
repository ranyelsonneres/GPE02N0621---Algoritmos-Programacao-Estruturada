#include <stdio.h>

int main() {
    int num, digitos = 0;

    // Solicita um número inteiro ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Verifica se o número é positivo ou negativo
    if (num == 0) {
        digitos = 1; // Se o número for 0, ele tem 1 dígito
    } else {
        // Laço while para contar os dígitos
        while (num != 0) {
            num /= 10; // Remove o último dígito
            digitos++; // Conta o dígito removido
        }
    }

    // Exibe a quantidade de dígitos
    printf("O número possui %d dígitos.\n", digitos);

    return 0;
}
