#include <stdio.h>

int main(){
    int HST;
    int PH;
    int CSS;
    puts("Escribe las horas semanales trabajadas");
    scanf("%d", &HST);
    puts("EScribe el precio por hora");
    scanf("%d", &PH);
    if (HST<=40){
    CSS=(HST*40);
        printf("Su salario es = %d \n", CSS);
    }else if (HST>40){
        CSS=(40*PH+(PH*1.5*(HST-40)));
        printf("Su salario es  = %d \n", CSS);
    }
    printf("Fin del programa\n");
    return 0;
}