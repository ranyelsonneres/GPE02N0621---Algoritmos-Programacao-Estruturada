//Exemplo 4
//Verificar IMC

#include <stdio.h>

int main(){
	double imc;
	
	imc = 30;
	
	if(imc < 18.5) {
		printf("Baixo peso");
	}else if (imc <= 24.99){
		printf("Normal");
	}else if(imc <=29.99) {
		printf("Sobrepeso");
	}else {
		printf("Obesidade");
	} 
	return 0;
}
