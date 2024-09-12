//Ex2

#include <stdio.h>

int main (){
	
	int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    if(a > b){
        printf("o maior valor eh %d", a);
    }else if(a < b){
        printf("o maior valor eh %d", b);
    }else if(a == b){
        printf("valores sao iguais");
    }
	
	return 0;
}
