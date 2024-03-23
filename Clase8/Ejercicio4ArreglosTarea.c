#include <stdio.h>

int main() {
    int n;
    int arreglo[10000];
    float promedio = 0;
    long long multiplicacion = 1;
    int i = 0; // Variable para iterar
    int valor; // Variable para almacenar el valor ingresado por el usuario

    // Pedimos al usuario que ingrese el número de posiciones del arreglo
    printf("Ingrese el número de posiciones del arreglo : ");
    scanf("%d", &n);
    // Verificamos que el número de posiciones no exceda 20
    if (n > 20 || n <= 0) {
        printf("El número de posiciones debe ser un número positivo.\n");
        return 1;
    }
    // Pedimos al usuario que ingrese los valores para cada posición del arreglo
    printf("Ingrese %d valores para el arreglo:\n", n);
    while (i < n) {
        printf("Valor para la posición %d: ", i + 1);
        scanf("%d", &valor);
        arreglo[i] = valor;
        i++;
    }
    // Calculamos el promedio de todos los elementos del arreglo
    i = 0; // Reiniciamos la variable i para reutilizarla
    while (i < n) {
        promedio += arreglo[i];
        i++;
    }
    promedio /= n;
    // Calculamos la multiplicación de todos los elementos del arreglo
    i = 0; // Reiniciamos la variable i para reutilizarla
    while (i < n) {
        multiplicacion *= arreglo[i];
        i++;
    }
    // Imprimimos los resultados
    printf("\nArreglo:");
    i = 0; // Reiniciamos la variable i para reutilizarla
    while (i < n) {
        printf(" %d", arreglo[i]);
        i++;
    }
    printf("\nPromedio: %.2f\n", promedio);
    printf("Multiplicación: %lld\n", multiplicacion);

    return 0;
}
