#include <stdio.h>

/*Vê o tamanho da string*/

int size_string(char v[])
{
	int cont = 0;
	for (int i = 0; v[i] != '\0'; i++) {
		cont++;
	}
	return cont;
}

/*Inverte e printa o inverso da string*/

void string_change(char v[])
{
	int size = size_string(v);
	char inverso[size];
	for (int i = 0; size>i; i++) {
		inverso[i] = v[size-1-i];
	}
	inverso[size] = '\0';
	printf("%s\n", inverso);
}

int main ()
{
	char entrada[255];
	fgets(entrada, 255, stdin);
	string_change(entrada);
	return 0;
}
