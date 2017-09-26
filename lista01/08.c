#include <stdio.h>

int main(){
    /*Fibonnaci do Xº termo*/
int x, fib1, fib2, fib3;
printf("Até qual termo do Fibonacci?\n");
scanf("%d", &x);
if (x==0){
    printf("0");
} else if (x==1){
        printf("0, 1");
} else{
    printf("0, 1");
    fib1 = 0;
    fib2 = 1;
    for(int i=1; x>i; i++){
            fib3 = fib1+fib2;
            fib1 = fib2;
            fib2 = fib3;
            printf(", %d", fib3);
    }
}
}
