#include <stdio.h>

unsigned int rec(unsigned int x)
{
	if (x < 10) return 1;
	return 1 + rec(x/10);
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
	printf("%d\n", rec(n));
	printf("%d\n", caud(n, 0));
	return 0;
}