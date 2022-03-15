//
//  main.c
//  xxxxx
//
//  Created by Yassinebenmansour on 6/12/2021.
//

#include <stdio.h>

int main(){
    int a ,  b , c ;
    printf("3tina 3 nbr a b c : \n");
    scanf("%d  %d  %d ", &a , &b , &c);
    

    if (a>b  && a>c)
    {
        printf(" plus grand a \n");
        if (b > c) {
            printf("  a  b c \n");
            
        }else
            printf("  a  c b \n");
        
    }
    else if (b>a && b>c)
    {
        printf(" plus grand b \n");
        if (a > c) {
            printf("  b  a  c \n");
            
        }else
            printf("  b  c  a  \n");
    }
    else if (c>a && c>b)
    {
        printf(" plus grand  c ");
        if (b > a) {
            printf("  c  b  a \n");
            
        }else
            printf("  c  a  b \n");
    }
    else
    printf("bye");

    
    
    

    return 0;
}
