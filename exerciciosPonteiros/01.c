#include <stdio.h>
#include <stdlib.h>

/*1. Crie uma função chamada “troca” que recebe dois inteiros como 
parâmetro e troca os valores deles utilizando aritmética de ponteiros.*/

void troca(int a, int b)
{
	int temp;
	int *j, *k;
	j = &a;
	k = &b;
	temp = *j;
	*j = *k;
	*k = temp;
	printf("%d %d\n", *j, *k);
}

int main(){
	int n, p, i, u;
	scanf("%d %d", &n, &p);
	troca (n, p);
	return 0;
}