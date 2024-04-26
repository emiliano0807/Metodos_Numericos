#include <stdio.h>

struct Atleta{
    char nombre[500];
    char deporte[500];
    char pais[500];
    int medallas;
};
int main(){
    struct Atleta A1;
    puts("Ingresa el nombre del Atleta");
    scanf("%s", A1.nombre);
    puts("Ingresa el deporte del atleta");
    scanf("%s", A1.deporte);
    puts("Ingresa el pais de origen");
    scanf("%s", A1.pais);
    puts("Ingresa las medallas ganadas");
    scanf("%i", &A1.medallas);

    printf("%s\n", A1.nombre);
    printf("%s\n", A1.deporte);
    printf("%s\n", A1.pais);
    printf("%i\n", A1.medallas);
}