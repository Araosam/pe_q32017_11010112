#include <stdio.h>
#include <stdlib.h>

/*9. Crie uma função que recebe um ponteiro para a posição inicial de uma matriz e 
recebe o tamanho da matriz. Preencha essa matriz com o valor 0 utilizando aritmética 
de ponteiros. */

void imprimeMatriz(int c[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

void populaMatriz(int *a, int b, int c)
{
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{
			*a = 0;
			a = a + 1;
		}
	}
}

int main(){
	int x[5][5];
	int *p = x;
	populaMatriz(p, 5, 5);
	imprimeMatriz(x);
	return 0;
}