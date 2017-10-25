#include <stdio.h>
#include <math.h>

int decBin(int d)
{
		
}

int binDec(int b, int sum, int cont)
{
	int dig, l, k;
	if (b == 0) return 0;
	if (b == 1) return 1;
	sum += dig*pow(2, cont);
	
	binDec(b/10, sum, l++);
	
	
}

int select(int n, int p)
{
	int q;
	switch (p)
	{
		case 1:
			q = decBin(n);
			return q;
		case 2:
			q = binDec(n, 0, 0);
			return q;			
	}
	return -1;
}

int main(){
	int x, y, i;
	scanf("%d %d", &x, &y);
	i = select(x, y);
	printf("%d", i);	
	return 0;	
}