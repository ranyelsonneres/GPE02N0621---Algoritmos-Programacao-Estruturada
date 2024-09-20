#include <stdio.h>

#define SENHA 1234 // Define a senha correta

int main() {
    int senha, tentativas = 0;

    // Enquanto o número de tentativas for menor que 5
    while (tentativas < 5) {
        // Solicita a senha ao usuário
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++; // Incrementa o contador de tentativas

        if (senha == SENHA) {
            printf("Acesso permitido.\n");
            return 0; // Sai do programa se a senha estiver correta
        } else {
            printf("Senha incorreta! Tentativa %d de 5.\n", tentativas);
        }
    }

    // Exibe a mensagem após 5 tentativas falhas
    printf("Número máximo de tentativas atingido. Acesso negado.\n");

    return 0;
}
