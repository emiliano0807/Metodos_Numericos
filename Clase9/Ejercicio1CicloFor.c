#include <stdio.h>

/*Escribe un programa que reciba un número N del usuario y
haga la suma de todos los números desde 1 hasta N.*/
int main(){
    int n;
    int suma = 0;
    int i;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        suma += i;
        if (i<n){
            printf("%d + ", i);
        }else{
            printf("%d", i );
        }
        
    }
    printf(" = %d\n", suma);
    return 0;
}