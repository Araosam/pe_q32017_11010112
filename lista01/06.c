#include <stdio.h>
int main()
{
	int n,p;
	scanf("%d", &n);
	for (p = n-1; p >=1; p--)
	{
		n = n*p;
	}
	printf("%d\n", n);
	return 0;
}