#include <stdio.h>
#include <math.h>

int fat(int a)
{
	int c, d;
	c = a;
	if (c <= 1) return c;
	d = c*fat(a-1);
}

int coef(int m, int n)
{
	int k;
	k = fat(m)/(fat(n)*fat(m-n));
	return k;
}

int main(){
	int x, y, i;
	scanf("%d %d", &x, &y);
	i = coef(x, y);
	printf("%d\n", i);	
	return 0;	
}