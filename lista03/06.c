#include <stdio.h>
#include <stdlib.h>

/*
6. Receba um valor inteiro n representando o tamanho do vetor e, em seguida, um vetor
de inteiros com esse tamanho. Imprima a mediana dos valores desse vetor com duas casas
decimais.
*/

void mediana(int a, int * b)
{
	float k = 0.00;
	int m = 0, l = 0;
	if(a%2 == 0){
		m = a/2;
		l = (a/2) - 1;
		k = (b[m] + b[l]);
		printf("%.2f", k/2);
	}
	else {
		k = b[a/2];
		printf("%.2f", k);
	}
}

int cmpfunc(const void * a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

recebe_vet(int a, int * b)
{
	for (int i = 0; i < a; i++){
		scanf("%d", &b[i]);
	}
}

int main()
{
	int n = -1;
	int * v = NULL;
	scanf("%d", &n);
	v = malloc(n * sizeof*v);
	recebe_vet(n, v);
	qsort(v, n, sizeof(int), cmpfunc);
	mediana(n, v);
	free(v);
	return 0;
}