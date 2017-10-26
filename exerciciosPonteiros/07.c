#include <stdio.h>
#include <stdlib.h>

/*7. Qual o valor da variável x após a execução destas operações:
int x = 1;
x ++;
int *y = &x;
y = y + 1;
printf ("%d\n",x );

>>> x = 2
*/

int main(){
	int x = 1;
	x ++;
	int *y = &x;
	y = y + 1;
	printf ("%d\n",x );
}