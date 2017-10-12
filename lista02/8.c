#include <stdio.h>

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

/*Calcular o total*/

double total(double salario, double bonus, double onus)
{
	return (salario+bonus-onus);
}
	
		
/*Salário base*/

double main ()
{
	int cargo;
	double salario, bonus, onus, falta, h_extra;
	scanf("%d %lf %lf", &cargo, &falta, &h_extra);
	if (h_extra>40) {
		h_extra = 40;
	}

	switch (cargo) {
		case 1:
			salario = 10000;
			break;
		case 2:
			salario = 8000;
			break;
		case 3:
			salario = 5000;
			break;
		case 4:
			salario = 3000;
			break;
		case 5:
			salario = 2000;
			break;
	}
	onus = descontar(salario, falta);
	bonus = aumento(salario, h_extra);
	printf("%.0lf\n", total(salario, bonus, onus));
	return 0;
}
