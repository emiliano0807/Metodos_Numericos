#include <stdio.h>
struct fraccion{
    int den; //abajo
    int num; //arriba
};
int multipli(struct fraccion mul1, struct fraccion mul2);
int suma(struct fraccion sum1, struct fraccion sum2);
int resta(struct fraccion res1, struct fraccion res2);
int divicion(struct fraccion div1, struct fraccion div2);
int main(void){
    struct fraccion fract1;
    struct fraccion fract2;
    fract1.den= 3;//Abajo
    fract1.num=4;//Ariba
    fract2.den=6;
    fract2.num=2;
    multipli(fract1, fract2);
    suma(fract1, fract2);
    resta(fract1,fract2);
    divicion(fract1,fract2);
    return 0;
}
int multipli(struct fraccion mul1, struct fraccion mul2){
    int den= mul1.den*mul2.den;
    int num= mul2.num*mul2.num;

    printf("%d/%d\n",num,den);
}
int suma(struct fraccion sum1, struct fraccion sum2){
    int num=(sum2.den*sum1.num)+(sum1.den+sum2.den);
    int den=(sum1.den*sum2.den);
    printf("%d/%d\n", num, den);
    
}
int resta(struct fraccion res1, struct fraccion res2){
    int num=(res2.den*res1.num)-(res1.den+res2.den);
    int den=(res1.den*res2.den);
    printf("%d/%d\n", num, den);
    
}
int divicion(struct fraccion div1, struct fraccion div2){
    int num=(div1.num*div2.den);
    int den=(div1.den*div2.num);
    printf("%d/%d\n", num, den);

}