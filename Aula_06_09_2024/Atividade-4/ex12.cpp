//ex12
#include <stdio.h>

int main()
{
    float salario, bonificacao, auxilioEscola, novoSalario;
    
    printf("Salario: ");
    scanf("%f", &salario);
    
    if (salario <= 500) {
        bonificacao = salario * 0.05; 
    } else if (salario > 500 && salario <= 1200) {
        bonificacao = salario * 0.12;
    } else {
        printf("Sem bonificacao\n");
    }
    
    if (salario <= 600) {
        auxilioEscola = 150;
    } else {
        auxilioEscola = 100;
    }
    novoSalario = salario + bonificacao + auxilioEscola;
    
    printf("Novo salario: %.2f\n", novoSalario);
    
    return 0;
}
