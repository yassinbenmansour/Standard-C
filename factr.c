#include<stdio.h>
int main()
{
    int nbr , comp , fact=1;
    printf("entre un nombre : ");
    scanf("%d",&nbr);
    for ( comp = 1; comp <= nbr; comp++)
    {
        fact = fact*comp ;
    }
            printf("factorielle est  %d \n " , fact);


    return 0;
}