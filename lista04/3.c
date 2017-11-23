#include <stdio.h>
#include <stdlib.h>

typedef struct ficha {
	char nome[100];
	int ra;
	float p1;
	float p2;
	float p3;
	float media;
} ficha;

int main()
{
	FILE *fp;
	fp = fopen("lista_alunos.txt", "r");
	if (fp == NULL) printf("Erro de leitura ou escrita dos arquivos");
	ficha alunos[50];
	float media ;

	for (int i = 0; 50 > i; i++) {
		fscanf(fp,"%s %d %f %f %f", alunos[i].nome, &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
		alunos[i].media = ((alunos[i].p1 + alunos[i].p2 + alunos[i].p3)/3);
	}

	fclose(fp);

	fp = fopen("media_alunos.txt", "w");
	
	for (int i = 0; 50 > i; i++) {
		fprintf(fp, "%s %d %.2f %.2f %.2f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
	}
	fclose(fp);	
}
