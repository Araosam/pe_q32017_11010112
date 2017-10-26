#include <stdio.h>
#include <stdlib.h>

/*5. Qual o valor da variável x após a execução destas operações:
int x = 10;
int *y = &x;
int *z = &x;
int c = *y + *z;
*y = c;
printf ("%d\n",x );

>>> x = 20
*/

int main(){
	int x = 10;
	int *y = &x;
	int *z = &x;
	int c = *y + *z;
	*y = c;
	printf ("%d\n",x );
}