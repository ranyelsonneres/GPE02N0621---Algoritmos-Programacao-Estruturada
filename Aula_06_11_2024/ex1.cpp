#include <stdio.h>

int main(){
	int var = 15;
	
	//ponteiro
	int *ptr;
	
	ptr = &var;
	
	printf("conteudo de var: %d\n", var);
	printf("endereco de var: %p\n", &var);
	
	printf("conteudo de ptr : %d\n", *ptr);
	printf("endereco de ptr: %p\n", &ptr);
	printf("endereco de ptr: %p\n", ptr);
	
		//ponteiro para ponteiro
	int **pptr;
	pptr = &ptr;
	
	printf("endereco de pptr: %p\n", &pptr);
	printf("conteudo de pptr: %d\n", **pptr);
	
	return 0;
}
