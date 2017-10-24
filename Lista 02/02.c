#include <stdio.h>
#include <stdlib.h>

int main(){
	double altura, largura, comprimento, volume;
	scanf("%lf %lf %lf", &largura, &comprimento, &altura);
	volume = largura*altura*comprimento;
	printf("%.2lf", volume);
	return 0;
}