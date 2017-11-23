#include <stdio.h>
#include <math.h>

typedef struct coordenada 
{
	float x;
	float y;
	float z;
} coordenada;

float diferenca_quadrada (float n1, float n2)
{
	return pow((n1-n2), 2);
}

float distancia_dois_pontos (coordenada a, coordenada b)
{
	float dist = 0;
	dist = diferenca_quadrada(a.x, b.x);
	dist+= diferenca_quadrada(a.y, b.y);
	dist+= diferenca_quadrada(a.z, b.z);
	return sqrt(dist);		
}

int main()
{
	coordenada a, b;
	scanf("%f, %f, %f", &(a.x), &(a.y), &(a.z));
	scanf("%f, %f, %f", &(b.x), &(b.y), &(b.z));
	printf("%.2lf\n", distancia_dois_pontos(a, b));
}
