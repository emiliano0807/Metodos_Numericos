/*Escribir una función que se llame maximo que reciba dos número por parámetros y que regrese el mayor
de ellos.*/

#include <stdio.h>
int maximo(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
int main() {
    int numero1;
    int numero2;
    printf("Ingrese el primer número entero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &numero2);
    int mayor = maximo(numero1, numero2);
    printf("El número mayor entre %d y %d es: %d\n", numero1, numero2, mayor);
    return 0;
}
