#include <stdio.h>

double main()
{
int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
double soma, media;
scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);

soma = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
media = soma/10;
printf("soma = %.0lf\n", soma);
printf("media = %0.1lf\n", media);
}
