#include <stdio.h>

int main(){
    int n;
    int i;
    int j;
    printf("Ingresa el numero de escalinatas: ");
    scanf("%d", &n);
        //Escalinatas acendentes
    for ( i = 1; i <= n; i++){
        for ( j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
        // Escalinata descendente
    for (i = n; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}