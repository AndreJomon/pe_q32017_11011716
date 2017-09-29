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

/*Cáculo da constante*/

double constante()
{
	double c;
	c = (2*(sqrt(2))/9801);
	return c;
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
	numerador = (fatorial(4*k));
	numerador *= (1103 + 26390*k);
	return numerador;
}


/*Denominador da somatoria*/

double den(double k)
{
	double denominador;
	denominador = pow(fatorial(k),4);
	denominador *= pow(396,4*k);
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

/*Conta*/

double main()
{
	double k, pi;
	scanf("%lf", &k);
	pi = constante()*somatoria(k);
	pi = calcpi(pi);
	printf("%.50lf\n", pi);
	return 0;
}
