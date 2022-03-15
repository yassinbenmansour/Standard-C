/* Écrivez un programme C qui accepte 4 entiers p, q, r, s de l'utilisateur où q, r et s sont positifs et p est pair.
 Si q est supérieur à r et s est supérieur à p et 
 si la somme de r et s est supérieure à la somme de p et q imprime "Valeurs correctes",
 sinon, imprimez "Mauvaises valeurs" */




#include <stdio.h>
int main() 
{
	int p, q, r, s;
		    
    printf("\nentree nbr 1: "); 
    scanf("%d", &p);
    printf("\nentree nbr 2: ");
    scanf("%d", &q);
    printf("\nentree nbr 3: ");
    scanf("%d", &r);
    printf("\nentree nbr 4: ");
    scanf("%d", &s);

	if((q > r) && (s > p) && ((r+s) > (p+q)) && (r > 0) && (s > 0) && (p%2 == 0))
    {
		printf("\n Correct valeurs\n");
	} 
	else 
    {
		printf("\nMauvaises valeurs\n");
	}
	return 0;
}
