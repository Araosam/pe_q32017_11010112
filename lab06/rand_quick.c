#include <stdio.h>
#include <stdlib.h>
#define N 1000000000000

int partition (int *a, int low, int high)
{
	int pivot = a[high];
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
		p = partition(a, low, high);
		quick(a, low, p-1);
		quick(a, p+1, high);
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
	int v1[N];
	popula_rand(v1);
	quick(v1, v1[0], v1[N]);
	return 0;
}