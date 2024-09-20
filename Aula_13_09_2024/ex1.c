#include <stdio.h>

int main() {
    int num, fatorial = 1, i;

    // Solicita ao usuÃ¡rio um nÃºmero inteiro positivo
    printf("Digite um nÃºmero inteiro positivo: ");
    scanf("%d", &num);

        // Calcula o fatorial usando um loop "while"
        i = num;
        while (i > 0) {
            fatorial *= i; // Multiplica o valor atual do fatorial pelo valor de i
            i--; // Decrementa i
        }
        // Exibe o resultado do fatorial
        printf("O fatorial de %d Ã© %d\n", num, fatorial);
    return 0;
}
