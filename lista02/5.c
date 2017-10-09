#include <stdio.h>

int fatorial(int n)
{
	int resultado;
	resultado = 1;
	for (int i = 1; n>=i; i++) {
		resultado *= i;
		}
	return resultado;
}

int binomial(int n, int k)
{
	int denominador;
	denominador = fatorial(k)*fatorial(n-k);
	return fatorial(n)/denominador;
}

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", binomial(n, k));
	return 0;
}
