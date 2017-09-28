#include <stdio.h>
int main()
{
	int i, primeiro, segundo, proximo, cont;
	primeiro = 0;
	segundo = 1;
	scanf("Entre com um valor inteiro: %d", &i);
	for (cont = 0; cont < i; cont++)
	{
		if (cont <= 1)
		{
			proximo = cont;
		}
		else
		{
			proximo = primeiro + segundo;
			primeiro = segundo;
			segundo = proximo;
		}
		printf("%d, ", proximo);
	}
	return 0;
}