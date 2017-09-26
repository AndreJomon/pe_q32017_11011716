#include <stdio.h>

main(){

    double temp, novatemp;
    int option;
    printf("Qual e a temperatura e qual vai ser a conversao? 1 = Celsius para Kelvin; 2 = Fahrenheit para Kelvin\n");

    do{
    scanf("%lf %d", &temp, &option);
    if (option != 1 && option != 2){
        printf("Coloque uma opcao valida\n");
    }
    }while(option != 1 && option != 2);

    if (option == 1){
        novatemp = temp + 273.15;
        printf("%.2lf", novatemp);
    }
    else if (option == 2){
        novatemp = temp - 273.15;
        printf("%.2lf", novatemp);

    }
    return 0;
}
