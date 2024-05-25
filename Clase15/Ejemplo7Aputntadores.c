#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,n;
    int *num;
    printf("Teclea la longitud de la cadena? ");
    scanf("%d", &i);

    num=(int*) malloc(i+1);

    printf("Escribe cualquier cosa ");
    scanf("%s", int);

    if(buffer==NULL)exit(1);
    
    for (n = 0; n < i; n++){
        buffer[n]="";
        buffer[i]='\0';
        printf("Random string: %s\n", buffer);
        free(buffer);
    }
    
}