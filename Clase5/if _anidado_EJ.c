#include <stdio.h>

int main(){
    int añosAntiguedad;
    double sueldo;
    puts("Escribe los años de antiguedad");
    scanf("%d", &añosAntiguedad);
    puts("Escribe el 10 porciento de su sueldo al mes ");
    scanf("%d", &sueldo);
    if (añosAntiguedad<=5){
        printf("Usted tiene %d de antiguedad");
        if (sueldo>1000)
        {
            printf("Su sueldo es %f");
            printf("Es sujeto a credito");
        }
    }
    printf("No es sujeto a credito");
    return 0;
}
