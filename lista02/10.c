#include <stdio.h>

int fibMem[1000];

int fib (int n)
{
	if (n==0) return 0;
	if (n<=2) return 1;
	/* altere a linha abaixo */
	fibMem[n] = fib(n-1) + fib(n-2);
	return fibMem[n];
}

int main ()
{
	int n;

	fibMem[1] = 1;
	fibMem[2] = 1;

	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}
