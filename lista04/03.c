#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3. Crie uma struct para representar a ficha de um aluno (nome, n´umero de matr´ıcula,
nota da P1, nota da P2, nota da P3), o nome ter´a no m´aximo 100 caracteres e a lista
conter´a 50 alunos, utilizando essa struct crie uma fun¸c~ao que: leia do arquivo a lista de
alunos (lista alunos.txt) e calcule a m´edia de cada aluno, imprimindo os resultados em
outro arquivo com nome, n´umero de matricula e m´edia. Os pontos flutuantes devem ser
limitados a 2 casas decimais. O conte´udo do arquivo de sa´ıda deve estar no formato do
arquivo lista alunos.txt fornecido. 
*/

typedef struct alunos 
{
	char nome[100];
	float p1, p2, p3, media;
	int ra;
} alunos;

float calc_media(float a, float b, float c)
{
	float d;
	d = (a + b + c)/3;
	return d;
}

int main (int argc, char ** argv)
{
	int i;
	FILE * fp;
	
	if (argc < 2){
		printf("Uso: %s <nome do arquivo>\n", argv[0]);
		return -1;
	}
	fp = fopen(argv[1], "r");
	for (i = 0; i < 50; i++){
		alunos aluno;
		fscanf(fp, "%s %d %f %f %f", &aluno.nome, &aluno.ra, &aluno.p1, 
			&aluno.p2, &aluno.p3);
		aluno.media = calc_media(aluno.p1, aluno.p2, aluno.p3);
		printf("%s %04d %.2f %.2f %.2f %.2f\n", aluno.nome, aluno.ra, 
			aluno.p1, aluno.p2, aluno.p3, aluno.media);
	}
	fclose(fp);
	return 0;
}