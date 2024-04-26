#include <stdio.h>

struct CD{
    char titulo[100];
    char artista[50];
    int numCanciones;
    int año;
    float precio;
};
int main(){
    struct CD cd1;
    puts("Ingresa un titulo");
    scanf ("%s",cd1.titulo);
    puts ("Ingresa el artista");
    scanf("%s", cd1.artista);
    puts ("Ingresa el numero total de canciones");
    scanf("%i",&cd1.numCanciones);
    puts("Ingresa el año de lanzamiento");
    scanf("%i", &cd1.año);
    puts("Ingresa el precio del disco (CD)");
    scanf("\n%f", &cd1.precio);
    
    printf ("%s\n", cd1.titulo);
    printf("%s\n", cd1.artista);
    printf("%i\n", cd1.numCanciones);
    printf("%i\n", cd1.año);
    printf("%.4f\n", cd1.precio);
    return 0;
}