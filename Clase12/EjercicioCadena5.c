/*Crea un programa que detecte una palabra palíndroma.
 Los palíndromos son palabras que se leen igual de izquierda a derecha que de derecha a izquierda.
 Ejemplo: ala, rotor, salas.*/
#include <stdio.h>
#include <string.h>

int main() {
    char palabra[50]; 
    int i, j; 
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    int longitud = strlen(palabra);
    i = 0;
    j = longitud - 1;
    int esPalindromo = 1;
    while (i < j) {
        if (palabra[i] != palabra[j]) {
            esPalindromo = 0;
        }
    i++;
    j--;
    }

    if (esPalindromo) {
        printf("%s es un palíndromo.\n", palabra);
    } else {
        printf("%s no es un palíndromo.\n", palabra);
    }
    return 0;
}
