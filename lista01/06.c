#include <stdio.h>

int main(){
    /*X elevado a Y*/
    int x, y;
    long int pot = 1;
    scanf("%d %d", &x, &y);
    for(int i=0; i<y; i++){
        pot = pot*x;
    }
    printf("%d", pot);
    return 0;
}
