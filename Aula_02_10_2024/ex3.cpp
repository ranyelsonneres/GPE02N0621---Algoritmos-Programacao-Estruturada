#include <stdio.h>

int main (){
	
	int num;
	
	for (int i=0; i<5; i++){
		printf("Numero: ");
		scanf("%d", &num);
		
		if(num %2 == 0){
			printf("Teste");
			continue;
		}
		printf("Numero impar: %d\n", num);
		
	}
		
	return 0;
}
