#include <stdio.h>
#include <string.h>

int main(){
    int len;
    char palabraO1[1000];
    char palabraO2[1000];
    char destino[1000];
    printf("Escriba la primera palabra ");
    scanf("%s", palabraO1);
    
    printf("Escriba la segunda palabra ");
    scanf("%s", palabraO2);

    printf("Antes \n");
    printf("Palabra_1: %s  ", palabraO1);
    printf("Palabra_2: %s \n", palabraO2);

    strcpy(destino, palabraO1);
    strcpy(palabraO1, palabraO2);
    strcpy(palabraO2, destino);

    printf("Despues \n");
    printf("Palabra_1: %s  ", palabraO1);
    printf("Palabra_2: %s\n", palabraO2);
    return 0;
    
}