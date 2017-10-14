#include <stdio.h>

int Pascal (int n, int k)
{
	if (k == 0){
		return 1;
	}
	if (k > n){
		return 0;
	}
	return Pascal(n-1, k-1) + Pascal(n-1, k);
}

int main ()
{
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", Pascal(n , k));
	return 0;
}
