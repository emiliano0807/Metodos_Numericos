#include <stdio.h>
#include <stdbool.h>

int main(){
    int numero=55;
    scanf("%d", &numero);
    if(numero %2==0){
        printf("El numero es par\n");
    }
    printf("Fin del programa\n");
    return 0;
}