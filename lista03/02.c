#include <stdio.h>
#include <stdlib.h>

/*
2. Receba uma string e retorne-a invertida.
*/

void inverte(char ent[255], int a)
{
	char inv[255];
	int i, k;
	k = a;
	for (i = 0 ; i <= a; i++)
	{
		inv[i] = ent[k];
		k--;
	}
	printf("%s", inv);
}

int contaletras(char ent[255])
{
	int cont = 0;
	for (int i = 0; ent[i] != '\0'; i++)
	{
		cont++;
	}
	return (cont - 1);
}

int main(){
	char entrada[255];
	fgets(entrada, 255, stdin);
	int c = contaletras(entrada);
	inverte(entrada, c);
	return 0;
}