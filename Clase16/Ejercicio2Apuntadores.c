#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);
    char *arreglo = (char *) malloc(x * sizeof(char));
    for (int i = 0; i < x; i++) {
        printf("Ingrese una letra:\n");
        scanf(" %c", arreglo + i);
    }
    printf("El arreglo en forma inversa es:\n");
    for (int i = x - 1; i >= 0; i--) {
        printf("%c ", *(arreglo + i));
    }
    printf("\n");
    free(arreglo);
    return 0;
}