#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int i[10], x;
float f[10];

int main(){
    printf("\t\tEntero\t\tFlotante\n\n");
    for (int x = 0; x < 10; x++){
        printf("Elemento %d:\t%d\t\t%d\n",x,&i[x], &f[x]);
    }
}