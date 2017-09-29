#include <stdio.h>
#include <math.h>

/*Calculo do fatorial*/

double fatorial(double x)
{
	double fatorial = 1;
	while (x>0) {
		fatorial = fatorial * x;
		x -= 1;
		}
return fatorial;
}

/*Inversão para o pi*/

double calcpi(double n)
{
	double pi;
	pi = 1/n;
	return pi;
}

/*Numerador da somatoria*/

double num(double k)
{
	double numerador;
	numerador = pow(-1,k);
	numerador *= fatorial(6*k);
	numerador *= (13591409 + 545140134*k);
	return numerador;
}


/*Denominador da somatoria*/

double den(double k)
{
	double denominador;
	denominador = fatorial(3*k);
	denominador *= pow(fatorial(k), 3);
	denominador*=pow(640320,((3*k)+(3/2.0)));
	return denominador;
}

/*Somatória*/

double somatoria(double k)
{
	double resultado = 0;
	for (int i = 0; i<k; i++) {
		resultado += num(i)/den(i);
	}
	return resultado;
}

/*Cálcuo bruto*/

double main()
{
	double pi, k;
	scanf("%lf", &k);
	pi = 12*somatoria(k);
	pi = calcpi(pi);
	printf("%.50lf\n", pi);	
	return 0;
}
