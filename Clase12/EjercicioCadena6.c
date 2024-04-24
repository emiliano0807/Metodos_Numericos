/*Crea un programa que cuente cuantas ocurrencias de cada letra contiene una palabra.
 Ejemplo:
Palabra
P→1
a →3
l →1
b →1
r →1*/

#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int conteo[26] = {0};
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    for (int i = 0; i < strlen(palabra); i++) {
        char letra = palabra[i];
        if (letra >= 'a' && letra <= 'z') {
            conteo[letra - 'a']++;
        }
    }
    printf("Conteo de letras:\n");
    for (int i = 0; i < 26; i++) {
        if (conteo[i] > 0) {
            printf("%c -> %d\n", 'a' + i, conteo[i]);
        }
    }
    return 0;
}
