/*Haz un programa que muestre las tablas de multiplicar
como se muestra a continuación.
 M y N son ingresadas por el usuario */
#include <stdio.h>

int main(){
    int M, N, i;
    printf("Ingresa una el tamaño de la Filas: ");
    scanf("%d", &M);
    printf("Ingresa el tamaño de columnas: ");
    scanf("%d", &N);
    printf("\n");
    //printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n\n");
    for (i = 1; i <= M; i++){
        printf("%d\t", i);
            for (int j = 2; j <= N; j++){
                printf("%d\t", i * j);
            }
        printf("\n");
    }
    return 0;
}