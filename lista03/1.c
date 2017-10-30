#include <stdio.h>

int contar_vogal(char v[], int size)
{
	int cont = 0;
	int i = 0;
	while (v[i] != '\0'){
		if (v[i] == 'a' || v[i] == 'A') {
			cont++;
		}
		else if (v[i] == 'e' || v[i] == 'E') {
			cont++;
		}
		else if (v[i] == 'i' || v[i] == 'I') {
			cont++;
		}
		else if (v[i] == 'o' || v[i] == 'O') {
			cont++;
		}
		else if (v[i] == 'u' || v[i] == 'U') {
			cont++;
		}
		i++;
	}
	return cont;
}

int main ()
{
	char entrada[255];
	fgets(entrada, 255, stdin);
	printf("%d\n", contar_vogal(entrada, 255));
	return 0;
}
