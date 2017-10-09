#include <stdio.h>

float somar(float x, float y)
{
	return (x + y);
}

float subtrair(float x, float y)
{
	return (x - y);
}

float multiplicar(float x, float y)
{
	return (x * y);
}

float divisao(float x, float y)
{
	return (x / y);
}

float potenciacao(float x, float y)
{
	float base;
	base = x;
	if (y == 0) {
		return 1;
		}
	for (int i = 1; y>i; i++) {
		x = x*base;		
		}
	return x;
}

int main()
{
	float x, y;
	int operacao;
	scanf("%d %f %f", &operacao, &x, &y);
	switch(operacao)
	{
		case 1:
			printf("%.0f\n", somar(x, y));
			break;
		case 2:
			printf("%.0f\n", subtrair(x, y));
			break;		
		case 3:
			printf("%.0f\n", multiplicar(x, y));
			break;
		case 4:
			printf("%.0f\n", divisao(x,y));
			break;
		case 5:
			printf("%.0f\n", potenciacao(x,y));
			break;
	}		
	return 0;
}
