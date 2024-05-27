#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);
    int *arr = (int *)malloc(x * sizeof(int));
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < x; i++) {
        scanf("%d", arr + i);
    }
    printf("Los elementos ingresados son:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}