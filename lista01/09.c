#include <stdio.h>

int main(){
    double temperatura, resultado;
    int opcao;

    printf("Qual e a temperatura e qual vai ser a conversao? 1 = Celsius para Fahrenheit; 2 = Fahrenheit para Celsius\n");
    scanf("%lf %d", &temperatura, &opcao);

    switch (opcao) {

    case 1:
        resultado = ((temperatura/5)*9)+32;
        printf("%.1lf", resultado);
        break;

    case 2:
        resultado = ((temperatura-32)/9)*5;
        printf("%.1lf", resultado);
        break;

    default:
        printf("Coloque uma opcao valida");
    }

return 0;
}
