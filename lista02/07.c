#include <stdio.h>
#include <math.h>


double convBase(double ent, double exit, double value)
{
	return 666;
}

double convTemp(double ent, double exit, double value)
{
	double c, f, k;
	
	if (ent == 1 && exit == 2)
	{
		f = (value*1.8)+32;
		return f;	
	}
	else if (ent == 1 && exit == 3)
	{
		k = value+273.15;
		return k;
	}
	else if (ent == 2 && exit == 3)
	{
		k = (value-32)/1.8 + 273.15;
		return k;
	}
	else if (ent == 2 && exit == 1)
	{
		c = (value-32)/1.8;
		return c;
	}
	else if (ent == 3 && exit == 2)
	{
		f = ((value-273.15)*1.8)+32; 
		return f;
	}
	else if (ent == 3 && exit == 1)
	{
		c = value-273.15;
		return c;
	}
	else return value;
}

double select(int n, double f1, double f2, double f3)
{
	double s;
	switch (n)
	{
		case 1:
			s = convTemp(f1, f2, f3);
			return s;
		case 2:
			s = convBase(f1, f2, f3);
			return s;			
	}
	return -1;
}

int main(){
	int op;
	double entrada, saida, valor, resultado;
	scanf("%d %lf %lf %lf", &op, &entrada, &saida, &valor);
	resultado = select(op, entrada, saida, valor);
	printf("%.02lf\n", resultado);
	return 0;	
}