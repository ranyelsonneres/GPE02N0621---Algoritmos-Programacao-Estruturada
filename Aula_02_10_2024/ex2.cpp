//fatorial

#include <stdio.h>

int main (){
	
	int n, fatorial = 1;
	n = 6;
	
	//for (int i=1; i<=n;i++){
	//	fatorial *=i;
	//}
	
	for (int i = n; i>1;i--){
		fatorial *=i;
	}
	
	
	printf("Resultado: %d", fatorial);
		
	return 0;
}
