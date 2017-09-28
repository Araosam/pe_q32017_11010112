#include <stdio.h>
int main()
{
	int n,p;
	scanf("Entre com um valor inteiro: %d", &n);
	for (p = n-1; p >=1; p--)
	{
		n = n*p;
	}
	printf(n);
	return 0;
}