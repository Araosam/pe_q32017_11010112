#include <stdio.h>
int main()
{
	double temp;
	int op;
	scanf("Entre com dois valores inteiros: %d %d", &temp, &op);
	if (op == 1)
	{
	temp = (temp*1.8)+32;
	printf(temp);
	}
	else if (op == 2)
	{
	temp = (temp-32)/1.8;
	printf(temp);
	}
	else
	{
	printf("Erro!");	
	}
	return 0;
}