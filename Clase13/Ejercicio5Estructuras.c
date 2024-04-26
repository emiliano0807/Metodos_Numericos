#include <stdio.h>

struct Atleta{
    char nombre[500];
    char deporte[500];
    char pais[500];
    int medallas;

};
int main(){
    struct Atleta A1[3];
    int i, indice_mayor_medallas, mayor_Medallas;
    for(i=0; i < 3; i++){
    printf("Ingresa el nombre del Atleta %d: ", i + 1);
    scanf("%s", A1[i].nombre);
    printf("Ingresa el deporte del atleta %d: ", i + 1);
    scanf("%s", A1[i].deporte);
    printf("Ingresa el pais de origen %d: ", i + 1);
    scanf("%s", A1[i].pais);
    printf("Ingresa las medallas ganadas %d: ", i + 1);
    scanf("%i", &A1[i].medallas);
    }
    mayor_Medallas=A1[0].medallas;
    for (i = 0; i < 3; i++){
        if (A1[i].medallas > mayor_Medallas){
            mayor_Medallas=A1[i].medallas;
            indice_mayor_medallas=i;
        }
        

    }
    

    printf("%s\n", A1[indice_mayor_medallas].nombre);
    printf("%s\n", A1[indice_mayor_medallas].deporte);
    printf("%s\n", A1[indice_mayor_medallas].pais);
    printf("%i\n", A1[indice_mayor_medallas].medallas);
}