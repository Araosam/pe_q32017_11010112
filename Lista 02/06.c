#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double delta(x, y, z)
{
	double j = pow(y, 2) - 4*x*z;
	return j;
}

int bask1(x, y, w)
{
	double r1, h;
	h = sqrt(w);
	r1 = ((-y)- h)/(2*x);
	return r1;
}

int bask2(x, y, w)
{
	double r2, h;
	h = sqrt(w);
	r2 = ((-y)+ h)/(2*x);
	return r2;
}

int main(){
	double a, b, c, d, k1, k2;
	scanf("%lf %lf %lf", &a, &b, &c);
	d = delta(a, b, c);
	k1 = bask1(a, b, d);
	k2 = bask2(a, b, d);
	printf("%.2lf %.2lf", k1, k2);
	return 0;
}

// Erro: raizes enormes!