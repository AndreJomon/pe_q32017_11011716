#include <stdio.h>

int par_impar (int n)
{
	if (n%2==0) {
		return 0;
	}
	return 1;
}

int main()
{
	int x;
	scanf("%d", &x);
	printf("%d\n", par_impar(x));
	return 0;
}
