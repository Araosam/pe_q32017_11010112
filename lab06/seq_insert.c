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

void popula_seq(int *a)
{
	for(int i = 0; i < N; i++){
		a[i] = i+1;
	}
}

int main()
{
	int v1[N];
	popula_seq(v1);
	return 0;
}