#include <stdio.h>
#include <stdlib.h>

/*
1. Receba uma string e conte o numero de vogais dentro dela.
*/

void vog(char ent[255])
{
	// Conta as vogais de uma string
	int c = 0;
	for (int i = 0; ent[i] != '\0'; i++)
	{
		if (ent[i] == 'a' || ent[i] == 'e' || ent[i] == 'i' || ent[i] == 'o' || ent[i] == 'u') 
		{
			c++;
		}		
	}
	printf("%d", c);
}

int main(){
	char entrada[255];
	fgets(entrada, 255, stdin);
	vog(entrada);
	return 0;
}