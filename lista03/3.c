#include <stdio.h>

void soma_vetores(int v1[], int v2[], int tamanho)
{
	int v3[tamanho];
	for (int i = 0; tamanho > i; i++) {
		v3[i] = v1[i] + v2[i];
		if (i != tamanho-1) {
			printf("%d ", v3[i]);
		}
		else {
		printf("%d\n", v3[i]);
		} 
	}
}

int main ()
{
	int v1[5], v2[5];
	scanf("%d %d %d %d %d", &v1[0], &v1[1], &v1[2], &v1[3], &v1[4]);
	scanf("%d %d %d %d %d", &v2[0], &v2[1], &v2[2], &v2[3], &v2[4]);
	soma_vetores(v1, v2, 5);	

	return 0;
}
