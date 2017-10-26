#include <stdio.h>
#include <stdlib.h>

/*8. Crie uma função que recebe um ponteiro para a posição inicial de um vetor e 
recebe o tamanho do vetor. Preencha esse vetor com o valor 0 utilizando aritmética 
de ponteiros. */

void imprimeVetor(int c[5])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", c[i]);
	}
}

void populaVetor(int *a, int b)
{
	int i;
	for (i = 0; i < b; i++)
	{
		*a = 0;
		a = a + 1;
	}
	
}

int main(){
	int x[5];
	int *p = x;
	populaVetor(p, 5);
	imprimeVetor(x);
	return 0;
}