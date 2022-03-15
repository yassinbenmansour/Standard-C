#include <stdio.h>

int main() {
	int  x, y;
    printf("\nInput the first number: "); 
    scanf("%d", &x);
    printf("\nInput the second number: ");
    scanf("%d", &y);
  
    if(x > y) 
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
	}
	
	if((y % x)== 0) 
	{
		printf("\nMultiplied!\n");
	} 
	else 
	{
		printf("\nNot Multiplied!\n");
        
	}
    return 0;
        }

