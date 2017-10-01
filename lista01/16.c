#include <stdio.h>

/*Descontos por faltas*/

double descontar(double salario, double falta)
{
	double onus;
	onus = falta*(salario/20);
	return onus;
}

/*Bonus por hora extra*/

double aumento (double salario, double h_extra)
{
	double bonus;
	bonus = h_extra*((salario/160)+40);
	return bonus;
}

/*Responsavel por imprimir o resumo*/

double resumo(double salario, double bonus, double onus, double falta, double h_extra)
{
	printf("# de faltas: %.0lf\n", falta);
	printf("# horas-extra: %.0lf\n", h_extra);
	printf("descontos: %.2lf\n", onus);
	printf("acrescimos: %.2lf\n", bonus);
	printf("salario: %.2lf\n", salario+bonus-onus);
	return 0;
}
	
		
/*Salário base*/

double main ()
{
	int cargo;
	double salario, bonus, onus, falta, h_extra;
	scanf("%d %lf %lf", &cargo, &falta, &h_extra);
	printf ("cargo: ");
	if (h_extra>40) {
		h_extra = 40;
	}

	switch (cargo) {
		case 1:
			salario = 10000;
			printf("Diretor\n");
			break;
		case 2:
			salario = 8000;
			printf("Gerente\n");
			break;
		case 3:
			salario = 5000;
			printf("Engenheiro\n");
			break;
		case 4:
			salario = 3000;
			printf("Técnico\n");
			break;
		case 5:
			salario = 2000;
			printf("Operador\n");
			break;
	}
	onus = descontar(salario, falta);
	bonus = aumento(salario, h_extra);
	resumo (salario, bonus, onus, falta, h_extra);
	return 0;
}
