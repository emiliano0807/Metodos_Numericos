#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[1000];
    char cadena2[1000];
    printf("Ingrese la primera cadena: ");
    scanf("%s", cadena1);
    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadena2);

    int resultado = strcmp(cadena2, cadena1);

    if (resultado == 0) {
        printf("Las dos cadenas son iguales: %d\n", resultado);
    } else if (resultado < 0) {
        printf("La cadena1 es menor que la cadena2: %d\n", resultado);
    } else {
        printf("La cadena1 es mayor que la cadena2: %d\n", resultado);
    }

    return 0;
}
