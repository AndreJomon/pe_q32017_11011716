#include <stdio.h>

int inversao(int x)
{
	int result = 0, temp;
	while (x>0) {
		temp = x%10;
		result = (result*10)+temp;
		x /= 10;
	}
	return result;
}

int palindromochecker(int x)
{
	if (x == inversao(x)) {
		return 1;
	}
	return 0;
}

int main()
{
	int x;
	scanf("%d", &x);
	if (palindromochecker(x)) {
		printf("sim\n");
	} else {
		printf("nao\n");
	}
	return 0;
}
