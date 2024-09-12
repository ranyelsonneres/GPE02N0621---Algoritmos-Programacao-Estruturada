//Ex4

#include <stdio.h>

int main(){
	
	int num;

    printf("Digite um numero para saber se ele eh impar ou par: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Este numero eh par.");
    }else{
        printf("Este numero eh impar.");
    }
	
}
