#include<stdio.h>
int main()
{
    int x = 10;
    printf("Predecrementing:\n");
    printf("x   = %d\n", x);
    printf("x-- = %d\n", x--);
    printf("x   = %d\n\n", x);
    
    x = 10;
    printf("Postdecrementing:\n");
    printf("  x = %d\n", x);
    printf("--x = %d\n", --x);
    printf("  x = %d\n", x);
    
    return 0;
}
