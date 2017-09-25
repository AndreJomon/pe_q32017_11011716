#include <stdio.h>

int main(){
    /*Fatorial do número X */
    int x, fatorial = 1;
    scanf("%d", &x);
    while(x>0){
        fatorial = fatorial*x;
        x--;
    }
    printf("%d", fatorial);
    return 0;
}
