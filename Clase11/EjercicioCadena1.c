/*Escribe un programa que reciba una palabra por
teclado.*/
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    printf("Escriba una palabra ");
    scanf("%s", word);
    printf("Usted escribio: %s\n", word);   

    int length= strlen(word);
    for (int i=0; i < length;i++){
        for (int j = 0; j < length; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}