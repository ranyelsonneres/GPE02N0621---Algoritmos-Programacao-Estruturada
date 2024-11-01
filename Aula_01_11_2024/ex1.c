#include <stdio.h>

int main(){
	
	//typedef
	typedef float prova;
	
	prova prova1;
	//prova prova2;
	
	printf("Nota: ");
	scanf("%f", &prova1);
	printf("Prova: %.2f", prova1);
	
	return 0;
}
