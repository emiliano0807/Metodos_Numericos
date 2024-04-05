#include <stdio.h>

int main(){
    int lonitudSerie=50;
    int i;
    for (i = 1; i <= (lonitudSerie/2); i++){
        printf("%d, ", 2*i);
        printf("%d, ", 3*i);
    }   
}