//ex1

#include <stdio.h>

int main(){
	
	
	int notas [3] = {5, 4, 2};
	//notas[0] = 5;
	//notas[1] = 4;
	//notas[2] = 2;
	
	//printf("v1: %f", notas[0]);
	
	for(int i=0;i<3;i++){
		printf("valor %d: %d\n", i + 1, notas[i]);
	}
	

	
	return 0;
}
