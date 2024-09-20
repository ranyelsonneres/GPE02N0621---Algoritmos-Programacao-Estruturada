#include <stdio.h>

int main() {
    float valor, convertido;
    int opcao;

    // Solicita ao usuário um valor monetário
    printf("Digite o valor em reais: ");
    scanf("%f", &valor);

    // Apresenta as opções de conversão
    printf("Escolha a moeda de destino:\n1. Dólar\n2. Euro\n3. Peso\n");
    scanf("%d", &opcao);

    // Converte o valor para a moeda escolhida
    switch (opcao) {
        case 1:
            convertido = valor / 5.25; // Conversão para Dólar
            printf("Valor em Dólar: %.2f\n", convertido);
            break;
        case 2:
            convertido = valor / 6.20; // Conversão para Euro
            printf("Valor em Euro: %.2f\n", convertido);
            break;
        case 3:
            convertido = valor / 0.05; // Conversão para Peso
            printf("Valor em Peso: %.2f\n", convertido);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
