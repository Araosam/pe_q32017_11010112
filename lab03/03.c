#include <stdio.h>

unsigned int sum(unsigned int b)
{
	if (b < 10) return b;
	return b%10 + sum(b/10);
}

unsigned int rec(unsigned int x, unsigned int a)
{
	if (x < 10) return 1;
	return 1 + rec(x/10, 0);
}

unsigned int caud(unsigned int y, unsigned int z)
{
	if (y < 10) return (z+1);
	return caud(y/10, z+1);
}

int main()
{
	unsigned int n;
	scanf("%d", &n);
	printf("%d\n", rec(n, 0));
	printf("%d\n", caud(n, 0));
	printf("%d\n", sum(n));
	return 0;
}