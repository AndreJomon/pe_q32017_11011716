#include <stdio.h>
#include <math.h>

long double aproximando_pi(int n)
{
	long double a1, b, t, p, a;
	a = 1.0;
	b = 1.0/(sqrt(2.0));
	t = (1.0/4.0);
	p = 1.0;

	for (int i = 0; i<n; i++) {
		a1 = (a+b)/2.0;
		b = (sqrt(a*b));
		t = t - p*(pow((a-a1),2.0));
		p = 2.0*p;
		a = a1;
	}
	return (pow((a+b),2.0)/(4.0*t));
}

/*Sendo "n" o número de repetições do código acima*/

int main()
{
	int n;
	scanf("%d", &n);
	printf("%.20Lf\n", aproximando_pi(n));
	return 0;
}
