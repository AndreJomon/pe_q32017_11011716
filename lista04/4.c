#include <stdio.h>
#include <time.h>
#include <limits.h>
#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1 (ulint x)
{
	int y = 1;
	for (int i=0; 1; i++) {
		y *= 2;
		if (y == x) {
			return 1;
		}
		else if (y > x) {
			return 0;
		}
	}
}

ulint f2 (ulint x)
{
	int y;
	for (int i=0; 1; i++) {
		y = 1;
		y =  (y << i);
		if (y & x) {
			return 1;
		}
		else if (y > x) {
			return 0;
		}
	}
}

int main (void)
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;

	tempo_init = clock();
	for (int i=0; i<BIGNUM/3; i++) {
		soma += f1(i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	for (int i=0; i<BIGNUM/3; i++) {
		soma += f2(i);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
	return 0;
}
