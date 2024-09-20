#include <stdio.h>

int main() {
    int num1, num2;

    // Laço do-while que continua até que os dois números sejam iguais
    do {
        // Solicita dois números inteiros ao usuário
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        // Compara os dois números
        if (num1 > num2) {
            printf("%d é maior que %d\n", num1, num2);
        } else if (num1 < num2) {
            printf("%d é maior que %d\n", num2, num1);
        }

    } while (num1 != num2); // Continua até os dois números serem iguais

    // Mensagem final quando os números forem iguais
    printf("Os números são iguais!\n");

    return 0;
}
