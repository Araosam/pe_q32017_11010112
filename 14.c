#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i, j, soma, media;
	scanf("Entre com 10 valores inteiros: %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	soma = a + b + c + d + e + f + g + h + i + j;
	media = soma/10;
	printf("soma = %d\n media = %d", soma, media);
	return 0;
}