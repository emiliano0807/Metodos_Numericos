#include <stdio.h>

struct CD{
    char titulo[100];
    char artista[50];
};
int main(){
    struct CD cd1;
    printf("Ingresa un titulo \n");
    fgets (cd1.titulo,100,stdin);
    printf ("%s\n", cd1.titulo);
    return 0;
}
