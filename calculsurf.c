#include <stdio.h> 
int main() {
   int r;
   float surface, perimeter;    
   r = 6;
   perimeter = 2*3.14*r;
   printf("Perimeter of the Circle = %f inches\n", perimeter);
	
	surface = 3.14*r*r;
	printf("Area of the Circle = %f square inches\n", surface);

return 0;
}
