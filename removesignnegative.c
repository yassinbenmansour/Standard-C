#include <stdio.h>
int main(){

    int a ;
    printf("Input a value (negative): \n");
    scanf("%d", &a);
    a = a*-1;
    printf("\n Absolute value = %d  " , a);

    return 0;
}