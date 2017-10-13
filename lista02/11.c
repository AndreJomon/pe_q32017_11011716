#include <stdio.h>

int decimalbinario(int d, int bin, int pot)
{
	if (d != 0) {
		bin = bin + (pot*(d%2));
		pot *= 10;
		d /= 2;
		return decimalbinario (d, bin, pot);
	}
	return bin; 		
}

int binariodecimal(int bin, int d, int pot)
{
	if (bin != 0) {
		d = d + (bin%10*pot);
		pot *= 2;
		bin /= 10;
		return binariodecimal(bin, d, pot);
	}
	return d;
}

int main ()
{
	int opcao, valor;
	scanf("%d %d", &valor, &opcao);
	if (opcao == 1) {
		printf("%d\n", decimalbinario(valor, 0, 1));
	}
	else if (opcao == 2) {
		printf("%d\n", binariodecimal(valor, 0, 1));
	}
	return 0;
}
