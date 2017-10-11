#include <stdio.h>

/*Conversão de temperaturas*/

float celsiusfahrenheit(float c)
{
	return (((c*9)/5)+32);
}

float celsiuskelvin(float c)
{
	return c+273;
}

float fahrenheitcelsius(float f)
{
	return (((f-32)*5)/9);
}



float fahrenheitkelvin(float f)
{
	return ((((f-32)*5)/9)+273);
}

float kelvincelsius(float k)
{
	return k-273;
}

float kelvinfahrenheit(float k)
{
	return ((((k-273)*9)/5)+32);
}

/*Conversão de bases numéricas*/

float decimalbinario(int d, int bin, int pot)
{
	if (d != 0) {
		bin = bin + (pot*(d%2));
		pot *= 10;
		d /= 2;
		return decimalbinario (d, bin, pot);
	}
	return bin; 		
}

float binariodecimal(int bin, int d, int pot)
{
	if (bin != 0) {
		d = d + (bin%10*pot);
		pot *= 2.0;
		d /= 10.0;
		return binariodecimal(bin, d, pot);
	}
	return d;
}

int main()
{
	int conversao, intype, outtype;
	float valor;
	scanf ("%d %d %d %f", &conversao, &intype, &outtype, &valor);
	switch (conversao)
	{
		case 1:
			switch (intype)
			{
				case 1:
					switch(outtype)
					{
						case 1:
							printf("%.2f C\n", valor);
							break;
						case 2:
							printf("%.2f F\n", celsiusfahrenheit(valor));
							break;
						case 3:
							printf("%.2f K\n", celsiuskelvin(valor));
							break;
					}
					break;
				case 2:
					switch(outtype)
					{
						case 1:
							printf("%.2f C\n", fahrenheitcelsius(valor));
							break;
						case 2:
							printf("%.2f F\n", valor);
							break;
						case 3:
							printf("%.2f K\n", fahrenheitkelvin(valor));
							break;
					}
					break;
				case 3:
					switch(outtype)
					{
						case 1:
							printf("%.2f C\n", kelvincelsius(valor));
							break;				
						case 2:
							printf("%.2f F\n", kelvinfahrenheit(valor));
							break;
						case 3:
							printf("%.2f K\n", valor);
							break;
					}
					break;
			}
			break;
		case 2:
			switch (intype)
			{
				case 1:
					switch(outtype)
					{
						case 1:
							printf("%.0f\n", valor);
							break;
						case 2:
							printf("%.0f\n", decimalbinario(valor, 0, 1));
							break;
					}
					break;
				case 2:
					switch(outtype)
					{
						case 1:
							printf("%.0f\n", binariodecimal(valor, 0, 1));
							break;							
						case 2:
							printf("%.0f\n", valor);
							break;
					}
					break;
			}
			break;
	}
	return 0;
}
