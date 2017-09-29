#include <stdio.h>
int main()
{
	int x, y, cont, s;
	y = 0;
	scanf("%d", &x);
	for(cont = 1; cont < x; cont++)
	{
		y = y + cont;
	}
	s = x + y;
	printf("%d\n", s);
	return 0;
}