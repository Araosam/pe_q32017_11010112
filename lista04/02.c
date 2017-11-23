#include <stdio.h>
#include <stdlib.h>

/*
2. crie uma struct que represente um cron^ometro definido por minutos, segundos e 
decimos, todos inteiros. Fa¸ca uma fun¸c~ao que calcule e retorne a diferen¸ca entre 
duas medi¸c~oes de tempo (t2 - t1). Utilize scanf("%dm %ds %d",...) como formata¸c~ao. 
*/

typedef struct crono 
{
	int min;
	int seg;
	float dec;
} crono;

float converte (struct crono a)
{
	float b = (a.min*60)+(a.seg)+(a.dec/100);
	return b;
}

crono reconverte(float a)
{
	crono x;
	int b = a;
	float d = (a - b)*100; // erro para numeros de digito unico
	x.min = a/60;
	x.seg = b%60;
	x.dec = d; 
	return x;
}

void diferenca(struct crono a, struct crono b)
{
	crono c3;
	float m = converte(a);
	float n = converte(b);
	float p = n - m;
	if (p < 0){
		p = p*(-1);
		c3 = reconverte(p);
		printf("-%dm %ds %.0f" , (c3.min), (c3.seg), (c3.dec));
	}
	else{
		c3 = reconverte(p);
		printf("%dm %ds %.0f" , (c3.min), (c3.seg), (c3.dec));
	}
}

int main()
{
	crono c1;
	crono c2;
	scanf("%dm %ds %f" , &(c1.min), &(c1.seg), &(c1.dec));
	scanf("%dm %ds %f" , &(c2.min), &(c2.seg), &(c2.dec));
	diferenca(c1, c2);
	return 0;
} 