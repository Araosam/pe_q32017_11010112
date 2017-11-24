#include <stdio.h>
#include <stdlib.h>
#define N 10

int partition (int *a, int low, int high)
{
	int pivot = a[high]
	int j, i = low;
	for (j = low; j < high; j++){
		if (a[j] <= pivot){
			swap(a, i, j);
			i++;
		}
	}
	swap(a, i, high);
	return i;
}

void quick(int *a, int low, int high)
{
	int p;
	if (low < high){
		p = partition(v, low, high);
		quick(a, low, p-1);
		quick(v, p+1, high);
	}
}

void insert(int *a)
{
	int i, j;
	for (i = 1; i < N; i++){
		for (j = i; a[j-1] > a[j]; j--){
			int j1 = a[j-1];
			int j2 = a[j];
			a[j-1] = j2;
			a[j] = j1;
		}
	}
}

void popula_inv(int *a)
{
	int i = 10;
	for(i; i > 0; i--){
		a[i] = i;
		printf("%d\n", a[i]);
	}
}

void popula_seq(int *a)
{
	for(int i = 0; i < N; i++){
		a[i] = i+1;
		printf("%d\n", a[i]);
	}
}

void popula_rand(int *a)
{
	for(int i = 0; i < N; i++){
		a[i] = rand();
		printf("%d\n", a[i]);
	}
}

int main()
{
	int v1[N], v2[N], v3[N];
	popula_rand(v1);
	popula_seq(v2);
	popula_inv(v3);
	return 0;
}