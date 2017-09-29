#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i, j, soma;
	float media;
	scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	soma = a + b + c + d + e + f + g + h + i + j;
	media = soma/10.0;
	printf("soma = %d\nmedia = %f\n", soma, media);
	return 0;
}