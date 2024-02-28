#include <stdio.h>
#include <stdlib.h>

int main(){
    double a=1.0;
    double b=3.0;
    double c=5.0;
    double d=30.0;
    double x=23.0;
    double rsp;

    rsp=a/b+b/c+a/d/(x/d);
    printf("La respuesta es %f", rsp);
    return 0;
}