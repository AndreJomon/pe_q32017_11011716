#include <stdio.h>

int main()
{
	int n;
	scanf ("%d", &n);
	if (n>=100){
		printf("100");
		for (int i = 101; n>=i; i++) {
			if (i%2==0) {
				printf (", %d", i);
			}
		}
	} else {
	printf("Numero invalido");
	}

	return 0;
}
