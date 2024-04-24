#include <stdio.h>
#include <string.h>

int main() {
    char word[100], word2[100];
    int longitud_word;

    printf("Ingrese la primera palabra: ");
    scanf("%s", word);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", word2);

    longitud_word = strlen(word);

    for (int i = 0; i < longitud_word; i++) {
        strcat(word, word2);
    }
    printf("\n La palabra concatenada es: %s\n", word);
    return 0;
}