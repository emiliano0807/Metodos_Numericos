#include <stdio.h>

/*Escriba un programa en C que utilice un ciclo para producir
la siguiente tabla de valores*/

int main(){
    int A=12;
    int i=0;
    printf("A\tA+2\tA+4\tA+6\n");
    for ( i = 3; i <= A; i+=3){
        printf("%d \t", i);
        printf("%d  \t", i+2);
        printf("%d   \t", i+4);
        printf("%d\n",i+6);
    }
return 0;
}