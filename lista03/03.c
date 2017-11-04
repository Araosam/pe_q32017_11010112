#include <stdio.h>
#include <stdlib.h>

/*
3. Receba 2 vetores do tipo int com 5 posições, v1 e v2, retorne um vetor com a soma
desses dois vetores, v3[i] = v1[i] + v2[i].
*/

void soma(int a[5], int b[5], int c[5])
{
	int cont;
	for (cont = 0; cont <= 4; cont++){
		c[cont] = a[cont] + b[cont];
	}
	for (cont = 0; cont <= 4; cont++){
		printf("%d ", c[cont]);
	}
}

int main()
{
	int v1[5], v2[5], v3[5];
	scanf("%d %d %d %d %d", &v1[0], &v1[1], &v1[2], &v1[3], &v1[4]);
	scanf("%d %d %d %d %d", &v2[0], &v2[1], &v2[2], &v2[3], &v2[4]);
	soma(v1, v2, v3);
	return 0;	
}