#include <stdio.h>
#include <string.h>

void inversor(char palabra[10], char resultado[10]);
int main(){
    char palabra [10];
    char resultado[10];

    printf("Ingrese una palabra");
    scanf("%s", palabra);
    inversor(palabra, resultado);
    printf("La palabra invertida es: %s", resultado);
    return 0;
}

void inversor (char palabra[10], char resultado[10]){
    int longitud = strlen(palabra);
    for (int i = longitud-1; i >= 0; i--){
        resultado[i]=palabra[longitud-1-i];
    }
    
}