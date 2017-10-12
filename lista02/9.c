#include <stdio.h>

int potencial (int x, int y, int total, int contagem)
{
	if (contagem >= y) {
		return total;
	}
	contagem++;
	total *= x;
	return potencial(x, y, total, contagem);
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", potencial(x, y, 1, 0));
	return 0;
}
