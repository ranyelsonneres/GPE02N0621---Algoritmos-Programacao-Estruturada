//exemplo matriz

#include <stdio.h>

int main (){
	int m[2][3]; //matriz original
	int mt[3][2]; //matriz transposta
	
	//preencher
	m[0][0] = 1;
	m[0][1] = 2;
	m[0][2] = 3;
	m[1][0] = 4;
	m[1][1]	= 5;
	m[1][2]	= 6;
	
	//matriz original
	for(int i=0;i<2;i++){ //linha
		for (int j=0;j<3;j++){ //coluna
			printf("%2d", m[i][j]);
		}
		printf("\n");
	}
	
	//matriz transposta
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            mt[j][i] = m[i][j];
        }
    }
    
    //impressão matriz transposta
    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mt[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}

