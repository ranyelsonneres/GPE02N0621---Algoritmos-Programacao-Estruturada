//ex4

#include <stdio.h>
#include <string.h>

int main(){
	
	char string[50];
	char copyString[50];
	
	printf("Digite o texto: ");
	fgets(string, sizeof(string), stdin);
	
	strcpy(copyString, string);
	
	printf("Texto copiado: %s", copyString);
	
	return 0;
}
