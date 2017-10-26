#include <stdio.h>
#include <math.h>

int pot(int n, int p)
{
	int m = n;
	if (p==1) return m;
	m = m * pot(n, p-1);
}

int main(){
	int x, y, res;
	scanf("%d %d", &x, &y);
	res = pot(x, y);
	printf("%d\n", res);
	return 0;	
}