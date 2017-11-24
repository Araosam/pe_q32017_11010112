#include <stdio.h>
#include <stdlib.h>
#define N 1000000

void insert(int *a)
{
	int i, j;
	for (i = 1; i < N; i++){
		for (j = i; j > 0; j--){
			if (a[j-1] > a[j]){
				int j1 = a[j-1];
				int j2 = a[j];
				a[j-1] = j2;
				a[j] = j1;
			}
		}
	}
}

void popula_inv(int *a)
{
	int i = 10;
	for(i; i > 0; i--){
		a[i] = i;
	}
}

int main()
{
	int v1[N];
	popula_inv(v1);
	return 0;
}