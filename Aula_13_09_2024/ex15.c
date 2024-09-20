#include <stdio.h>
#include <math.h> // Necessário para funções matemáticas

int main() {
    int opcao, num;

    // Exibe o menu de opções
    printf("Menu de opções:\n");
    printf("1 - Exibir mensagem\n");
    printf("2 - Calcular quadrado de um número\n");
    printf("3 - Calcular cubo de um número\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Executa a ação correspondente com base na opção escolhida
    if (opcao == 1) {
        // Exibe uma mensagem
        printf("Olá! Bem-vindo ao programa!\n");
    } else if (opcao == 2) {
        // Calcula o quadrado de um número
        printf("Digite um número: ");
        scanf("%d", &num);
        printf("O quadrado de %d é %d\n", num, num * num);
    } else if (opcao == 3) {
        // Calcula o cubo de um número
        printf("Digite um número: ");
        scanf("%d", &num);
        printf("O cubo de %d é %d\n", num, num * num * num);
    } else {
        // Opção inválida
        printf("Opção inválida!\n");
    }

    return 0;
}
