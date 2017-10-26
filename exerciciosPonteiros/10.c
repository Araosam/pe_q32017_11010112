#include <stdio.h>
#include <stdlib.h>

/*10. Crie uma função que imprime o valores das posições pares de um vetor 
utilizando aritmética de ponteiros para percorrer o vetor. */

void imprime(int *c, int d)
{
	for (int i = 1; i < d; i++)
	{
		printf("%d ", *(c+i));
		i++;
	}
}

void popula(int *a, int b)
{
	int i;
	for (i = 0; i < b; i++)
	{
		*a = i;
		a = a + 1;
	}
}

int main(){
	int x[10];
	int *p = x;
	int *q = x;
	popula(p, 10);
	imprime(q, 10);
	return 0;
}