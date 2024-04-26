#include <stdio.h>

struct Empleados{
    char nombre[500];
    char sexo[500];
    float sueldo;
};

int main(){
    struct Empleados e1[5];
    int i;
    float sueldo_menor;
    int indice_menor_sueldo=0;
    for (i = 0; i < 5; i++){
        printf("Ingresa el nombre del empleado %d: ", i + 1);
        scanf("%s", e1[i].nombre);
        printf("Ingresa el sexo del empleado %d: ", i + 1);
        scanf("%s", e1[i].sexo);
        printf("Inngresa el sueldo del empleado %d ",i + 1);
        scanf("%f", &e1[i].sueldo);
        
    }
    sueldo_menor=e1[0].sueldo;
    for (size_t i = 0; i < 5; i++){
        if (e1[i].sueldo < sueldo_menor){
            sueldo_menor=e1[i].sueldo;
            indice_menor_sueldo=i;
        }
        
    }
    printf("%s\n", e1[indice_menor_sueldo].nombre);
    printf("%s\n", e1[indice_menor_sueldo].sexo);
    printf("%.3f\n", e1[indice_menor_sueldo].sueldo);
}