//ex9

#include <stdio.h>

int main(){
	
	float n1_tl, n2_as, n3_ef, mediap;
	
	printf("Trabalho de laboratorio: ");
	scanf("%f", &n1_tl);
	
	printf("Avaliacao semestral: ");
	scanf("%f", &n2_as);
	
	printf("Exame final: ");
	scanf("%f", &n3_ef);
	
	mediap = ((n1_tl*2)+(n2_as*3)+(n3_ef*5))/10;
	
	printf("Media: %.2f\n", mediap);
	
	if(mediap>=0 && mediap<5){
		printf("Conceito E");
	}else if(mediap>=5 && mediap<6){
		printf("Conceito D");
	}else if(mediap>=6 && mediap<7){
		printf("Conceito C");
	}else if(mediap>=7 && mediap<8){
		printf("Conceito B");
	}else{
		printf("Conceito A");
	}
	
	return 0;
	
}
