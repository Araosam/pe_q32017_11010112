#include <stdio.h>
int main()
{
	int n;
	scanf("Entre com um valor inteiro: %d", &n);
	if (n%2 == 0)
	{
		printf("par\n"); 
	}
	else
	{
		printf("ímpar\n");
	} 
	return 0;
}