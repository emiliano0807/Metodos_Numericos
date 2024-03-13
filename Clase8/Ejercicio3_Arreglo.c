#include <stdio.h>

int main(){
    int A[]={3, 5, 6, 8, 4, 7, 8, 5, 3, 1};
    int B[]={3, 4, 6, 8, 9, 1, 2, 3, 0, 9};
    
    puts("Realizar las siguientes operaciones");
    //A[3] mod (B[2]/2)
    printf("El resultado de A[3] mod (B[2]/2) es: %d\n", A[3] % (B[2]/2));
    //B[A[1]] – A[9]
    printf("El resultado de B[A[1]]-A[9] es: %d\n", B[A[1]] - A[9]);
    //A[0] + A[1+2]
    printf("El resultado de A[0] + A[1+2] es: %d\n", A[0] + A[1+2]);
    //A[5] + B[5]
    printf("El resultado de A[5] + B[5] es: %d\n", A[5] + B[5]);
    //(A[3]/B[2])/2
    printf("El resultado de (A[3]/B[2])/2 es: %d\n", (A[3]/B[2])/2);
}