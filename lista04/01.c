#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1. Crie uma struct para representar pontos em um espa¸co tridimensional 
(x, y e z, do tipo float). Com essa struct crie uma fun¸c~ao que receba dois pontos 
com coordenadas em ponto flutuante (no formato (x, y, z) e calcule a dist^ancia 
entre dois pontos. A saída em ponto flutuante deve ser truncada em 2 casas decimais. 
*/

typedef struct ponto 
{
	float x;
	float y;
	float z;
} ponto;

float dist(struct ponto a, struct ponto b)
{
	float d = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2) + pow((b.z - a.z), 2));
	return d;
}

int main()
{
	ponto p1;
	ponto p2;
	scanf("%f, %f, %f" , &(p1.x), &(p1.y), &(p1.z));
	scanf("%f, %f, %f" , &(p2.x), &(p2.y), &(p2.z));
	float d = dist(p1, p2);
	printf("%.2f", d - 0.01);
	return 0;
}