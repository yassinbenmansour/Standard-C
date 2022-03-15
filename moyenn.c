#include <stdio.h>

int main(){
    float a ,  b , c , moy;
    printf("3tina 3 nbr a b c :");
    scanf("%f %f %f ", &a ,&b,&c);
    moy = (a+b+c)/3 ;
    printf("la myenne est %.2f" , moy);
    

    return 0;
}