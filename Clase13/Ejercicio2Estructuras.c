#include <stdio.h>

struct Empleados{
    char nombre[500];
    char sexo[500];
    float sueldo;
};

int main(){
    struct Empleados e1;
    puts("Ingresa el nombre del empleado");
    scanf("%s", e1.nombre);
    puts("Ingresa el sexo del empleado");
    scanf("%s", e1.sexo);
    puts("Inngresa el sueldo del empleado");
    scanf("%f", &e1.sueldo);

    printf("%s\n", e1.nombre);
    printf("%s\n", e1.sexo);
    printf("%.3f\n", e1.sueldo);   
}