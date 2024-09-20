#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, chute;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    num = rand() % 10 + 1; // Gera um número entre 1 e 10

    // Laço do-while para o jogo de adivinhação
    while (chute != num)
    {
        // Solicita um chute ao usuário
        printf("Adivinhe o número entre 1 e 10: ");
        scanf("%d", &chute);

        // Verifica se o chute está correto
        if (chute > num) {
            printf("Muito alto! Tente novamente.\n");
        } else if (chute < num) {
            printf("Muito baixo! Tente novamente.\n");
        }

    }; // Continua até que o número seja adivinhado corretamente

    // Exibe a mensagem de acerto
    printf("Parabéns! Você acertou!\n");

    return 0;
}
