#include <stdio.h>

void intercambio(int*a,int*b);
int main(void){
    int x = 2;
    int y = 4;
    printf("Antes x = %d, y= %d\n", x,y);
    intercambio(&x,&y);
    printf("Despues x = %d, y = %d \n",x,y);
}
void intercambio(int*a,int*b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}