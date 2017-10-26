#include <stdio.h>
#include <math.h>

int fibMem[1000];

int fib(int n)
{
	if (n==0) return 0;
	if (n<=2) return 1;
	if (fibMem[n]) return fibMem[n];
	else
	{
		fibMem[n] = fib(n-1) + fib(n-2);
		return fibMem[n];
	}
	
}

int main(){
	int x, y, i;
	fibMem[1] = 1;
	fibMem[2] = 1;
	scanf("%d", &x);
	i = 0;
	y = fib(x);
	while (i < x)
	{
		printf("-> %d\n", fibMem[i]);
		i++;
	}
	printf("%d\n", y);
	return 0;	
}