#include <stdio.h>
#include <time.h>
#include <limits.h>
#define BIGNUM ULONG_MAX

void maior_menor_padrao(int x, int y, int * maior, int * menor)
{
	if (x > y) {
		*maior = x;
		*menor = y;
		return;
	}
	*menor = x;
	*maior = y;
}

void maior_menor_bit(int x, int y, int * maior, int * menor)
{
	int temp = x^y;
	int cont = 0;
	while (temp) {
		temp = temp >> 1;
		cont++;
	}
	temp = 1 << cont-1;
	if((temp & x) == 0) {
		*maior = y;
		*menor = x;
	}

	else if((temp & y) == 0) {
		*maior = x;
		*menor = y;
	}
}

int main ()
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	int x, y, maior, menor;
	int * ma;
	int * me;
	ma = &maior;
	me = &menor;
	scanf("%d %d", &x, &y);
	
	tempo_init = clock();
	maior_menor_padrao(x, y, ma, me);
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	maior_menor_bit(x, y, ma, me);
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
	if (maior == menor) {
		printf("Ambos são do mesmo tamanho");
	}
	else {
	printf("O maior é: %d, e o menor é: %d\n", maior, menor);
	}
	return 0;	
}
