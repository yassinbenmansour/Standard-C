/*programme C pour calculer le périmètre 
et la surface d'un rectangle 
d'une hauteur de 7 pouces 
et d'une largeur de 5 pouce */

/*   Surface d'un rectangle */


#include <stdio.h> 
int largeur;          
int hauteur;         

int surface;           
int perimeter;      

int main() {
	hauteur = 7;
	largeur = 5;

    perimeter = 2*(largeur + hauteur);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	surface = largeur * hauteur;
	printf("surface of the rectangle = %d square inches\n",surface);

return(0);
}
