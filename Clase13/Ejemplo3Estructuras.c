#include <stdio.h>


struct fraccion{
    int den; //abajo
    int num; //arriba
};
int multipli(struct fraccion multi1, struct fraccion multi2);
int main(void){
    struct fraccion fract1;
    struct fraccion fract2;
    fract1.den= 3;
    fract1.num=4;
    fract2.den=6;
    fract2.num=2;
    multipli(fract1, fract2);
    return 0;
}
int multipli(struct fraccion multi1, struct fraccion multi2){
    int den= multi1.den*multi2.den;
    int num= multi2.num*multi2.num;

    printf("%d/%d",num,den);

}