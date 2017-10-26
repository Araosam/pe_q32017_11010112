#include <stdio.h>
#include <stdlib.h>

/*3.Crie uma função que recebe um ponteiro para a posição inicial de uma matriz e 
imprima todos os elementos da matriz utilizando aritmética de ponteiros.*/

void imprimeMatriz(int *f)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(f + j));
		}
		printf("\n");
	} 
}

void populaMatriz(int a[5][5])
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = j;
		}
	}
}

int main(){
	int x[5][5];
	populaMatriz(x);
	int *p = x;
	imprimeMatriz(p);
	return 0;
}