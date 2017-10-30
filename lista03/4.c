#include <stdio.h>

void transposta (int v[][3], int size)
{
	int trans[size][size];
	for (int i = 0; size>i; i++) {
		for (int j = 0; size>j; j++) {
			trans[i][j] = v[j][i];
			printf("%d ", trans[i][j]);
		}
	printf("\n");
	}
}

int main ()
{
	int v[3][3];
	for (int i = 0; 3>i; i++) {
		for (int j = 0; 3>j; j++) {
			scanf("%d", &v[i][j]);
		}
	}
	transposta(v, 3);	
	
	return 0;
}
