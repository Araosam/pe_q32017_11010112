#include <stdio.h>
#include <stdlib.h>

/*2. Crie uma função que recebe ponteiro para a posição inicial de um vetor 
e imprima todos os elementos do vetor utilizando aritmética de ponteiros.*/

void imprimeVetor(int *f)
{
	int k = 0;
	while (k < 10)
	{
		printf("%d ", *f);
		*f = *f + 1;
		k++;
	}
}

void populaVetor(int a[10])
{
	int i = 0;
	while (i < 10)
	{
		a[i] = i;
		//printf("%d ", a[i]);
		i++;
	}
}

int main(){
	int x[10];
	populaVetor(x);
	int *p = x;
	imprimeVetor(p);
	return 0;
}