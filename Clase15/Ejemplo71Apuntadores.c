#include <stdio.h>
#include <stdlib.h>

int i[10], x;
float f[10];
int main (void){
    printf("\t\tEntero\t\tFlotante");
    for ( x = 0; x < 10; x++){
        printf("Elemento %d: \t%d\t\t%f\n", x, &i[x], &f[x]);
    }
}