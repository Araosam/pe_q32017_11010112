#include <stdio.h>
int main()
{
	double temp;
	int op;
	scanf("%lf %d", &temp, &op);
	if (op == 1)
	{
	temp = temp + 273.15;
	printf("%lf\n", temp);
	}
	else if (op == 2)
	{
	temp = temp - 273.15;
	printf("%lf\n", temp);
	}
	else
	{
	printf("Erro!\n");	
	}
	return 0;
}