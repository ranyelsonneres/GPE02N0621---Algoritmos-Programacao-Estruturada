//ex11

#include <stdio.h>

int main()
{
    int cod;
    float salario, novoSalario;
    
    printf("Informe o codigo: (1 a 5): ");
    scanf("%d", &cod);
    
    printf("Salario: ");
    scanf("%f", &salario);
    
    if (cod == 1){
        novoSalario = salario * 1.50;
        printf("Cargo: Escrituario \n");
        printf("Aumento: 50%%\n");
        printf("Novo Salario: %.2f", novoSalario);
    } else if(cod == 2){
        novoSalario = salario * 1.35;
        printf("Cargo: Secretario \n");
        printf("Aumento: 35%%\n");
        printf("Novo Salario: %.2f", novoSalario);
    } else if(cod == 3){
        novoSalario = salario * 1.20;
        printf("Cargo: Caixa \n");
        printf("Aumento: 20%%\n");
        printf("Novo Salario: %.2f", novoSalario);
    } else if(cod == 4){
        novoSalario = salario * 1.10;
        printf("Cargo: Gerente \n");
        printf("Aumento: 10%%\n");
        printf("Novo Salario: %.2f", novoSalario);
    } else if (cod == 5){
        printf("Cargo: Diretor \n");
        printf("Aumento: sem aumento\n");
        printf("Salario: %.2f", salario);
    } else {
        printf("Codigo invalido!");
    }
    return 0;
}
