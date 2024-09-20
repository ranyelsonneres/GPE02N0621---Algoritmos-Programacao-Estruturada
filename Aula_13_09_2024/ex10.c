#include <stdio.h>

int main() {
    int idade, mais18 = 0, menos18 = 0;

    // Laço do-while para ler idades até que 0 seja digitado
    do {
        // Solicita a idade ao usuário
        printf("Digite a idade (0 para sair): ");
        scanf("%d", &idade);

        // Verifica se a idade é válida antes de contar
        if (idade > 0) {
            if (idade >= 18) {
                mais18++; // Contador de pessoas com 18 anos ou mais
            } else {
                menos18++; // Contador de pessoas com menos de 18 anos
            }
        }

    } while (idade != 0); // O laço continua até que a idade 0 seja digitada

    // Exibe os resultados finais
    printf("Pessoas com 18 anos ou mais: %d\n", mais18);
    printf("Pessoas com menos de 18 anos: %d\n", menos18);

    return 0;
}
