#include <stdio.h>
#include <math.h>

int mdc(int a, int b)
{
	int c, d;
	c = b;
	if (a%b)
	d = mdc(
}

int sel(int m, int n)
{
	int k;
	if (m > n)
	{
		k = mdc(m, n);
		return k;
	}
	else if (m < n)
	{
		k = mdc(n, m);
		return k;
	}
	else return m;
}

int main(){
	int x, y, i;
	scanf("%d %d", &x, &y);
	i = sel(x, y);
	printf("%d\n", i);	
	return 0;	
}