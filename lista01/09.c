#include <stdio.h>
int main()
{
	double temp;
	int op;
	scanf("%lf %d", &temp, &op);
	printf("%d\n", op);
	if (op == 1)
	{
	temp = (temp*1.8)+32;
	printf("%lf\n", temp);
	}
	else if (op == 2)
	{
	temp = (temp-32)/1.8;
	printf("%lf\n", temp);
	}
	else
	{
	printf("Erro!\n");	
	}
	return 0;
}