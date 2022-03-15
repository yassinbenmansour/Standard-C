#include <stdio.h>

int main() {
    float nbr [5];
    int a , p=0 , n=0 ;
    printf("\nInput the first number: "); 
    scanf("%f", &nbr[0]);
    printf("\nInput the second number: "); 
    scanf("%f", &nbr[1]);
    printf("\nInput the third number: "); 
    scanf("%f", &nbr[2]);
	printf("\nInput the fourth number: "); 
    scanf("%f", &nbr[3]);
    printf("\nInput the fifth number: "); 
    scanf("%f", &nbr[4]);
    for ( a = 0; a <5 ; a++)
    {
        if(nbr[a] > 0)
		{
			
			p++;
		}
		else if(nbr[a]< 0)
		{
			n++;
		}
        
    }


    printf("\nNumber of positive numbers: %d", p);
	printf("\nNumber of negative numbers: %d", n);
	printf("\n");

    



    return 0;
}


