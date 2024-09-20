#include <stdio.h>

int main() {
    int i = 0;

    // Loop para exibir números pares de 0 a 1000
    while (i <= 1000) {
        if (i % 2 == 0) { // Verifica se o número é par
            printf("%d\n", i);
        }
        i++; // Incrementa o valor de i
    }

    return 0;
}
