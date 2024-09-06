//Ex1

#include <stdio.h>

int main(){
	
	int num;

    printf("Digite um numero inteiro para saber se ele e positivo, negativo ou zero: ");
    scanf("%d", &num);
    
    if(num < 0){
        printf("Este numero e negativo.");
    }else if(num > 0){
        printf("Este numero e positivo.");
    }else if(num == 0){
        printf("Este numero e 0");
    }

	
}
