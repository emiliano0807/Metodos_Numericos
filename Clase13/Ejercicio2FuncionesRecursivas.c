/*Haz un programa con funciones recursivas que
calcule el factorial de un número n ingresado desde
teclado.Ej. N = 5*/
#include <stdio.h>
int factorial(int n);
int main(){
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("El factorial de %d es %d\n", n, factorial(n));
    return 0;
}
int factorial(int n){
    if (n == 0){
        printf("1\n");
        return 1;
    }else
        return n * factorial(n - 1);
}
