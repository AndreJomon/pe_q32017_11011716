#include <stdio.h>
#include <stdlib.h>

/*Já incluso*/
int cmpfunc (const void *a, const void *b)
{
	return(*(int*)a-*(int*)b);
}

/*Calcula mediana*/
double mediana(int *v, int size)
{
	if (size%2 != 0) {
		return v[(size-1)/2];
	}
	return (((double)v[(size-1)/2]+ (double)v[size/2])/2);
		
}

int main ()
{
	int size;
	int *v;
	scanf("%d", &size);
	v = malloc(size*sizeof(int));
	for (int i = 0; size>i; i++) {
		scanf("%d", (v+i));
	}
	qsort(v, size, sizeof(int), cmpfunc);
	printf("%.2lf\n", mediana(v, size));

	free(v);
	return 0;
}
