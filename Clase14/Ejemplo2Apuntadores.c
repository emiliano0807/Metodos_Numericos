#include <stdio.h>

int*p,y;
void function(){
    int x=40;
    p=&x;
    y=*p;
    *p=23;
}
int main(){
    function();
    y=*p;
    *p=25;
    printf("El valor de y es %d\n El valor de *p es %d\n El valor de p es %p\n",y,*p,p);
    return 0;
}