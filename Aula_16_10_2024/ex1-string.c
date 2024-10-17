//exemplo utilizando strings

#include <stdio.h>
#include <string.h>

int main (){
	
	//string = vetor de caracteres
	char string[] = "String";
	char string2[3] = {'A', 'B', 'C'};
	
	printf("%s\n", string);
	printf("%s\n", string2);
	
	//scanf: Fulano Silva
	
	//fgets - leitura
	char string3[10];
	printf("Frase: ");
	fgets(string3, 10, stdin);
	printf("Frase: %s\n", string3); //impressão
	
	//funções - biblioteca
	char string4 [] = "AlgoritmosLinguagemC ";
	int tam = strlen(string4); //tamanho da string
	printf("Tamanho: %d\n", tam);
	
	//cópia
	char strcopia [10];
	//strcopia = string3;
	strcpy(strcopia, string3);
	printf("Copia: %s\n", strcopia);
	
	//concatenar
	char string5[] = "Algoritmos";
	char string6[] = " Programacao";
	strcat(string5, string6);
	printf("Cancatenacao: %s", string6);
	
	//string5 + string6
	
	//comparação de strings
	char stringA[12] = "Test";
  	char stringB[12] = "Teste";
  	printf("String A: %s\n", stringA);
  	printf("String B: %s\n", stringB);
  	printf("Valor da primeira comparacao: %d\n\n", strcmp(stringA, stringB));
	//-1 string B > string A
	//1 string A > string B
	//0 string A = string B
	return 0;
}
