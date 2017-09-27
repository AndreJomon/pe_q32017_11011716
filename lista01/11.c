#include <stdio.h>
int decimal_para_binario(int valor)
{
    int pot = 1;
    int bin;
    while (valor>0){
        bin = bin + pot*(valor%2);
        pot *= 10;
        valor /= 2;
    }
    return bin;
}

int binario_para_decimal(int valor)
{
    int pot = 1;
    int dec;
    while (valor>0) {
        dec = dec+(valor%10)*pot;
        valor /= 10;
        pot = pot*2;
    }
    return dec;
}


int main(){

    /*Recebendo o valor e a opcao. 1 = Decimal para binario; 2 = Binario para decimal.*/
    int valor, newvalor, opcao, aux=0;
    scanf("%d %d", &valor, &opcao);
    switch (opcao) {
        case 1:
            valor = decimal_para_binario(valor);
            printf("%d", valor);
            break;

        case 2:
            valor = binario_para_decimal(valor);
            printf("%d", valor);
            break;

        default:
            printf("Opcao invalida");

    }
return 0;
}
