#include <stdio.h>

void soma (int x1, int x2, int *f)
{
	*f = x1 + x2;
}


int main()
{
	int a = 10, b = 1, c;
	int *p = &c;
	
	soma(a, b, p);
	
	printf("%d\n", c);
	
	return 0;	
}