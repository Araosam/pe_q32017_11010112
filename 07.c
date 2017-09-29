#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <fenv.h>
int main()
{
	int x, y, c, s = 1;
	scanf("%d %d", &x, &y);
	for (c = 0; c < y; c++)
	{
	s *= x;
	}
	printf("%d\n", s);
	return 0;
}