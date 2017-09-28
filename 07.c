#include <stdio.h>
int main()
{
	int x, y, c;
	scanf("Entre com dois valores inteiros: %d %d", &x, &y);
	for (c = 1; c <= y); c++)
	{
		x = x*c;
	}
	printf(x);
	return 0;
}