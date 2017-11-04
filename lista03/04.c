#include <stdio.h>
#include <stdlib.h>

/*
4. Receba uma matriz 3x3 e calcule sua transposta.
*/

void imprime(int a[3][3])
{
	for (int i = 0; i <= 2; i++){
		for (int j = 0; j <= 2; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void transp(int a[3][3], int b[3][3])
{
	for (int i = 0; i <= 2; i++){
		for (int j = 0; j <= 2; j++){
			b[i][j] = a[j][i];
		}
	}
}

void recebe_vet(int a[3][3])
{
	for (int i = 0; i <= 2; i++){
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	}
}

int main()
{
	int v[3][3], t[3][3];
	recebe_vet(v);
	transp(v, t);
	imprime(t);
	return 0;
	
}