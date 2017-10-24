#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(j)
{
	int i, c;
	c = 1;
	for (i = j; i >= 1; i--)
	{
		c = c*i;
	}
	return c;
}

int coef(x, y, z)
{
	int m;
	m = x/(y*z);
	return m;
}

int main(){
	int n, k, f1, f2, f3, b;
	scanf("%d %d", &n, &k);
	f1 = fatorial(n);
	f2 = fatorial(k);
	f3 = fatorial(n-k);
	b = coef(f1, f2, f3);
	printf("%d", b);
	return 0;
}