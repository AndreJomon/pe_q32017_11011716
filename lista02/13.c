#include <stdio.h>

int mdc (int a, int b, int r)
{
	if (b == 0){
		return a;
	}
	r = a%b;
	a = b;
	b = r;
	return mdc(a, b, r);
}

int main ()
{
	int a, b, r;
	scanf("%d %d", &a, &b);
	printf("%d\n", mdc(a, b, 0));
	return 0;
}
