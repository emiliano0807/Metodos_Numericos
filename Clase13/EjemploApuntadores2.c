#include <stdio.h>
int main(){
    int x = 17, y;
    int * p;
    p = &x;
    printf("El valor de x es: %d\n", *p);
    y= *p+3;
    printf("El Valor de y es: %d\n", y);
    return 0;
}