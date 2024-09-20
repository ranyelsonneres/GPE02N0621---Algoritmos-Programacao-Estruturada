#include <stdio.h>

int main() {
    int prato, acompanhamento;

    // Laço do-while para continuar mostrando o menu principal até o usuário escolher sair
    do {
        // Exibe o menu principal
        printf("Menu Principal:\n");
        printf("1 - Lasanha\n");
        printf("2 - Pizza\n");
        printf("3 - Hambúrguer\n");
        printf("0 - Sair\n");
        printf("Escolha um prato: ");
        scanf("%d", &prato);

        if (prato >= 1 && prato <= 3) {
            // Submenu de acompanhamentos
            printf("Escolha um acompanhamento:\n");
            printf("1 - Batata frita\n");
            printf("2 - Salada\n");
            printf("3 - Arroz\n");
            printf("Escolha um acompanhamento: ");
            scanf("%d", &acompanhamento);

            printf("Você escolheu ");
            switch (prato) {
                case 1:
                    printf("Lasanha");
                    break;
                case 2:
                    printf("Pizza");
                    break;
                case 3:
                    printf("Hambúrguer");
                    break;
            }

            printf(" com ");
            switch (acompanhamento) {
                case 1:
                    printf("Batata frita.\n");
                    break;
                case 2:
                    printf("Salada.\n");
                    break;
                case 3:
                    printf("Arroz.\n");
                    break;
                default:
                    printf("acompanhamento inválido.\n");
            }
        } else if (prato != 0) {
            printf("Opção inválida.\n");
        }

    } while (prato != 0); // O menu continua até que o usuário escolha sair

    printf("Obrigado pela sua visita!\n");
    
    return 0;
}
