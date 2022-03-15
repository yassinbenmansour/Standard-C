#include <stdio.h>
int main()
{
int age = 0; // On initialise la variable
printf("Quel age avez-vous ? ");
scanf("%d", &age); 
printf("Ah ! Vous avez donc %d ans !\n\n", age);
return 0;
}

