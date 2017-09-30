#include <stdio.h>

/*Soma do valor*/

double soma (double x)
{
	double total = 0;
	for (int i = 1; x>=i; i++) {
		total += i;
	}
	return total;
}

double main()
{
	double numero;
	scanf("%lf", &numero);
	numero = soma(numero);
	printf("%.0lf\n", numero);
	return 0;
}
