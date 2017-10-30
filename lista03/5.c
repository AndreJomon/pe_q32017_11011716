#include <stdio.h>
#include <stdlib.h>

/*Vê quantas vezes um número repete*/

int num_repeticoes (int *v, int x, int size)
{
	int cont = 0;

	for (int i = 0; size > i; i++) {
		if (x == *(v+i)) {
			cont++;
		}
	}

	if (cont > 1) {
		return cont;
	}
	else {
		return 0;
	}
}

/*Lista de números já checados, para que não haja repetição*/

int verificar(int x, int size, int volta, int * lista)
{
	for (int i = 0; size>i; i++) {
		if (x == *(lista+i)) {
			return 0;
		}
	}

	*(lista+volta) = x;
	return 1;
}

/*Anda pelo vetor e printa o que precisa*/
void passar_vetor(int *v, int size, int *l)
{
	for (int i = 0; size > i; i++) {
		if (verificar(*(v+i), size, i, l)) {
			if (num_repeticoes(v, *(v+i), size)) {
				printf("%d-%d ", *(v+i), num_repeticoes(v, *(v+i), size));
			}
		}
			
	}	
	printf("\n");
}

int main ()
{
	int size;
	int *v, *lista;
	scanf("%d", &size);
	v = malloc(size*sizeof(int));
	lista = malloc(size*sizeof(int));

	if (v==NULL) {
		printf("Não foi possível alocar V");
		return -1;
	}
	else if (lista==NULL) {
		printf("Não foi possível alocar lista");
		return -1;
	}

	for (int i = 0; size>i; i++) {
		scanf("%d", (v+i));
	}
	passar_vetor(v, size, lista);
	free(v);

	return 0;
}
