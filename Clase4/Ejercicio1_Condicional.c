#include <stdio.h>
#include <stdbool.h>

int main(){
    int numero;
    puts("Escribe Tu calificacion");
    scanf("%d", &numero);
    if(numero>=8){
        printf("¡Felecidades Aprobaste el curso!\n");
    }
    else 
    puts("Sigue Participando");
    printf("Fin del programa\n");
    return 0;
}