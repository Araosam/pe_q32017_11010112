#include <stdio.h>
#include <stdlib.h>

/*4. Qual o valor da variável x após a execução destas operações:
int x = 2;
int *y = &x;
*y = 3;
printf ("%d\n",x );

>>> x = 3;
*/

int main(){
	int x = 2;
	int *y = &x;
	*y = 3;
	printf ("%d\n",x );
}