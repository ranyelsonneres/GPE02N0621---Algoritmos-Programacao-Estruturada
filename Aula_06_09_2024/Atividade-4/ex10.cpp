//ex10

#include <stdio.h>

int main(){
	
	float n1, n2, n3, media, exame;
	
	printf("n1: ");
	scanf("%f", &n1);
	
	printf("n2: ");
	scanf("%f", &n2);
	
	printf("n3: ");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	if (media >=0 && media <3){
		printf("Reprovado");
	}else if(media>=3 && media<7){
		printf("Exame\n");
		exame = 12 - media;
		printf("Nota necessaria no exame para aprovacao: %.2f", exame);		
	} else if (media>=7 && media<=10){
		printf("Aprovado");
	}

	return 0;	
}
