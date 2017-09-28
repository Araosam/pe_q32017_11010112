#include <stdio.h>
int main()
{
	int x, y, cont;
	y = 0;
	scanf("Entre com um valor inteiro: %d", &x);
	for(cont = 1; cont <= x; cont++)
	{
		y = y + cont;
	}
	printf(x+y);
	return 0;
}