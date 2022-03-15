#include <stdio.h>
int main(){
    int a , b , c ;
    a = 12;
    b = 5666;
    c = 43;
    if (a>b && a>c)
    {
        printf("a est max number %d \n " , a);
    }
    else if (b>a && b>c)
    {
        printf("b est max number %d \n " , b);
    }
    else if (c>a && c>a)
    {
        printf("c est max number %d \n " , c);

    }
    
    
    
    return 0;
}