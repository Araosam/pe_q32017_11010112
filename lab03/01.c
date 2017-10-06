#include <stdio.h>

int rec(int x)
{
	if (x == 1) return 1;
	return x + rec(x-1);
}

int caud(int y, int z)
{
	if (y == 1) return (z+1);
	return caud(y-1, z+y);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", rec(n));
	printf("%d\n", caud(n, 0));
	return 0;
}