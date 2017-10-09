#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c)
{
	return (pow(b,2)-(4*a*c));
}

double baskarapositiva(double a, double b, double c)
{
	return (-b + sqrt(delta(a, b, c)))/2*a;
}

double baskaranegativa(double a, double b, double c)
{
	return (-b - sqrt(delta(a, b, c)))/2*a;
}

/*As saídas nao são as mesmas por conta da aproximação*/

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.2lf %.3lf\n", baskaranegativa(a, b, c), baskarapositiva(a, b, c));
	return 0;
}
