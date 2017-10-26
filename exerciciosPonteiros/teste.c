#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 10;
	int *y;
	y = &n;
	int m = *y + 5;
	printf("n: %d\nm: %d\n", n, m);
	return 0;
}