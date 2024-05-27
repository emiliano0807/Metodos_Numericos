#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, n;
    int * buffer, * p_buffer;

    printf ("Teclea la longitud del arreglo: ");
    scanf("%d", &n);
    buffer=(int*) malloc((n)* sizeof(int));
    if(buffer==NULL) exit(1);
    p_buffer=buffer;
    for ( i = 0; i < n; i++){
        printf("Ingresa el valor %d\n",i);
        scanf("%d", p_buffer);
    }
    p_buffer=buffer;
    printf("\nLos Valores son\n");
    for ( n = 0; n < i; n++){
        printf("Arreglo[%d] = %d \n", n,*p_buffer++);
    }
    free (buffer);
}