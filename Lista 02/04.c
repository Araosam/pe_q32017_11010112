#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double soma(x, y)
{
	double d = x + y;
	printf("%.2lf", d);
	return d;
}

double sub(x, y)
{
	double d = x - y;
	printf("%.2lf", d);
	return d;
}

double mult(x, y)
{
	double d = x*y;
	printf("%.2lf", d);
	return d;
}

double divisao(x, y)
{
	double d = x/y;
	printf("%.2lf", d);
	return d;
}

double pot(x, y)
{
	double d = pow(x, y);
	printf("%.2lf", d);
	return d;
}

int main(){
	int op;
	double a, b, c;
	scanf("%d %lf %lf", &op, &a, &b);
	printf("%d %.2lf %.2lf\n", op, a, b);
	switch (op)
	{
		case 1:
			c = soma(a, b);
			printf("%.2lf", c);
		case 2:
			c = sub(a, b);
			printf("%.2lf", c);
		case 3:
			c = mult(a, b);
			printf("%.2lf", c);
		case 4:
			c = divisao(a, b);
			printf("%.2lf", c);
		case 5:
			c = pot(a, b);
			printf("%.2lf", c);
		break;	
	}
	return 0;
}

// Dando erro no switch-case!