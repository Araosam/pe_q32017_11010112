#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double a, a1, b, t, p, pi;
	a = 1;
	b = 1/(sqrt(2));
	t = 1/4;
	p = 1;
	int i;
	for (i = 0; i < 10; i++)
	{
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - (p*pow((a - a1), 2));
		p = 2*p;
		a = a1;		
	}
	pi = (pow((a+b), 2))/(4*t);
	printf("%.20lf", pi);
	return 0;
}