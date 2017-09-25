#include <stdio.h>

int main(){
    /*Fibonnaci do Xº termo*/
    int x, fibb, antefibb = 1, anteantefibb = 0;
    scanf("%d", &x);
    printf("0, 1, ");
    for (int i = 0; i<x-2; i++){
        fibb = anteantefibb+antefibb;
        anteantefibb = antefibb;
        antefibb = fibb;
        printf("%d, ", fibb);
    }
    /*Repetindo o código acima para a formatação sair certa no final*/
    fibb = anteantefibb+antefibb;
    anteantefibb = antefibb;
    antefibb = fibb;
    printf("%d", fibb);
    return 0;
}
