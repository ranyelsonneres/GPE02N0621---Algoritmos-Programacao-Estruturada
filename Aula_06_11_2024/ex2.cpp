#include <stdio.h>

//ponteiro como par�metro de fun��o (procedimento);
//temos duas vari�veis e queremos trocar os valores dela.

void trocar(int *i, int *j){
	int temp; 
 	temp = *i;
	*i = *j;
	*j = temp;
}

int main(){
	int a=5, b=10, temp;
	printf("%d %d\n", a, b);
	
	//temp = a;
	//a = b;
	//b = temp;
	trocar(&a, &b);
	
	printf("%d %d\n", a, b); 
	
	return 0;
}
